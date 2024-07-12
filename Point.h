/*
Mate Barabas 40285661
Rostislav Rusev 40208933
Nicolae Rusu 40245233
*/

#ifndef INC_ASSIGNMENT1_INCLUDE_POINT_H
#define INC_ASSIGNMENT1_INCLUDE_POINT_H

#include <iostream>

class Point {
 private:
  int x, y, z;

 public:
  Point();
  Point(int x, int y, int z);
  int translate(int d, char axis);
  void display();
  ~Point();
  int getX();
  int getY();
  int getZ();
};

#endif  // INC_ASSIGNMENT1_INCLUDE_POINT_H