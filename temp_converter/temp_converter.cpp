#include <iostream>
using std::cout;
using std::cin;

int main() {

	char to_;
	double val_;

	cout << "temp_converter----------------------------------" << "\n";

	cout << "convert to (F/C)?: ";
	cin >> to_;

	cout << "enter temp. value: ";
	cin >> val_;
	
	if (to_ == 'F' || to_ == 'f') { //C -> F
		val_ = (val_ * 1.8) + 32;
		cout << "=>" << val_ << to_ << "\n";
	}
	else if (to_ == 'C' || to_ == 'c') { //F -> C
		val_ = (val_ - 32) / 1.8;
		cout << "=>" << val_ << to_ << "\n";
	}
	else{
		cout << "enter valid conversion sign!";
	}

	cout << "------------------------------------------------";
	return 0;
}