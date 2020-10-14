// Student ID: 20433004
// Replace the number above with your Student ID
//
// Branching-Functions.cpp
// 2a-Lab-03
//
#include <iostream>
// This function returns the mean the three numbers passed
// in as parameters. Note that the mean may not be a round
// number. So you must use the double datatype for it.
double mean_of_3(int n1, int n2, int n3) {
  // TODO - YOUR CODE HERE
  return (n1 + n2 + n3) / 3.0;
}
// This function returns the maximum of the 5 given numbers
int max_of_5(int n1, int n2, int n3, int n4, int n5) {
  // TODO - YOUR CODE HERE
  int max =n1;
  max = (max>n2) ? max:n2;
  max = (max>n3) ? max:n3;
  max = (max>n4) ? max:n4;
  max = (max>n5) ? max:n5;
  return max;
}
// This function returns the minimum of the 5 given numbers
int min_of_5(int n1, int n2, int n3, int n4, int n5) {
  // TODO - YOUR CODE HERE
  int min =n1;
  min = (min<n2) ? min:n2;
  min = (min<n3) ? min:n3;
  min = (min<n4) ? min:n4;
  min = (min<n5) ? min:n5;
  return min;
}
// Given three lengths, this function should return whether they can be the
// sides of some triangle. The heuristic you code should check if the
// sum of the two smallest sides is greater than or equal to the third side.
// Treat extreme cases as valid trianges. E.g. a+b == c means valid triangle.
// The challenge is to do it without using arrays
bool sides_make_triangle(int a, int b, int c) {
  // TODO - YOUR CODE HERE
  if (a+b<c) return false;
  if (b+c<a) return false;
  if (c+a<b) return false;
  return true;
}
// Given three angles as integer degrees, this function should return whether
// they can be internal angles of some triangle. Treat extreme cases as
// valid triangles. E.g. (0, 0, 180) is a valid triangle
bool angles_make_triangle(int A, int B, int C) {
  // TODO - YOUR CODE HERE
  if ((A<0) || (B<0) || (C<0)) return false;
  if (A+B+C !=180) return false;
  return true;
}
// Return true if the year yyyy is a leap year and false if not.
bool is_a_leap_year(int yyyy) {
  // TODO - YOUR CODE HERE
  if ((yyyy % 4) != 0) return false;
  else if ((yyyy % 100) !=0) return true;
  else if ((yyyy % 400) !=0) return false;
  else return true;
}
