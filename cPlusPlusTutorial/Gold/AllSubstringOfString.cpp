#include "iostream"
using namespace std;

class AllSubstringOfAString {
public:
    AllSubstringOfAString(string str)
    {

        // First loop for starting index
        for (int i = 0; i < str.length(); i++) {
            string subStr;
            // Second loop is generating sub-string
            for (int j = i; j < str.length(); j++) {
                subStr += str[j];
                cout << subStr << endl;
            }
        }
    }
};