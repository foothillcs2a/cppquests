#include <iostream>
#include <ctime>
#include "Pet.h"
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    std::srand(std::time(0)); //use current time as seed for random generator
    int random_variable = std::rand();
    std::cout << "Random value on [0 " << RAND_MAX << "]: "
              << random_variable << '\n';
    Pet mypet;
    // mypet.make_a_name(4);
    cout<< Pet::make_a_name(4)<<endl;
    return 0;
}
