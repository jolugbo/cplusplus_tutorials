#include <iostream>
#include <vector>
using namespace std;
class PrintAllSubstringOfString {
public:
	PrintAllSubstringOfString() {
		cout << "input items " << endl;
		string arr;
		string output = "";
		cin >> arr;
		vector< string > outArr;
		string outArray[100];
		RecursivelygetSubString(arr, output);
		//RecursivelyStoreSubString(arr, output, outArr);
		for (int i = 0; i < 8; i++)
		{
			cout << outArray[i] << endl;
		}
	}
	void RecursivelygetSubString(string input, string output) {
		if (input.length() == false)
		{
			cout << output << endl;
			return;
		}
		else
		{
			RecursivelygetSubString(input.substr(1), output);
			RecursivelygetSubString(input.substr(1), output + input[0]);
		}
	}
	void RecursivelyStoreSubString(string input, string output,vector <string> store) {
		if (input.length() == false)
		{
			store.push_back(output);
			return;
		}
		else
		{
			RecursivelyStoreSubString(input.substr(1), output + input[0], store);
			RecursivelyStoreSubString(input.substr(1), output, store);
		}
	}
};