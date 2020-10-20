#include <iostream>
#include "Eliza.h"
using namespace std;

int main(int argc, char const *argv[])
{
    cout << lispify("the handsome man ran with no handsome mat") << "\n";
    cout << lispify2("the hungry rainbow kissed with the yummy wise gal") << "\n";
    cout << lispify2("no hot wise guy kissed in no handsome cat") << "\n";

    string s = "that's really cool";
    cout << rotate_vowels(s) << "\n";
    enter();
    return 0;
}
