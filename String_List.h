// Student ID: 20433004
// TODO - Type in your student ID after the colon above.
// String_List.h
//
#ifndef String_List_h
#define String_List_h
#include <iostream>
#include <sstream>
// Important implementation note: With the exception of to_string(),
// and clear(), all list methods below should operate in a constant amount
// of time regardless of the size of the String_List instance.
//
// The semantics of _prev_to_current is such that it always points to the
// node *BEFORE* the current one. This makes the manipulations easy because
// we can only look forward (and not back) in singly linked lists.
//
// I've included some method header comments below where there's likely to
// be confusion.
//
class String_List {
private:
	struct Node {
		std::string data;
		Node* next;
		Node(std::string s = "") : data(s), next(nullptr) {}
	};
	Node* _head, * _tail, * _prev_to_current;
	size_t _size;
public:
	String_List() {
		// TODO - Your code here
		_head = _tail = _prev_to_current = new Node("_SENTINEL_");
		_size = 0;
		_head->next = nullptr;
	}
	~String_List() {
		// TODO - Your code here
		this->clear();
		delete _head;
		_head = _tail = _prev_to_current = nullptr;
	}
	String_List* insert_at_current(std::string s) {
		// TODO - Your code here
		Node* newCurrent = new Node(s);
		_size++;

		// set newCurrent->next to the yellow node, which is _prev_to_cu...->next
		newCurrent->next = _prev_to_current->next;
		// set the current pointer to new current
		if (_tail == _prev_to_current) {
			_tail = newCurrent;
		}
		if (_head == _prev_to_current) {
			_head->next = newCurrent;
		}

		_prev_to_current->next = newCurrent;
		return this;
	}
	String_List* push_back(std::string s) {
		// TODO - Your code here
		Node* temp = _prev_to_current;
		_prev_to_current = _tail;
		insert_at_current(s);
		_prev_to_current = temp;
		return this;
	}
	String_List* push_front(std::string s) {
		// TODO - Your code here
		Node* temp = _prev_to_current;
		_prev_to_current = _head;
		insert_at_current(s);
		_prev_to_current = temp;
		return this;
	}
	String_List* advance_current() {
		// TODO - Your code here
		if (_prev_to_current->next) {
			_prev_to_current = _prev_to_current->next;
			return this;
		}
		else {
			return nullptr;
		}
	}
	std::string get_current() const {
		// TODO - Your code here
		if (_prev_to_current->next) {
			return _prev_to_current->next->data;
		}
		else
		{
			// ??? This doesn't make sense
			return _prev_to_current->data;
		}
	}
	String_List* remove_at_current() {
		// TODO - Your code here
		_size--;
		Node* tmp = _prev_to_current->next;
		_prev_to_current->next = tmp->next;
		delete tmp;
		return this;
	}
	size_t get_size() const {
		// TODO - Your code here
		return _size;
		//Node* tmp = _head;
		//size_t i = 0;
		//while (tmp->next) {
		//	i++;
		//	tmp = tmp->next;
		//}
		//return i;
	}
	String_List* rewind() {
		// TODO - Your code here
		_prev_to_current = _head;
		return this;
	}
	void clear() {
		// TODO - Your code here
		if (!_head->next) {
			return;
		}
		Node* iter = _head->next;
		Node* tmp;
		while (iter->next) {
			tmp = iter;
			iter = iter->next;
			delete tmp;
		}
		delete iter;
		_size = 0;
		_head->next = nullptr;
		_tail = _prev_to_current = _head;
	}
	// Find a specific item. Does NOT change cursor.
	//
	// The following returns a reference to the target string if found. But what will
	// you do if you didn't find the requested string? Using sentinel markers is
	// one way to handle that situation. Usually there's only one copy of the
	// sentinel that's global. We will use a local one so it's cleaner with a
	// little more risk (what's the risk?)
	//
	std::string& find_item(std::string s) const {
		// TODO - Your code here
		Node* iter = _head->next;
		while (iter) {
			if (iter->data == s) {
				return iter->data;
			}
			iter = iter->next;
		}
		return _head->data;
	}
	// Print up to max_lines lines starting at _prev_to_current->next. If the caller
	// wants to print from the beginning of the list, they should rewind() it first.
	//
	std::string to_string() const {
		// TODO - Your code here
		Node* iter = _prev_to_current->next;
		size_t count = 0;
		while (iter) {
			count++;
			iter = iter->next;
		}

		std::string out = "# String_List - " + std::to_string(count) + " entries total. Starting at cursor:\n";
		size_t i = 0;
		iter = _prev_to_current->next;
		while (iter && i < 25) {
			i = i + 1;
			out = out + iter->data + "\n";
			iter = iter->next;
		}
		if (count > 25) { out = out + "...\n"; }
		return out;
	}
	friend class Tests; // Don't remove this line
};
#endif /* String_List_h */