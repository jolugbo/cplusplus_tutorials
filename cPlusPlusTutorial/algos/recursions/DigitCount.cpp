#include <iostream>
using namespace std;
class DigitCount {

public:
	DigitCount() {
		int digit;
		cout << "input Digit " << endl;
		cin >> digit;
		cout <<" the number of digits is " << CountCalculator(digit) << endl;
	}
	int CountCalculator(int digit) {
		int variableHolder = 0;
		if (digit == 0)
			return 0;
		else {
			variableHolder = digit / 10;
			return 1 + CountCalculator(variableHolder);
		}
	}

    //vector<string> generateParenthesis(int n) {
    //    vector<string>two;
    //    vector<string>ans;
    //    if (n == 1) { two.push_back("{}"); return two; } //Returning vector if n==1
    //    if (n == 2) {
    //        two.push_back("{{}}");
    //        two.push_back("{}{}");
    //        return two;
    //    } //Returning vector if n==2, as these are base cases


    //    two = generateParenthesis(n - 1); //Recursively calling the function

    //    // Assigning the previous values of vector into the present function
    //    for (int i = 0; i < two.size(); i++) {
    //        string buf = "{", bug = "{", bus = "{";
    //        buf = buf + two[i] + "}";
    //        bug = bug + "}" + two[i];
    //        bus = two[i] + bus + "}";
    //        ans.push_back(buf);
    //        ans.push_back(bus);
    //        ans.push_back(bug);

    //    }

    //    // Removing the duplicate as kind of this {}{} remains same in either way
    //    ans.pop_back();


    //    return ans;
    //}
};