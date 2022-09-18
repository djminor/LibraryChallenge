#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

//Takes a string as input and prints/reverses/returns it
string ReverseString(string _string) {
	string reversedString = "";
	for (int i = (_string.length() - 1); i >= 0; --i) {
		cout << _string[i];
		reversedString =+ _string[i];
	}
	cout << endl;
	return reversedString;
}

//Takes three ints and prints/returns the largest one
int MaxValue(int firstArg, int secArg, int thirdArg) {
	int maxValue = 0;
	vector<int> values;
	values.push_back(firstArg);
	values.push_back(secArg);
	values.push_back(thirdArg);

	for (size_t i = 0; i < values.size(); i++) {
		if (values[i] > maxValue) {
			maxValue = values[i];
		}
	}
	cout << maxValue << endl;
	return maxValue;
}

//Takes an int and returns factorial using recursion
long double Factorial(int toFactorialize) {
	if (toFactorialize > 1) {
		return toFactorialize * Factorial(toFactorialize - 1);
	}
	else {
		return toFactorialize;
	}
}

//Takes an int and returns the nth member of the Fibonacci Sequence

long double Fibonacci(int nthMember) {
	stack<double> fibSequence;
	fibSequence.push(1.0);
	if (nthMember == 1) {
		cout << fibSequence.top() << endl;
		return fibSequence.top();
	} else {
		for (size_t i = 1; i < nthMember; i++) {
			if (i == 1) {
				fibSequence.push(1.0);
			}
			else {
				double temp1 = fibSequence.top();
				fibSequence.pop();
				double temp2 = fibSequence.top();
				double temp3 = temp1 + temp2;
				fibSequence.push(temp1);
				fibSequence.push(temp3);
			}
		}
	}
	cout << fibSequence.top() << endl;
	return fibSequence.top();
}

int main() {
	
	string userString;
	int firstInt;
	int secInt;
	int thirdInt;
	int factor;
	double fibonacciMember;

	cout << "Enter string to reverse:" << endl;
	
	cin >> userString;
	
	ReverseString(userString);

	cout << "Enter three integers to find the maximum:" << endl;

	cin >> firstInt;
	cin >> secInt;
	cin >> thirdInt;

	MaxValue(firstInt, secInt, thirdInt);

	cout << "Enter a number to factorialize:" << endl;

	cin >> factor;

	cout << Factorial(factor) << endl;

	cout << "Enter the nth member of the Fibonacci Sequence you'd like to view:" << endl;

	cin >> fibonacciMember;

	Fibonacci(fibonacciMember);
	
	return 0;
}