#ifndef  WA_PUBLISHER_H
#define WA_PUBLISHER_H

#include "rclcpp/rclcpp.hpp"

#include <chrono>
#include <string>

namespace wa_helper
{
/**
 * Generic convenience class for WA publisher nodes
 * <T> is
*/
template <typename T>
class WAPublisher : public rclcpp::Node
{
private:
  T (*_fn)();
  rclcpp::TimerBase::SharedPtr _timer;
  // publisher object
  typename rclcpp::Publisher<T>::SharedPtr _publisher;
  void publish_message() {
    this->_publisher->publish(this->_fn());
  }

public:
  WAPublisher(std::string node_name, T (*fn)(), int delay_ms, std::string topic_name, int queue_size) : Node(node_name)
  {
    this->_fn = fn;
    this->_publisher = this->create_publisher<T>(topic_name, queue_size);
    this->_timer = this->create_wall_timer(std::chrono::milliseconds(delay_ms), std::bind(&WAPublisher<T>::publish_message, this));
  }
};

}

#endif
