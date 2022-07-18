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

  for (double pointX = 0; pointX < 0.255; pointX += 0.05)
  {
    for (double pointY = 0; pointY < 0.255; pointY += 0.05)
    {
      PointT p;
      p.x = pointX;
      p.y = pointY;
      p.z = 0;

      p.r = 255;
      p.g = 255;
      p.b = pointX * 1000;

      p.a = 255 - (pointX * 1000); // Set transparency
      cloud->push_back(p);
    }
  }

  pcl::visualization::PCLVisualizer viewer;
  viewer.setBackgroundColor (0.5, 0.5, 0.5);
  viewer.addPointCloud(cloud);
  viewer.setPointCloudRenderingProperties (pcl::visualization::PCL_VISUALIZER_POINT_SIZE, 20);
  pcl::io::savePLYFileASCII ("test_pcd.ply", *cloud);
  // while (!viewer.wasStopped())
  viewer.spin();

  return 0;
}