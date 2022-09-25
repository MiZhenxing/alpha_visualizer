# https://stackoverflow.com/questions/34438357/cmake-one-build-directory-for-multiple-projects
cmake_minimum_required(VERSION 3.2.2)
project(TestPCL)

find_package(PCL 1.2)


add_subdirectory(test_alpha)
add_subdirectory(test_alpha1)
add_subdirectory(test_alpha_multiple)
add_subdirectory(test_cloud_viewer)
add_subdirectory(pcl_visualizer_demo)
add_subdirectory(pcl_viewer)
