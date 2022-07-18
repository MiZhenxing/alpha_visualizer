# https://stackoverflow.com/questions/34438357/cmake-one-build-directory-for-multiple-projects
cmake_minimum_required(VERSION 3.2.2)
project(TestPCL)

add_subdirectory(test_alpha)
add_subdirectory(test_alpha1)
add_subdirectory(test_cloud_viewer)
add_subdirectory(pcl_visualizer_demo)
