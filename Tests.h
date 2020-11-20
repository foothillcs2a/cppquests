#ifndef Tests_h
#define Tests_h

using namespace std;

class Tests {
private:
	string _name;
public:
	static void add_pet(Pet_Store& myStore, Pet& myPet) {
		myStore._pets.push_back(myPet);
	}
}
#endif