#include <iostream>
using namespace std;
int main(){
	string mode;
	cout << "What do you want to do? (addition, subtraction, multiplication, division are all valid): " << endl;
	cin >> mode;
	if (mode == "addition"){
		double x, y, result;
		cout << "Give me a number: " << endl;
		cin >> x;
		cout << "What do you want to add onto " << x << "?: " << endl;
		cin >> y;
		result = x + y;
		cout << "Your result is " << result << ". Goodbye!" << endl;
		return 0;
	} else if (mode == "subtraction"){
		double x, y, result;
		cout << "Give me a number: " << endl;
		cin >> x;
		cout << "What do you want to subtract from " << x << "?: " << endl;
		cin >> y;
		result = x - y;
		cout << "Your result is " << result << ". Goodbye!" << endl;
		return 0;
	} else if (mode == "multiplication"){
		double x, y, result;
		cout << "Give me a number: " << endl;
		cin >> x;
		cout << "What do you want to multiply " << x << " by?: " << endl;
		cin >> y;
		result = x * y;
		cout << "Your result is " << result << ". Goodbye!" << endl;
		return 0;
	} else if (mode == "division"){
		double x, y, result;
		cout << "Give me a number: " << endl;
		cin >> x;
		cout << "What do you want to divide " << x << " by?: " << endl;
		cin >> y;
		result = x / y;
		cout << "Your result is " << result << ". Goodbye!" << endl;
		return 0;
	} else {
		cout << "Invalid mode selected. Goodbye!" << endl;
		return 1;
	}
}
