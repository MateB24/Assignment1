/*
Mate Barabas 40285661
Rostislav Rusev 40208933
Nicolae Rusu 40245233
*/
#include <iostream>

#include "Triangle.h"

void printArray(int* arr, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d \n", arr[i]);
  }
}

void initializeArray(int* arr, int size) {
  for (int i = 0; i < size; i++) {
    arr[i] = i;
  }
}

int* createArray(int size) { return new int[size]; }

void deleteArray(int* arr) { delete[] arr; }

bool isValidInt(const std::string& str) {
  if (str.empty() || ((!isdigit(str[0])) && (str[0] != '-') && (str[0] != '+')))
    return false;
  char* p;
  strtol(str.c_str(), &p, 10);
  return (*p == 0);
}

int main() {
  std::cout << "Enter the size of the array: ";
  int size;
  std::cin >> size;
  int* arr = createArray(size);
  initializeArray(arr, size);
  printArray(arr, size);
  deleteArray(arr);

  Point* p1 = new Point(0, 0, 0);
  Point* p2 = new Point(1, 0, 0);
  Point* p3 = new Point(0, 1, 0);

  Triangle triangle(p1, p2, p3);

  int choice;
  do {
    std::cout << "Menu:" << std::endl;
    std::cout << "1. Display Triangle Coordinates" << std::endl;
    std::cout << "2. Translate Triangle" << std::endl;
    std::cout << "3. Calculate Area" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
      case 1:
        triangle.display();
        break;
      case 2: {
        std::string d_str;
        char axis;
        std::cout << "Enter distance to translate: ";
        std::cin >> d_str;
        if (!isValidInt(d_str)) {
          std::cout << "Invalid d!" << std::endl;
          break;
        }
        int d = std::stol(d_str);
        std::cout << "Enter axis (x, y, z): ";
        std::cin >> axis;
        int result = triangle.translate(d, axis);
        if (result == -1) {
          std::cout << "Invalid axis!" << std::endl;
        } else {
          std::cout << "Translation successful!" << std::endl;
        }
        break;
      }
      case 3:
        std::cout << "Area: " << triangle.calcArea() << std::endl;
        break;
    }
  } while (choice != 4);

  return 0;
}