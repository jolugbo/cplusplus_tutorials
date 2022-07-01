#include <iostream>
using namespace std;
class IntToRoman {
public:
	IntToRoman(int num) {
        string output;
        if (num >= 1000) {
            convertThousands(num,output);
            num = num % 1000;
            convertHundreds(num, output);
            num = num % 100;
            convertTens(num, output);
            num = num % 10;
            convertUnit(num, output);
        }
        else if (num >= 100)
        {
            convertHundreds(num, output);
            num = num % 100;
            convertTens(num, output);
            num = num % 10;
            convertUnit(num, output);
        }
        else if (num >= 10)
        {
            convertTens(num, output);
            num = num % 10;
            convertUnit(num, output);
        }
        else
        {
            convertUnit(num, output);
        }
        cout << output;
	}
  
    void convertUnit(int num, string& input) {
        if (num == 9)
        {
            input += "IX";
            return;
        }
        else if (num >= 5)
        {
            int remainder = num % 5;
            string temp = "";
            for (int i = 0; i < remainder; i++)temp += 'I';
            input += "V" + temp;
        }
        else if (num == 4) {
            input += "IV";
            return;
        }
        else
        {
            string temp = "";
            for (int i = 0; i < num; i++)temp += 'I';
            input += temp;
            return;
        }
    }

    void convertTens(int num, string& input) {
        if (num >= 90)
        {
            input += "XC";
            return;
        }
        else if (num >= 50)
        {
            int remainder = num % 50;
            string temp = "";
            for (int i = 0; i < remainder / 10; i++)temp += 'X';
            input += "L" + temp;
        }
        else if (num >= 40 && num < 50) {
            input += "XL";
            return;
        }
        else
        {
            string temp = "";
            for (int i = 0; i < num / 10; i++)temp += 'X';
            input += temp;
            return;
        }
    }
    
    void convertHundreds(int num, string& input) {
        if (num >= 900)
        {
            input += "CM";
            return;
        }
        else if (num >= 500)
        {
            int remainder = num % 500;
            string temp = "";
            for (int i = 0; i < remainder / 100; i++)temp += 'C';
            input += "D" + temp;
        }
        else if (num >= 400 && num < 500) {
            input += "CD";
            return;
        }
        else
        {
            string temp = "";
            for (int i = 0; i < num / 100; i++)temp += 'C';
            input += temp;
            return;
        }
    }
    
    void convertThousands(int num, string& input) {
        if (num == 1000)
        {
            input += "M";
            return;
        }
        else if (num >= 1000)
        {
            string temp = "";
            for (int i = 0; i < num / 1000; i++)temp += 'M';
            input += temp;
        }
    }
};