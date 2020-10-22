#include "wa_helper/wa_publisher.hpp"
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "tutorial_interfaces/msg/num.hpp"

#include <memory>
#include <string>

unsigned short int count = 0;

//tutorial_interfaces::msg::Num callback() {
std_msgs::msg::String callback(){
  auto message = std_msgs::msg::String();//tutorial_interfaces::msg::Num();
  message.data = "wa_helper testing :: " + std::to_string(count++);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Publishing: '%s'", message.data.c_str());
  return message;
}

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  // rclcpp::spin(std::make_shared<wa_helper::WAPublisher<tutorial_interfaces::msg::Num>>(&callback, 250, "wa_topic", 10));
  rclcpp::spin(std::make_shared<wa_helper::WAPublisher<std_msgs::msg::String>>("wa_test_node", &callback, 100, "wa_topic", 10));

  rclcpp::shutdown();
  return 0;
}
