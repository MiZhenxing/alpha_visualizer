#include <iostream>
#include <pcl/common/common.h>
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>
#include <vector>
#include <string>

/** @brief PCL point object */
typedef pcl::PointXYZRGBA PointT;

/** @brief PCL Point cloud object */
typedef pcl::PointCloud<PointT> PointCloudT;

int main(int argc, char** argv)
{
  int cloud_num = argc - 1;
  std::vector<PointCloudT::Ptr> clouds;

  for (int i = 0; i < cloud_num; i ++) {
    PointCloudT::Ptr cloud(new PointCloudT);
    clouds.push_back(cloud);
    pcl::io::loadPLYFile(argv[i + 1], *clouds[i]);
  }

  // PointCloudT::Ptr cloud(new PointCloudT);
  // pcl::io::loadPLYFile (argv[1], *cloud);
  // pcl::io::loadPCDFile (argv[1], *cloud);

  pcl::visualization::PCLVisualizer viewer;
  viewer.setBackgroundColor (1.0, 1.0, 1.0);
  // viewer.setBackgroundColor (0.356, 0.356, 0.709);
  for (int i = 0; i < cloud_num; i ++) {
    auto & cloud = clouds[i];
    viewer.addPointCloud(cloud, std::to_string(i));
    viewer.setPointCloudRenderingProperties (pcl::visualization::PCL_VISUALIZER_POINT_SIZE, 2, std::to_string(i));
  }

  // pcl::io::savePLYFileASCII ("test_pcd.ply", *cloud);
  // while (!viewer.wasStopped())
  viewer.spin();

  return 0;
}