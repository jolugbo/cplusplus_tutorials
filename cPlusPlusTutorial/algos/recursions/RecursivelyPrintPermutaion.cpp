#include <iostream>
using namespace std;
class RecursivelyPrintPermutaion {
public:
	RecursivelyPrintPermutaion() {
        string input;
        cout << "input string for permutation" << endl;
        cin >> input;
        char* char_array;
        int n = input.length();
        char_array = new char[n - 1];
        char_array = &input[0];
        cout << endl;
        PrintPermutaion(char_array);
	}
    void PrintPermutaion(char input[],int i = 0) {
        if (input[i] == '\0')
        {
            cout<< input<<endl;
        }
        for (int j = i;input[j] != '\0'; j++)
        {
            swap(input[i], input[j]);
            PrintPermutaion(input, i+1);
            swap(input[i], input[j]);
        }
    }
};