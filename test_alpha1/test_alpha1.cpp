#include <iostream>
#include <pcl/common/common.h>
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>

/** @brief PCL point object */
typedef pcl::PointXYZRGBA PointT;

/** @brief PCL Point cloud object */
typedef pcl::PointCloud<PointT> PointCloudT;

int main(int argc, char** argv)
{
  PointCloudT::Ptr cloud(new PointCloudT);
  pcl::io::loadPLYFile (argv[1], *cloud);

  pcl::visualization::PCLVisualizer viewer;
  viewer.setBackgroundColor (0.356, 0.356, 0.709);
  viewer.addPointCloud(cloud);
  viewer.setPointCloudRenderingProperties (pcl::visualization::PCL_VISUALIZER_POINT_SIZE, 1);
  // pcl::io::savePLYFileASCII ("test_pcd.ply", *cloud);
  // while (!viewer.wasStopped())
  viewer.spin();

  return 0;
}