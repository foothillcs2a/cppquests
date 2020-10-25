#include <iostream>
#include <ctime>
#include "Pet.h"
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    std::srand(std::time(0)); //use current time as seed for random generator
    int random_variable = std::rand();
    //std::cout << "Random value on [0 " << RAND_MAX << "]: "
              // << random_variable << '\n';
    //cout<<"Pets Population: " << Pet::get_population()<<endl;
    Pet mypet;
    //cout<<"Pets Population: " << Pet::get_population()<<endl;
    mypet.make_a_name(4);
    //cout<<"Pets Population: " << Pet::get_population()<<endl;
    //cout<< Pet::make_a_name(4)<<endl;
    vector<Pet> pets;
    //cout<<"Pets Population: " << Pet::get_population()<<endl;

    Pet::get_n_pets(4,pets,5);
    for(int i = 0; i<pets.size();i++)
    {
      cout<<pets[i].get_name()<<endl;
    }
    //cout<<"Pets Population: " << Pet::get_population()<<endl;

    Pet::get_n_pets(2,pets,9);
    for(int i = 0; i<pets.size();i++)
    {
      cout<<pets[i].get_name()<<endl;
    }
    //cout<<"Pets Population: " << Pet::get_population()<<endl;

    Pet::get_n_pets(6,pets,6);
    for(int i = 0; i<pets.size();i++)
    {
      cout<<pets[i].get_name()<<endl;
    }
    //cout<<"Pets Population: " << Pet::get_population()<<endl;
    return 0;
}
