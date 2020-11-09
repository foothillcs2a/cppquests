// Student ID: 20433004
// TODO - Replace the number above with your actual Student ID
// Etox.cpp
// 2a-Lab-01
//
#include <cmath>   // needed for sqrt
#include <cstdlib> // for exit()
#include <iostream>
#include <sstream>
using namespace std;
double etox_5_terms(double x) {
  // TODO - Your code here
  return 1 + x + x * x / 2 + x * x * x / (3 * 2) + x * x * x * x / (4 * 3 * 2);
}