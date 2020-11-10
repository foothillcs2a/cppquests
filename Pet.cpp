// Pet.cpp
// 2a-Lab-06-Pets
//
#include <iostream>
#include <sstream>
#include <vector>
#include "Pet.h"

using namespace std;
// This is a way to properly initialize (out-of-line) a static variable.
size_t Pet::_population = 0;
Pet::Pet(string name, long id, int num_limbs)
{
	// TODO - Your code here
	_name = name;
	_id = id;
	_num_limbs = num_limbs;
	_population += 1;
}
Pet::~Pet()
{
	// TODO - Your code here
	_population -= 1;

}

string Pet::get_name() const { return _name; }
long Pet::get_id() const
{
	// TODO - Your code here
	return _id;
}
int Pet::get_num_limbs() const
{
	// TODO - Your code here
	return _num_limbs;
}
bool Pet::set_name(string name)
{
	// TODO - Your code here
	if (name.length() > 0) {
		_name = name;
		return true;
	}
	else {
		return false;
	}
}
bool Pet::set_id(long id)
{
	// TODO - Your code here
	if (id >= 0) {
		_id = id;
		return true;
	}
	else {
		return false;
	}
}
bool Pet::set_num_limbs(int num_limbs)
{
	// TODO - Your code here
	if (num_limbs >= 0) {
		_num_limbs = num_limbs;
		return true;
	}
	else {
		return false;
	}
}
string Pet::to_string() const
{
	// TODO - Your code here
	string toString;
	toString = "(Name: ";
	toString.append(_name);
	toString.append(", ID: ");
	toString.append(std::to_string(_id));
	toString.append(", Limb Count: ");
	toString.append(std::to_string(_num_limbs));
	toString.append(")");
	return toString;
}
// Fill in the supplied pets vector with n pets whose
// properties are chosen randomly.
// Don't mess with this method more than necessary.
void Pet::get_n_pets(size_t n, std::vector<Pet>& pets, int name_len)
{
	// TODO - Resize pets as necessary
	pets.resize(0);
	if (pets.size() != n) {
		pets.resize(n);
	}
	long prev_id = 0;
	for (size_t i = 0; i < n; i++)
	{
		long id = prev_id + 1 + rand() % 10;
		pets[i].set_id(id);
		pets[i].set_num_limbs(rand() % 9); // up to arachnids
		// TODO - make and set a name of the requested length
		pets[i].set_name(make_a_name(name_len));
		// TODO - adjust prev_id as necessary
		prev_id = id;
	}
}
// ---------------------------------------------------------------------
string Pet::make_a_name(int len)
{
	string vowels("aeiou");
	string consonants("bcdfghjklmnpqrstvwxyz");
	string name;
	name = "";
	int firstRand = rand();
	int firstLetter = firstRand % 2;

	for (int i = 0; i < len; i++) {

		if (firstLetter == 0)
		{
			name += consonants[rand()% consonants.length()];
		}
		else
		{
			name+= vowels[rand() % vowels.length()];
		}
		firstLetter = !firstLetter;
	}
	return name;
}
bool operator==(const Pet& pet1, const Pet& pet2)
{
	// TODO - Your code here
	if ((pet1.get_name() == pet2.get_name()) &&
		(pet1.get_id() == pet2.get_id()) &&
		(pet1.get_num_limbs() == pet2.get_num_limbs())
		) {
		return true;
	}
	return false;
}
bool operator!=(const Pet& pet1, const Pet& pet2)
{
	// TODO - Your code here
	if (pet1 == pet2) {
		return false;
	}
	return true;
}
ostream& operator<<(ostream& os, const Pet& pet)
{
	// TODO - Your code here
	os << pet.to_string();
	return os;
}