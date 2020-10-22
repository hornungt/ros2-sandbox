cmake_minimum_required(VERSION 3.5)
project(wa_pubsub)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(tutorial_interfaces REQUIRED)
find_package(std_msgs REQUIRED)
find_package(wa_helper REQUIRED)

set(req_deps
  "rclcpp"
  "tutorial_interfaces"
  "wa_helper"
  "std_msgs"
)

add_executable(wa_pub_test src/wa_pub_test.cpp)
ament_target_dependencies(wa_pub_test ${req_deps})

install(TARGETS wa_pub_test
  DESTINATION lib/${PROJECT_NAME})

target_link_libraries(wa_pub_test wa_helper::wa_helper)


ament_package()
