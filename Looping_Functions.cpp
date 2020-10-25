// Student ID: 20433004
// TODO - Replace the number above with your actual Student ID
//
// Looping_Functions.cpp
//
// Created by Anand Venkataraman on 8/9/19.
// Copyright © 2019 Anand Venkataraman. All rights reserved.
//
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;
// Give the user 6 chances to guess the secret number n (0-10). If they get it,
// say so and return true. Else say so and return false.

bool play_game(int n) {
  // TODO - Your code here
  int sd;
  cout << "Welcome to my number guessing game\n\n";
  for (int i = 1; i <= 6; i++) {
    cout << "Enter your guess: ";
    cin.clear(); // clears the error flags
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin >> sd;
    // float x = 0;
    // sd >> x;
    // if (x.good())  
    cout << "You entered: " << sd << "\n";
    if (sd == n) {
      cout << "You found it in " << i << " guess(es).\n";
      return true;
    }
  }
  cout << endl;
  cout << "\nI'm sorry. You didn't fnd my number.\n";
  cout << "it was " << n << "\n";
  return false;
}

long double factorial(int n) { return (n == 0) || (n == 1) ? 1 : n * factorial(n - 1); }

// Calculate e^x using the series summation up to exactly the first
// n terms including the 0th term.
double etox(double x, size_t n) {
  // TODO - Your code here
  long double result = 0.0;
  for (size_t i = 0; i < n; i++) {
    // cout << x << " and " << i << " find pow of "  <<pow(x, i) << " and factorial ="<< factorial(i) <<"\n";
    // cout << "result = " << result <<" += " << pow(x, i) / factorial(i) <<"\n";
    result += (pow(x, i) / factorial(i));
  }
  return result;
}
// Return the number of occurrences of char c in string s
size_t count_chars(string s, char c) {
  // TODO - Your code here
  size_t count = 0;
  for (size_t i = 0; i < s.length(); i++) {
    if (s[i] == c)
      count++;
  }
  return count;
}
// Use Euclid's algorithm to calculate the GCD of the given numbers
size_t gcd(size_t a, size_t b) {
  // TODO - Your code here
  if ((a == 0))
    return b;
  return gcd(b % a, a);
}
// Return a string of the form n1,n2,n3,... for the given AP.
string get_ap_terms(int a, int d, size_t n) {
  // TODO - Your code here
  string result = "";
  size_t i = 1;
  char temp[100];
  sprintf(temp,"%d", a);
  if (n>0) result += temp;
  while (i<n) {
    result += ",";
    sprintf(temp,"%d", (int)a+d*i);
    result += temp;
    i++;
  }
  return result;
}
// Return a string of the form n1,n2,n3,... for the given GP.
string get_gp_terms(double a, double r, size_t n) {
  // TODO - Your code here
  string result = "";
  size_t i = 1;
  char temp[100];
  sprintf(temp,"%g", a);
  if (n>0) result += temp;
  while (i<n) {
    result += ",";
    sprintf(temp,"%g", a*pow(r,i));
    result += temp;
    i++;
  }
  return result;
}
double get_nth_fibonacci_number(size_t n) {
  // TODO - Your code here
  if ((n==1) || (n==2))
  {
    return 1;
  }
  else {
    return get_nth_fibonacci_number(n-1) + get_nth_fibonacci_number(n-2);
  };
}
//
// int main(int argc, char const *argv[]) {
//   cout << etox(0.80496,35);
//   return 0;
// }
