// Student ID: 20433004
// TODO - Replace the number above with your actual Student ID
// Eliza.cpp
// 2a.Lab-05-Eliza
//
//
#include <algorithm>
#include <iostream>
#include <sstream>
using namespace std;

string toUpper(string &source) {
  string outputStr(source);
  std::transform(outputStr.begin(), outputStr.end(), outputStr.begin(),
                 ::toupper);
  return outputStr;
}

string replaceStr(string &sourceStr, string toFind, string toReplace,
                  bool caseSensitive) {
  std::string outputStr(sourceStr);
  std::string lookupStr(sourceStr);
  int compensation = toReplace.length() - toFind.length();
  int compensationTimes = 0;
  if (!caseSensitive) {
    toFind = toUpper(toFind);
    lookupStr = toUpper(lookupStr);
  }
  size_t found = lookupStr.find(toFind);
  while (found != std::string::npos) {
    // cout << "Found " << toFind << " at " << found << " of " <<  lookupStr <<
    // "\n";
    found = found + compensation * compensationTimes;
    // cout << "To replace " << toFind << " from " << found << " to " << found +
    // toFind.size() << " to "<< toReplace << " of "<< outputStr << "\n"; cout
    // << "Before replace: " << outputStr << "\n";
    outputStr.replace(found, toFind.size(), toReplace);
    // cout << "After replace: " << outputStr << "\n";
    compensationTimes++;
    found = lookupStr.find(toFind, found + toReplace.length());
  }
  return outputStr;
}

// Return a new string in which the letters (lowercase) a, e, i, o, and u
// have been replaced by the next vowel in the sequence aeiou. Replace u by a.
//
// Note that the string is passed in by reference. So the caller may not
// rely on the result being returned.
// TODO - Your code for rotate_vowels goes here

string rotate_vowels(string &s) {
  std::string rotate(s);
  rotate = replaceStr(rotate, "u", "##", true);
  rotate = replaceStr(rotate, "o", "u", true);
  rotate = replaceStr(rotate, "i", "o", true);
  rotate = replaceStr(rotate, "e", "i", true);
  rotate = replaceStr(rotate, "a", "e", true);
  rotate = replaceStr(rotate, "##", "a", true);
  return rotate;
}

// Return a string in which all occurrences of s have been replaced by th
// TODO - Your code for lispify goes here
string lispify(string s) {
  std::string s2th(s);
  return replaceStr(s2th, "s", "th", false);
}
string lispify2(string s) {
  std::string s2th(s);
  s2th = replaceStr(s2th, "s", "th", true);
  return replaceStr(s2th, "S", "Th", true);
}
// Enter the user-interaction loop as described earlier
void enter() {
  // TODO - Your code here
  string inputStr;
  do {
    try {
      cout << "What?\n";
      std::getline(std::cin, inputStr);
      cout<<inputStr.length()<<"n";
      if (inputStr.length() == 0) {
        continue;
      }
      cout << "    " << inputStr << "\n\n";
      if (inputStr.find("!") != std::string::npos) {
        cout << "OMG! You don't say!! " << inputStr << "!!!!!\n";
        continue;
      }
      if ((inputStr.find("what") != std::string::npos) ||
          (inputStr.find("why") != std::string::npos)) {
        cout << "I'm sorry, I don't like questions that contain what or why.\n";
        continue;
      }
      if (inputStr.find("s") != std::string::npos) {
        cout << "Interethting.When did you thtop thtopping your\n";
        cout << "thibilanth ? \n";
        cout << lispify(inputStr) << "! Sheesh! Now what?\n";
        continue;
      }
      if ((inputStr == "bye") || (inputStr == "Bye") || (inputStr == "quit") ||
          (inputStr == "Quit")) {
        cout << "Ok Bye. Nice being a force of change in your life.\n";
        //break;
      }
      int remainder = rand() % 10;
      if (remainder != 8 && remainder != 9) {
        cout << rotate_vowels(inputStr) << "\n";
      } else {
        cout << "Huh? Why do you say: " << inputStr << "?\n";
      }
    } catch (int e) {
      cout << "An exception occurred. Exception Nr. " << e << '\n';
    }

  } while (true);
}

int main(int argc, char const *argv[]) {
  cout << lispify("sixty Six") << "\n";
  cout << lispify2("sixty Six") << "\n";

  string s = "that's really cool";
  cout << rotate_vowels(s) << "\n";
  enter();
  return 0;
}
