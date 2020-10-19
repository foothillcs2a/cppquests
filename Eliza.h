//
// Eliza.h
// 2a.Lab-05-Eliza
//
#include <string>
#ifndef Eliza_h
#define Eliza_h
// TODO - place your Eliza function declarations here
using namespace std;
std::string toUpper(std::string& source);
std::string replace(std::string& sourceStr, std::string& toFind, std::string& toReplace, bool caseSensitive);
std::string lispify(std::string s);
std::string rotate_vowels(std::string& s);
string lispify2(std::string s);
void enter();

#endif /* Eliza_h */
