#include "../include/wa_helper/wa_publisher.hpp"

/**
 * Generic convenience class for WA publisher nodes
 * <T> is the msg type
*/
//template <typename T>
//wa_helper::WAPublisher<T>::WAPublisher(T (*fn)(), int delay_ms, std::string topic_name, int queue_size) : Node("minimal_publisher")
//{
//  this->_fn = fn;
//  this->_publisher = this->create_publisher<T>(topic_name, queue_size);
//  this->_timer = this->create_wall_timer(std::chrono::milliseconds(delay_ms), std::bind(&WAPublisher<T>::callback, this));
//}
