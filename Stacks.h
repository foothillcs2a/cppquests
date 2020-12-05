// Student ID: 20433004
// TODO - Replace the number above with your actual student ID
//
#ifndef Stacks_h
#define Stacks_h
#include <vector>
#include <sstream>
class Stack_Int {
private:
	std::vector<int> _data;
public:
	// No explicit constructor or destructor
	size_t size() const {
		// TODO - Your code here
		return _data.size();
	}
	bool is_empty() const {
		// TODO - Your code here
		return _data.empty();
	}
	void push(int val) {
		// TODO - Your code here
		_data.push_back(val);
	}
	int top(bool& success) const {
		// TODO - Your code here
		if (_data.empty()) {
			success = false;
			return 0;
		}
		else {
			success = true;
			return _data.back();
		}
	}
	bool pop() {
		// TODO - Your code here
		if (_data.empty()) {
			return false;
		}
		else {
			_data.pop_back();
			return true;
		}
	}
	bool pop(int& val) {
		// TODO - Your code here
		if (_data.empty()) {
			return false;
		}
		else {
			val = _data.back();
			_data.pop_back();
			return true;
		}
	}
	std::string to_string() const {
		// TODO - Your code here
		std::string out = "Stack (" + std::to_string(_data.size()) + " elements):\n";
		size_t within10 = _data.size() > 10 ? 10 : _data.size();
		size_t i = 0;
		while (i < within10) {
			i = i + 1;
			int j = _data.size() - i;
			out = out + std::to_string(_data[j]) + "\n";
		}
		if (_data.size() > within10) {
			out = out + "...\n";
		}
		out = out + "Elements, if listed above, are in increasing order of age.";
		return out;
	}
	// Don't remove the following line
	friend class Tests;
};
class Stack_String {
	// TODO - Your code here. Ask in the forums if you're stuck.
private:
	std::vector<std::string> _data;
public:
	// No explicit constructor or destructor
	size_t size() const {
		// TODO - Your code here
		return _data.size();
	}
	bool is_empty() const {
		// TODO - Your code here
		return _data.empty();
	}
	void push(std::string val) {
		// TODO - Your code here
		_data.push_back(val);
	}
	std::string top(bool& success) const {
		// TODO - Your code here
		if (_data.empty()) {
			success = false;
			return "";
		}
		else {
			success = true;
			return _data.back();
		}
	}
	bool pop() {
		// TODO - Your code here
		if (_data.empty()) {
			return false;
		}
		else {
			_data.pop_back();
			return true;
		}
	}
	bool pop(std::string& val) {
		// TODO - Your code here
		if (_data.empty()) {
			return false;
		}
		else {
			val = _data.back();
			_data.pop_back();
			return true;
		}
	}
	std::string to_string() const {
		// TODO - Your code here
		std::string out = "Stack (" + std::to_string(_data.size()) + " elements):\n";
		size_t within10 = _data.size() > 10 ? 10 : _data.size();
		size_t i = 0;
		while (i < within10) {
			i = i + 1;
			int j = _data.size() - i;
			out = out + _data[j] + "\n";
		}
		if (_data.size() > within10) {
			out = out + "...\n";
		}
		out = out + "Elements, if listed above, are in increasing order of age.";
		return out;
	}
	// Don't remove the following line
	friend class Tests;
};
#endif /* Stacks_h */