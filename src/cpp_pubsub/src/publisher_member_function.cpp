#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "tutorial_interfaces/msg/num.hpp"

using namespace std::chrono_literals;

// create subclass of Node, use std::bind() to register a member function as a callback from the timer

class MinimalPublisher : public rclcpp::Node
{
public:
  // publisc constructor
  MinimalPublisher()
  : Node("minimal_publisher"), count_(0)
  {
    // create publisher object using inherited method from Node
    publisher_ = this->create_publisher<tutorial_interfaces::msg::Num>("topic", 10);
    // create timer using inherited Node method, specify rate to call the publishing callback method
    timer_ = this->create_wall_timer(
      500ms, std::bind(&MinimalPublisher::timer_callback, this));
  }

private:
  // callback method to publish data
  void timer_callback()
  {
    auto message = tutorial_interfaces::msg::Num();
    message.num = this->count_++;
    RCLCPP_INFO(this->get_logger(), "Publishing: '%d'", message.num);
    publisher_->publish(message);
  }

  // timer object
  rclcpp::TimerBase::SharedPtr timer_;
  // publisher object
  rclcpp::Publisher<tutorial_interfaces::msg::Num>::SharedPtr publisher_;
  // count of messages published (0+)
  size_t count_;
};

int main(int argc, char *argv[])
{
  // start the node
  rclcpp::init(argc, argv);
  // keep the node running so it can keep publishing
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  // eventaully shut down
  rclcpp::shutdown();
  return 0;
}
