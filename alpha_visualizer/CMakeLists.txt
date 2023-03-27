# https://pcl.readthedocs.io/projects/tutorials/en/master/using_pcl_pcl_config.html#using-pcl-pcl-config

find_package(PCL 1.2)
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})
add_executable(alpha_visualizer alpha_visualizer.cpp)
target_link_libraries(alpha_visualizer ${PCL_LIBRARIES})