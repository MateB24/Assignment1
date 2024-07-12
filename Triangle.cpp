/*
Mate Barabas 40285661
Rostislav Rusev 40208933
Nicolae Rusu 40245233
*/

#include "Triangle.h"

Triangle::Triangle() {
  vertex_1 = nullptr;
  vertex_2 = nullptr;
  vertex_3 = nullptr;
}

Triangle::Triangle(Point* vertex_1, Point* vertex_2, Point* vertex_3) {
  this->vertex_1 = vertex_1;
  this->vertex_2 = vertex_2;
  this->vertex_3 = vertex_3;
}

int Triangle::translate(int d, char axis) {
  int result1 = vertex_1->translate(d, axis);
  int result2 = vertex_2->translate(d, axis);
  int result3 = vertex_3->translate(d, axis);

  if (result1 == -1 || result2 == -1 || result3) {
    return -1;
  }

  return 0;
}

Triangle::~Triangle() {
  delete vertex_1;
  delete vertex_2;
  delete vertex_3;
  std::cout << "Triangle destructor called" << std::endl;
}

double Triangle::calcArea() {
  double a = distance(vertex_1, vertex_2);
  double b = distance(vertex_2, vertex_3);
  double c = distance(vertex_3, vertex_1);
  double S = (a + b + c) / 2;
  return sqrt(S * (S - a) * (S - b) * (S - c));
}

double Triangle::distance(Point* p1, Point* p2) {
  return sqrt(pow(p1->getX() - p2->getX(), 2) +
              pow(p1->getY() - p2->getY(), 2) +
              pow(p1->getZ() - p2->getZ(), 2));
}

void Triangle::display() {
  std::cout << "Triangle vertices:" << std::endl;
  vertex_1->display();
  vertex_2->display();
  vertex_3->display();
}