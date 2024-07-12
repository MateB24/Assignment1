/*
Mate Barabas 40285661
Rostislav Rusev 40208933
Nicolae Rusu 40245233
*/

#ifndef INC_ASSIGNMENT1_INCLUDE_TRIANGLE_H
#define INC_ASSIGNMENT1_INCLUDE_TRIANGLE_H

#include "Point.h"
class Triangle {
 private:
  Point *vertex_1, *vertex_2, *vertex_3;

 public:
  Triangle();
  Triangle(Point* vertex_1, Point* vertex_2, Point* vertex_3);
  double distance(Point* p1, Point* p2);
  int translate(int d, char axis);
  double calcArea();
  void display();
  ~Triangle();
};

#endif  // INC_ASSIGNMENT1_INCLUDE_TRIANGLE_H