# alpha_visualizer

This is a very simple visualizer based on [PCL](https://pointclouds.org). It can visualize PLY files with transparency / opacity (alpha value). It is used to visualize the radiance field as point clouds in [Switch-NeRF](https://github.com/MiZhenxing/Switch-NeRF).

## Compiling
You should first install PCL. Please refer to its official [website](https://pointclouds.org).

Then run following commands:

```sh
mkdir build
cd build
cmake ..
make
```
If you get cmake warnings about VTK or Qt5, you can specify the Qt5 path in the cmake, for example:

```sh
cmake -DQt5_DIR=/path/to/your/qt5/lib/cmake/Qt5 ..
```

## visualizing
Given several point clouds `file1.ply`, `file2.ply`, run following commands to visualize them together:

```sh
./build/alpha_visualizer/alpha_visualizer file1.ply file2.ply
```



