# https://stackoverflow.com/questions/34438357/cmake-one-build-directory-for-multiple-projects
cmake_minimum_required(VERSION 3.2.2)
project(alpha_visualizer)

find_package(PCL 1.2)

add_subdirectory(alpha_visualizer)