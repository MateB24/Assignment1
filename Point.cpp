/*
Mate Barabas 40285661
Rostislav Rusev 40208933
Nicolae Rusu 40245233
*/

#include "Point.h"

Point::Point() {
  x = 0;
  y = 0;
  z = 0;
}

int Point::getX() { return x; }
int Point::getY() { return y; }
int Point::getZ() { return z; }

Point::Point(int x, int y, int z) {
  this->x = x;
  this->y = y;
  this->z = z;
}

int Point::translate(int d, char axis) {
  switch (axis) {
    case 'x':
      x += d;
      break;
    case 'y':
      y += d;
      break;
    case 'z':
      z += d;
      break;
    default:
      return -1;
  }
  return 0;
}

void Point::display() {
  std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
}

Point::~Point() { std::cout << "Point destructor called" << std::endl; }