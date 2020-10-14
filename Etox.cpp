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
int main(int argc, char **argv) {
  string user_input;
  double x;
  cout << "Enter a value for x: ";
  getline(cin, user_input);
  istringstream(user_input) >> x;
  // TODO - Your code here
  cout << etox_5_terms(x) << "\n";
  return 0;
}
