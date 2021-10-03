#include <iostream>
#include <vector>
using namespace std;
class StoreAllSubstringOfString {
public:
	StoreAllSubstringOfString() {
		cout << "input items " << endl;
		string input;
		cin >> input;
		int power = pow(2, input.length());
		string output = "";
		string* outArr;
		int counter;
		counter = 0;
		outArr = new string[power];
		//RecursivelygetSubString(arr, output);
		RecursivelyStoreAllSubstringOfString(input, output, outArr,counter);
		//cout << outArr.size() << endl;
		for (int i = 0; i < power; i++)
		{
			cout << outArr[i] << endl;
		}
	}
	void RecursivelyStoreAllSubstringOfString(string input, string output, string store[],int& counter) {
		if (input.length() == false)
		{
			store[counter++] = output;
			return;
		}
		else
		{
			RecursivelyStoreAllSubstringOfString(input.substr(1), output + input[0], store, counter);
			RecursivelyStoreAllSubstringOfString(input.substr(1), output, store, counter);
		}
	}
};