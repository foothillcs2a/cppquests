#include <iostream>
#include <ctime>
#include <cstdlib>
//#include "Pet_Store.h"
//#include "Stacks.h"
//#include "Tests.h"
#include "String_List.h"
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


//	Quest 8
		//Stack_Int a1;
		//cout << "before pushing.. " << endl;
		//cout << "a1.is_empty() = " << a1.is_empty() << endl;
		//a1.push(1);
		//a1.push(2);
		//a1.push(5);
		//a1.push(7);
		//a1.push(2);
		//a1.push(5);
		//a1.push(7);
		//a1.push(2);
		//a1.push(5);
		//a1.push(7);
		//a1.push(2);
		//a1.push(5);
		//a1.push(7);
		//a1.push(9);
		//cout << "a1.push() 14 times" << endl;
		//cout << "a1.size() = " << a1.size() << endl;
		//cout << "a1.is_empty() = " << a1.is_empty() << endl;
		//bool success;
		//cout << "a1.top(success) = " << a1.top(success) << endl;
		//cout << "success = " << success << endl;
		//cout << "a1.pop() = " << a1.pop() << endl;
		//cout << "a1.size() = " << a1.size() << endl;
		//cout << "a1.top(success) = " << a1.top(success) << endl;
		//int val;
		//cout << "a1.pop(val) = " << a1.pop(val) << endl;
		//cout << "val = " << val << endl;
		//cout << "a1.size() = " << a1.size() << endl;
		//cout << "a1.top(success) = " << a1.top(success) << endl;
		//for (int i = 0; i < 1148; i++) {
		//	a1.push(i);
		//}
		//cout << "a1.to_string() +1148 times = " << a1.to_string() << endl;


		//Stack_String as;
		//cout << "before pushing.. " << endl;
		//cout << "as.is_empty() = " << as.is_empty() << endl;
		//as.push("ab");
		//as.push("cd");
		//as.push("ef");
		//as.push("gh");
		//as.push("ab");
		//as.push("cd");
		//as.push("ef");
		//as.push("gh");
		//as.push("ab");
		//as.push("cd");
		//as.push("ef");
		//as.push("gh");
		//as.push("ab");
		//as.push("cd");
		//as.push("ef");
		//as.push("gh");
		//cout << "as.push() 16 times" << endl;
		//cout << "as.size() = " << as.size() << endl;
		//cout << "as.is_empty() = " << as.is_empty() << endl;
		////bool success;
		//cout << "as.top(success) = " << as.top(success) << endl;
		//cout << "success = " << success << endl;
		//cout << "as.pop() = " << as.pop() << endl;
		//cout << "as.size() = " << as.size() << endl;
		//cout << "as.top(success) = " << as.top(success) << endl;
		//std::string valstr;
		//cout << "as.pop(valstr) = " << as.pop(valstr) << endl;
		//cout << "valstr = " << valstr << endl;
		//cout << "as.size() = " << as.size() << endl;
		//cout << "as.top(success) = " << as.top(success) << endl;
		//cout << "as.to_string() = " << as.to_string() << endl;

// quest 9

	String_List* list = new String_List();
	cout << "The initial list: " << endl << list->to_string();
	cout << "get size: " << list->get_size() << endl << endl;
	list->insert_at_current("abc1");
	cout << "inserted abc1, list from current is: " << endl << list->to_string();
	cout << "get size: " << list->get_size() << endl << endl;
	list->insert_at_current("abc2");
	cout << "inserted abc2, list from current is: " << endl << list->to_string();
	cout << "get size: " << list->get_size() << endl << endl;
	list->rewind();
	cout << "rewind, list from head is: " << endl << list->to_string();
	cout << "get size: " << list->get_size() << endl << endl;

	list->advance_current();
	cout << "advance one element, list from current is: " << endl << list->to_string();
	cout << "get size: " << list->get_size() << endl << endl;

	list->insert_at_current("abc3");

	cout << "inserted abc3, list from current is: " << endl << list->to_string();
	cout << "get size: " << list->get_size() << endl << endl;
	list->rewind();
	cout << "rewind, list from head is: " << endl << list->to_string();
	cout << "get size: " << list->get_size() << endl << endl;
	list->clear();
	cout << "cleared initial list: " << list->to_string() << endl;
	list->insert_at_current("abc");
	cout << "inserted abc, current list is: " << list->to_string();
	cout << "get size: " << list->get_size() << endl << endl;
	list->insert_at_current("abc2");
	list->clear();
	cout << "cleared and push_back 250 times." << endl;

	for (int x = 0; x < 250; x++) {
		list->push_back("abc");
	}
	cout << "size:" << list->get_size();

	cout << "inserted abc2, current list is: " << list->to_string() << endl;
	cout << "size : " << list->get_size() << endl;
	list->push_back("xyz");
	cout << "pushed back xyz, current list is: " << list->to_string() << endl;
	cout << "size : " << list->get_size() << endl;

	list->push_front("123");
	cout << "pushed front 123, current list is: " << list->to_string() << endl;

	list->insert_at_current("000");
	list->advance_current();
	list->insert_at_current("insert");
	list->insert_at_current("abc");
	list->insert_at_current("def");
	list->insert_at_current("ghi");
	list->insert_at_current("jkl");
	list->insert_at_current("abc");
	list->insert_at_current("def");
	list->insert_at_current("ghi");
	list->insert_at_current("jkl");
	list->insert_at_current("abc");
	list->insert_at_current("def");
	list->insert_at_current("ghi");
	list->insert_at_current("jkl");
	list->insert_at_current("find");
	list->insert_at_current("def");
	list->insert_at_current("ghi");
	list->insert_at_current("jkl");
	list->insert_at_current("abc");
	list->insert_at_current("def");
	list->insert_at_current("ghi");
	list->insert_at_current("jkl");
	list->insert_at_current("abc");
	list->insert_at_current("def");
	list->insert_at_current("ghi");
	list->insert_at_current("jkl");
	list->insert_at_current("abc");
	list->insert_at_current("def");
	list->insert_at_current("ghi");
	list->insert_at_current("jkl");
	list->insert_at_current("abc");
	list->insert_at_current("def");
	list->insert_at_current("ghi");
	list->insert_at_current("jkl");
	list->push_front("0000");
	cout << "The current list is: " << list->to_string() << endl;
	list->rewind();
	cout << "After rewind, the whole list is: " << list->to_string() << endl;
	cout << "The current elem: " << list->get_current() << endl;
	list->advance_current();
	cout << "advance one element: " << endl;
	cout << "The current elem: " << list->get_current() << endl;
	list->remove_at_current();
	cout << "remove current element: " << endl;
	cout << "size : " << list->get_size() << endl;
	list->advance_current();
	cout << "advance one element: " << endl;
	cout << "The current elem: " << list->get_current() << endl;
	list->advance_current();
	cout << "advance one element: " << endl;
	cout << "The current elem: " << list->get_current() << endl;

	cout << "find 'find' in list: " << list->find_item("find") << endl;
	cout << "find 'notfind' in list: " << list->find_item("notfind") << endl;

	cout << "clear list: " << endl;
	list->clear();
	cout << "The current list: " << list->to_string() << endl;


	return 0;
}
