#include <iostream>
#include <vector>
#include <bitset>
#include <string>
using namespace std;

class HasAllValidBinary {
public:
	
	HasAllValidBinary(string s, int k) {
		vector<bool> validator(k + 1,false);
		for (int i = 0; i < s.length() - k; i++)
		{
			if (stoi(s.substr(i, k), 0, 2) <= k) {
				cout << s.substr(i, k) << " = " << stoi(s.substr(i, k), 0, 2) << endl;
				validator[stoi(s.substr(i, k), 0, 2)] = true;
			}
		}
	}
	void Method1HasAllValidBinary(string s, int k) { 
		
		vector<string> binaryKSubstrings;
		binaryKSubstrings = generateKBinarySubstring(k);
		for (int i = 0; i < binaryKSubstrings.size(); i++)
		{
			if (s.find(binaryKSubstrings[i]) == string::npos) {
				cout << false << endl;
			}
			if (i == 48) {
				if (strstr(s.c_str(), binaryKSubstrings[i].c_str()))
				{
					cout << " S1 Contains S2";
				}
				cout << s.find(binaryKSubstrings[i]);
				cout << binaryKSubstrings[i];
			}
		}
		cout << true << endl;
	}
	vector<string> generateKBinarySubstring(int k) {
		vector<string> resp;
		for (int i = 0; i < k * k; i++)
		{
			string convert = bitset<32>(i).to_string();
			resp.push_back(convert.substr(32 -k,32));
		}
		return resp;
	}
};
