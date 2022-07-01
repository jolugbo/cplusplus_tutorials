#include <iostream>
using namespace std;
class romanToInt {
public:
	romanToInt(string s) {
        int output = 0;
		for (int i = s.length() - 1; i >= 0 ; i--)
		{
            string input = "";
            if (i - 1 >= 0) {
                if (s[i] == 'V' && s[i - 1] == 'I')
                {
                    input.push_back(s[i - 1]);
                    input.push_back(s[i]);
                    i--;
                    convertUnit(output, input);
                }
               /* else if (s[i] == 'I' && s[i - 1] == 'V')
                {
                    input.push_back(s[i - 1]);
                    input.push_back(s[i]);
                    i--;
                    convertUnit(output, input);
                }*/
                else if (s[i] == 'X' && s[i - 1] == 'I')
                {
                    input.push_back(s[i - 1]);
                    input.push_back(s[i]);
                    i--;
                    convertUnit(output, input);
                }
                else if (s[i] == 'C' && s[i - 1] == 'X')
                {
                    input.push_back(s[i - 1]);
                    input.push_back(s[i]);
                    i--;
                    convertTens(output, input);
                }
                else if (s[i] == 'L' && s[i - 1] == 'X')
                {
                    input.push_back(s[i - 1]);
                    input.push_back(s[i]);
                    i--;
                    convertTens(output, input);
                }
                else if (s[i] == 'D' && s[i - 1] == 'C')
                {
                    input.push_back(s[i - 1]);
                    input.push_back(s[i]);
                    i--;
                    convertHundreds(output, input);
                }
                else if (s[i] == 'M' && s[i - 1] == 'C')
                {
                    input.push_back(s[i - 1]);
                    input.push_back(s[i]);
                    i--;
                    convertHundreds(output, input);
                }
                else if (s[i] == 'I')
                {
                    convertUnit(output, "I");
                }
                else if (s[i] == 'V')
                {
                    convertUnit(output, "V");
                }
                else if (s[i] == 'X')
                {
                    convertTens(output, "X");
                }
                else if (s[i] == 'L')
                {
                    convertTens(output, "L");
                }
                else if (s[i] == 'C')
                {
                    convertHundreds(output, "C");
                }
                else if (s[i] == 'D')
                {
                    convertHundreds(output, "D");
                }
                else if (s[i] == 'M')
                {
                    convertThousands(output, "M");
                }
            }
            else
            {
                if (s[i] == 'I')
                {
                    convertUnit(output, "I");
                }
                else if (s[i] == 'V')
                {
                    convertUnit(output, "V");
                }
                else if (s[i] == 'X')
                {
                    convertTens(output, "X");
                }
                else if (s[i] == 'L')
                {
                    convertTens(output, "L");
                }
                else if (s[i] == 'C')
                {
                    convertHundreds(output, "C");
                }
                else if (s[i] == 'D')
                {
                    convertHundreds(output, "D");
                }
                else if (s[i] == 'M')
                {
                    convertThousands(output, "M");
                }
            }
		}
        cout << output;
	}

    void convertUnit(int& num, string input) {
        if (input == "IX")
        {
            num += 9;
            return;
        }
        else if (input == "IV")
        {
            num += 4;
            return;
        }
        else if (input == "V")
        {
            num += 5;
            return;
        }
        else{
            num += 1;
            return;
        }
    }

    void convertTens(int& num, string input) {
        if (input == "XC")
        {
            num += 90;
            return;
        }
        else if (input == "XL")
        {
            num += 40;
            return;
        }
        else if (input == "L")
        {
            num += 50;
            return;
        }
        else {
            num += 10;
            return;
        }
    }

    void convertHundreds(int& num, string input) {
        if (input == "CM")
        {
            num += 900;
            return;
        }
        else if (input == "CD")
        {
            num += 400;
            return;
        }
        else if (input == "D")
        {
            num += 500;
            return;
        }
        else {
            num += 100;
            return;
        }
    }

    void convertThousands(int& num, string input) {
        num += 1000;
        return;
    }
};