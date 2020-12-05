#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Pet_Store.h"
#include "Stacks.h"
//#include "Tests.h"

using namespace std;

int main(int argc, char const* argv[])
{

	//std::string firstlevel("com");
	//std::string secondlevel("cplusplus");
	//std::string scheme("http://");
	//std::string hostname;
	//std::string url;

	//hostname = "www." + secondlevel + '.' + firstlevel;
	//url = scheme + hostname;

	//std::cout << url << '\n';
	//std::cout << 4 / 2 << endl;

	//Pet myPet;
	//myPet.set_id(10);
	//myPet.set_name("Meotwo");
	//Pet_Store myStore;
	//myStore.populate_with_n_random_pets(5);
	//std::cout << myStore.to_string(1, 5) << endl;
	////Tests::add_pet(myStore, myPet);
	//if (myStore.find_pet_by_id_bin(10, myPet)) {
	//	cout << myPet.to_string() << endl;
	//}
	//else {
	//	cout << "id 8 not found";
	//}
	//if (myStore.find_pet_by_name_bin("obihugu", myPet)) {
	//	cout << myPet.to_string() << endl;
	//}
	//else {
	//	cout << "name obihugu not found";
	//}

	Stack_Int a1;
	cout << "before pushing.. " << endl;
	cout << "a1.is_empty() = " << a1.is_empty() << endl;
	a1.push(1);
	a1.push(2);
	a1.push(5);
	a1.push(7);
	a1.push(2);
	a1.push(5);
	a1.push(7);
	a1.push(2);
	a1.push(5);
	a1.push(7);
	a1.push(2);
	a1.push(5);
	a1.push(7);
	a1.push(9);
	cout << "a1.push() 14 times" << endl;
	cout << "a1.size() = " << a1.size() << endl;
	cout << "a1.is_empty() = " << a1.is_empty() << endl;
	bool success;
	cout << "a1.top(success) = " << a1.top(success) << endl;
	cout << "success = " << success << endl;
	cout << "a1.pop() = " << a1.pop() << endl;
	cout << "a1.size() = " << a1.size() << endl;
	cout << "a1.top(success) = " << a1.top(success) << endl;
	int val;
	cout << "a1.pop(val) = " << a1.pop(val) << endl;
	cout << "val = " << val << endl;
	cout << "a1.size() = " << a1.size() << endl;
	cout << "a1.top(success) = " << a1.top(success) << endl;
	for (int i = 0; i < 1148; i++) {
		a1.push(i);
	}
	cout << "a1.to_string() +1148 times = " << a1.to_string() << endl;


	Stack_String as;
	cout << "before pushing.. " << endl;
	cout << "as.is_empty() = " << as.is_empty() << endl;
	as.push("ab");
	as.push("cd");
	as.push("ef");
	as.push("gh");
	as.push("ab");
	as.push("cd");
	as.push("ef");
	as.push("gh");
	as.push("ab");
	as.push("cd");
	as.push("ef");
	as.push("gh");
	as.push("ab");
	as.push("cd");
	as.push("ef");
	as.push("gh");
	cout << "as.push() 16 times" << endl;
	cout << "as.size() = " << as.size() << endl;
	cout << "as.is_empty() = " << as.is_empty() << endl;
	//bool success;
	cout << "as.top(success) = " << as.top(success) << endl;
	cout << "success = " << success << endl;
	cout << "as.pop() = " << as.pop() << endl;
	cout << "as.size() = " << as.size() << endl;
	cout << "as.top(success) = " << as.top(success) << endl;
	std::string valstr;
	cout << "as.pop(valstr) = " << as.pop(valstr) << endl;
	cout << "valstr = " << valstr << endl;
	cout << "as.size() = " << as.size() << endl;
	cout << "as.top(success) = " << as.top(success) << endl;
	cout << "as.to_string() = " << as.to_string() << endl;


	return 0;
}
