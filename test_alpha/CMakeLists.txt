# https://pcl.readthedocs.io/projects/tutorials/en/master/using_pcl_pcl_config.html#using-pcl-pcl-config

find_package(PCL 1.2)
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})
add_executable(test_alpha test_alpha.cpp)
target_link_libraries(test_alpha ${PCL_LIBRARIES})