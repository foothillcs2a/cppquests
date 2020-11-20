#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Pet_Store.h"
//#include "Tests.h"

using namespace std;

int main(int argc, char const* argv[])
{

	std::string firstlevel("com");
	std::string secondlevel("cplusplus");
	std::string scheme("http://");
	std::string hostname;
	std::string url;

	hostname = "www." + secondlevel + '.' + firstlevel;
	url = scheme + hostname;

	std::cout << url << '\n';
	std::cout << 4 / 2 << endl;

	Pet myPet;
	myPet.set_id(10);
	myPet.set_name("Meotwo");
	Pet_Store myStore;
	myStore.populate_with_n_random_pets(5);
	std::cout << myStore.to_string(1, 5) << endl;
	//Tests::add_pet(myStore, myPet);
	if (myStore.find_pet_by_id_bin(10, myPet)) {
		cout << myPet.to_string() << endl;
	}
	else {
		cout << "id 8 not found";
	}
	if (myStore.find_pet_by_name_bin("obihugu", myPet)) {
		cout << myPet.to_string() << endl;
	}
	else {
		cout << "name obihugu not found";
	}
	return 0;
}
