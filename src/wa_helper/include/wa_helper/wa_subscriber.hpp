#include <memory>

#include "rclcpp/rclcpp.hpp"

using std::placeholders::_1;

template <typename T>
class WASubscriber : public rclcpp::Node
{

public:
  WASubscriber(std::string node_name, std::string topic_name, void (*_fn)(T), int queue_size) : Node(node_name)
  {
    this->create_subscription<T>(topic_name, queue_size, std::bind(_fn, this, _1))
  }
}
// todo hornung - finish filling out this class, then CMakeLists.txt and package.xml
