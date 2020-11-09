#include <iostream>
#include <ctime>
#include "Pet.h"
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{

    srand (time(NULL));
    int random_variable = std::rand();

    std::cout << "Random value on [0 " << RAND_MAX << "]: " << random_variable << '\n';
    cout<<"Initial Pets Population: " << Pet::get_population()<<endl;
    Pet mypet;
    cout<<"Pets Population after allocated one: " << Pet::get_population()<<endl;
    mypet.make_a_name(1);
    cout<<"Pets Population after make name 1: " << Pet::get_population()<<endl;
    cout<< "It is: " << mypet.to_string()<<endl;
    vector<Pet> pets;
    cout<<"Pets Population after vector defined: " << Pet::get_population()<<endl;

    Pet::get_n_pets(4,pets,5);
    for(int i = 0; i<pets.size();i++)
    {
      cout<<pets[i].get_name()<<endl;
    }
    cout<<"Pets Population after get 4 pets with 5 letters name : " << Pet::get_population()<<endl;

    Pet::get_n_pets(2,pets,9);
    for(int i = 0; i<pets.size();i++)
    {
      cout<<pets[i].get_name()<<endl;
    }
    cout<<"Pets Population resize vector to get 2 pets with 9 letter names: " << Pet::get_population()<<endl;

    Pet::get_n_pets(6,pets,6);
    for(int i = 0; i<pets.size();i++)
    {
      cout<<pets[i].get_name()<<endl;
    }
    cout<<"Pets Population to get 6 pets with 6 letters: " << Pet::get_population()<<endl;
    return 0;
}
