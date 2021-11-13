//
//  main.cpp
//  helloWorld
//
//  Created by Jolugbo on 7/20/21.
//

#include <iostream>
#include <cstring>
#include <vector>
#include <array>
#include <algorithm>
#include "student.cpp"
#include "fractor.cpp"
#include "product.cpp"
#include "dynamicArray.cpp"
#include "vectorManipulations.cpp"
#include "spiralMatrix.cpp"
#include <sstream>
#include "ArrayIntro.cpp"
#include "algos/searchAlgos/LinearSearch.cpp"
#include "algos/recursions/Factorial.cpp"
#include "algos/recursions/Fibonacci.cpp"
#include "algos/recursions/Power.cpp"
#include "algos/recursions/DigitCount.cpp"
#include "algos/recursions/SumOfDigit.cpp"
#include "algos/recursions/SummedMultiplication.cpp"
#include "algos/recursions/CountZeros.cpp"
#include "algos/recursions/GeometricSum.cpp"
#include "algos/recursions/IsArraySorted.cpp"
#include "algos/recursions/SumOfArray.cpp"
#include "algos/recursions/RecursiveSearch.cpp"
#include "algos/recursions/FirstIndexOfElment.cpp"
#include "algos/recursions/LastIndexOf.cpp"
#include "algos/recursions/PrintAllPositiionOfElement.cpp"
#include "algos/recursions/CountOccuranceOfElementInArray.cpp"
#include "algos/recursions/StoreItemPositionInArray.cpp"
#include "algos/recursions/CheckPalindrome.cpp"
#include "algos/recursions/RecursivePrinting.cpp"
#include "algos/recursions/RecursivelyCount.cpp"
#include "algos/recursions/RecursivelyReplace.cpp"
#include "algos/recursions/RecursivelyRemove.cpp"
#include "algos/recursions/RecursivelyRemoveConsecutiveDuplicates.cpp"
#include "algos/recursions/PrintAllSubstringOfString.cpp"
#include "algos/recursions/StoreAllSubstringOfSring.cpp"
#include "algos/recursions/RecursiveStringToInt.cpp"
#include "algos/recursions/RecursivelyPrintPermutaion.cpp"
#include "algos/recursions/RecursivelyPrintDownLink.cpp"
#include "algos/recursions/RecursiveTowerOfHanoi.cpp"
#include "algos/sortAlgos/MergeSort.cpp"
#include "algos/sortAlgos/QuickSort.cpp"
#include "algos/sortAlgos/QuickSort.cpp"
#include "algos/searchAlgos/FirstAndLastOccurance.cpp"
#include "algos/searchAlgos/SearchInReverseSorted.cpp"
#include "algos/searchAlgos/MajorityElement.cpp"
#include "data_structure/LinkedList/Node.cpp"
#include "data_structure/LinkedList/LinkedListRecursive.cpp"
#include "data_structure/LinkedList/JosephusCircle.cpp"
#include "data_structure/Stacks/Stack.cpp"
#include "data_structure/Templates/Template.cpp"
#include "data_structure/Templates/DoubleTemplates.cpp"
#include "data_structure/Stacks/StackWithLinkedList.cpp"
#include "data_structure/Stacks/InBuiltStack.cpp"
#include "data_structure/Stacks/BalancedParenthesis.cpp"
#include "data_structure/Stacks/ReversePolishNotation.cpp"
#include "data_structure/Stacks/RemoveAllAdjacentDuplicate.cpp"
#include "data_structure/Queue/QueueWithArray.cpp"
#include "data_structure/Queue/QueueWithDynamicArray.cpp"
#include "data_structure/Queue/QueueWithLinkedList.cpp"
#include "data_structure/Queue/InBuiltQueue.cpp"
#include "data_structure/Queue/ReverseAQueue.cpp"
#include "data_structure/Trees/Vector_Revisited.cpp"
using namespace std;

int length(char arr[]) {
	int length = 0;
	for (int i = 0; arr[i] != '\0'; i++) {
		length++;
	}
	return length;
}

// reverse a string e.g first becomes last, second becomes second to the last etc
string ReverseStrings() {
	char name[100];
	cout << "please enter record \n";
	cin.getline(name, 100);
	int len = length(name);
	for (int i = 0; i < len / 2; i++) {
		swap(name[i], name[len - i - 1]);
	}
	return name;
}

//read string input
void stringReading(char name[]) {
	cout << "Enter your name: ";
	cin.getline(name, 10);//>>name;
	//name[3] = 'i';
	name[4] = 'x';
	cout << "your new name is: " << name << "\n";
	cout << "length of name is: " << length(name) << "\n";
}

//Array size cannot exceed size 10^5
void arraySize() {
	int arr[100000];
	for (int i = 0; i < 1000000; i++) {
		cout << arr[i];
	}
	cout << "\n the end";

}

//print reverse array...
void reverseArray(int arr[]) {
	int n = 6;// how to get length of an array??
	//int arr[6] = {1,2,3,4,5,6};

	for (int i = 0; i < n / 2; i++) {
		swap(arr[i], arr[n - i - 1]);
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\n";
	}
}

// print sum of array...
int sumArray() {
	cout << "input array size\n";
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "input value for position " << i << ": ";
		cin >> a[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + a[i];
	}
	cout << "the sum is " << sum << "\n";
	return sum;
}

// SWAP 2 NUMBERS 1...
void performSwaps1() {
	int a = 4;
	int b = 5;
	int temp = a;
	a = b;
	b = temp;
	cout << "a " << a << " b " << b << endl;
}

// SWAP 2 NUMBERS 2...
void performSwaps2() {
	int a = 4;
	int b = 5;
	cout << "old a = " << a << "\nold b = " << b << endl;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout << "new a = " << a << "\nnew b = " << b << endl;
}

// SWAP 2 NUMBERS 3... this one i like best
void performSwaps3() {
	int a = 4;
	int b = 7;
	swap(a, b);
	cout << "a = " << a << "\nb = " << b << "\n";
}

// print largest number in array...
int largestNumberInArray() {
	cout << "input 5 array numbers\n";
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cout << "array value at position " << i << ": ";
		cin >> arr[i];
	}
	int highest = INT8_MIN;// c++ universal minimum integer
	cout << "the highest number is " << highest << "\n";

	for (int i = 0; i < 5; i++) {
		if (arr[i] > highest) {
			highest = arr[i];
		}
	}
	cout << "the highest number is " << highest << "\n";
	return highest;
}

// c++ strlen default string length function
long getStringLength(char input[]) {
	long len = 0;
	len = strlen(input);
	return len;
}

//c++ strlen default comparing string
bool stringCompare(char str1[], char str2[]) {
	bool same = true;
	if (strcmp(str1, str2) < 0) {
		same = false;
	}
	cout << strcmp(str1, str2) << "\n";
	return same;
}

//c++ strcpy default copy string into another string
void copyString(char str1[], char str2[]) {
	cout << str1 << "\n ";
	cout << str1 << "\n ";
	strcpy_s(str1, sizeof str1, str2);
	cout << str1 << "\n " << str2 << "\n ";
}

//c++ strncpy default copy string first n chars of a string into another string
void copynString(char str1[], char str2[], int count) {
	cout << str1 << "\n";
	cout << str2 << "\n";
	strncpy_s(str1, sizeof str1, str2, count);
	cout << str1 << "\n" << str2 << "\n ";
}

//c++ strcat default concate first n char of a string to another string
void concatString(char str1[], char str2[]) {
	cout << str1 << "\n";
	cout << str2 << "\n";
	strcat_s(str1, sizeof str1, str2);
	cout << str1 << "\n" << str2 << "\n ";
}

//all prefixes of a string
void prefixesOfAString(char str1[]) {
	long len = strlen(str1);
	char* str2 = new char[len];
	for (int i = 0; i < len; i++) {
		str2[i] = str1[i];
		cout << str2 << "\n";
	}
}
//all surfixes of a string
void  surfixesOfAString(char str1[]) {
	const long len = strlen(str1);
	char* str2 = new char[len];
	for (long i = len - 1; i >= 0; i--) {
		str2[len - i] = str1[i];
		cout << str2 << "\n";
	}
}

//print 2D array
void  print2DArray(int arr[][4], int row, int column) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

}

//print strings
void  printString() {
	string s1 = "abc";
	string s2;
	s2 = "def";
	string* s3 = new string();
	*s3 = "ghi";
	cout << "s1 = " << s1 << "\n";
	cout << "s2 = " << s2 << "\n";
	cout << "*s3 = " << *s3 << "\n";
	cout << "s3 = " << s3 << "\n";
}


// array of vector
void stringVector() {
	vector<string> s;
	s.push_back("Femi");
	s.push_back("hello");
	s.push_back("Hi");
	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << " ";
		sort(s[i].begin(), s[i].end());
		cout << s[i] << " ";
	}
	cout << "\n ";
}

// array of string
void arrayString() {
	array<string, 4> s = { "red", "black", "white","yellow" };
	string s1;
	// getline(cin, s1);
	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << " ";
	}
	//cout<<s1<<"\n ";
}

// string input
void inputString() {
	cout << "Enter input \n ";
	string s;
	cin >> s;
	cout << s << "\n ";
	cout << "Enter same input \n ";
	string s2;
	getline(cin, s2);
	cout << s2 << "\n ";
}
// string manipulation
void manipulateString() {
	string s;
	s = "testing";
	s[2] = 'j';
	cout << s[2] << "\n ";
}
// string concat
void concatString() {
	string s;
	s = "testing ";
	string b = "my code";
	string c = "";
	c += s + b;
	cout << c << "\n ";
}
// string size
void sizeString() {
	string s;
	s = "testing ";
	cout << s.size() << "\n";
	cout << s.length() << "\n";
}

// string substring
void substringString() {
	string s;
	s = "testing ";
	cout << s.substr(4) << "\n";
	cout << s.substr(0, 4) << "\n";// one more after intended eg intend to fetch eat from eating use (0,3)
}

// string find
void findString() {
	string s;
	s = "testing ";
	cout << s.find("ing") << "\n";
}

// int convert to string
void intToString() {
	int num = 1234;
	string s;
	s = "testing " + to_string(num);
	cout << s << "\n";
}


// string to int
void stringToInt() {
	string num = "1234";
	int sum = std::atoi(num.c_str());
	cout << sum + 9876 << "\n";
}
void studentClassUse() {

	//    Student S1;
	//    S1.setRollNumber(10);
	//    S1.age = 20;
	//    S1.display();
	//    Student S2(50,40);
	//    //EXAMPLE OF A COPY CONSTRUCTOR
	//    //Student S2(S1);
	//    S2.display();
	char name[] = "abcd";
	Student S3(30, name);
	S3.display();
	name[3] = 'e';
	Student S4(S3);
	S4.display();
	S3.display();

}

void fractionClassUse() {
	Fraction f1(6, 2);
	f1.print();
	Fraction f2(3, 2);
	f2.print();
	//f1.multiply(f2);
	Fraction const f3(12, 5);
	cout << "F3 constant function get numerator " << f3.getNumerator() << "\n";
	Fraction f4(f1 + f2);
	f4.print();
	int x = 4;
	int y = ++(++x);
	cout << x << endl;
	cout << y << endl;
}
void productUse() {
	Product p(20);
	cout << Product::getProductCount() << endl;
}
int Product::productCount = 10;

void dynamicArrayUse() {
	DynamicArray arr;
	arr.add(43); arr.add(88); arr.add(21); arr.add(-23); arr.add(11);
	arr.add(31); arr.addAt(32, 8);
	cout << arr.getCapacity() << endl;
	arr.print();
	DynamicArray arr1(arr);// copy assignment operation -- shallow  copy
	arr.addAt(20, 0);
	arr.print();
	arr1.print();
	DynamicArray arr2;
	arr2 = arr; // copy assignment operation -- shallow  copy
	arr.addAt(120, 0);
	arr.print();
	arr2.print();

}
void vectorManipulationUse() {
	VectorManipulation vect;
}
void multipleVarLineReaderUse() {
	cout << "start" << endl;
	int count = 0;
	cin >> count;
	vector<string> arr;
	for (int i = 0; i < count; i++) {
		cin >> arr[i];
	}
	for (int i = count - 1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
}
void jaggedArrayUsingVectorImplementation() {
	int rowCount;
	int queryCount;
	cin >> rowCount >> queryCount;
	vector<int> output;
	vector<vector<int> > myArray;
	for (int i = 0; i < rowCount; i++) {
		myArray.push_back(vector<int>());
		int length;
		cin >> length;
		for (int x = 0; x < length; x++) {
			int newVal;
			cin >> newVal;
			myArray[i].push_back(newVal);
		}
	}
	for (int j = 0; j < queryCount; j++) {
		int firstInput, secondInput;
		cin >> firstInput >> secondInput;
		output[j] = myArray[firstInput][secondInput];
	}
	for (int k = 0; k < queryCount; k++) {
		cout << output[k] << endl;
	}
}
void printFandscanF() {

	int val1 = 0;
	long val2 = 0;
	char val3 = '\0';
	float val4 = 7;
	double val5 = 2.0;
	scanf_s("%d %ld %c %f %lf", &val1, &val2, &val3, &val4, &val5);
	printf("%d\n%ld\n%c\n%.3f\n%.9lf", val1, val2, val3, val4, val5);
}

vector<int> parseInts(string str) {
	vector<int> integers;
	int input;
	char comma;
	stringstream ss(str);
	while (ss >> input >> comma) {
		integers.push_back(input);
	}
	ss >> input;
	integers.push_back(input);
	return integers;
	// Complete this function
}
void stringManipulation() {

	string str1, str2;
	cin >> str1 >> str2;
	cout << str1.size() << " " << str2.length() << endl;
	cout << str1 + str2 << endl;
	string temp = str1;
	str1[0] = str2[0];
	str2[0] = temp[0];
	cout << str1 << " " << str2 << endl;
}
struct student {
	int age;
	string first_name;
	string last_name;
	int standard;

};
class Students {
private:

	int age;
	string first_name;
	string last_name;
	int standard;
	int scores[5];

public:
	void input() {
		for (int i = 0; i < 5; i++) {
			cin >> scores[i];
		}
	}
	int calculateTotalScore() {
		int sum = 0;
		for (int i = 0; i < 5; i++) {
			sum += scores[i];
		}
		return sum;
	}
	int get_age() {
		return age;
	}
	void set_age(int age) {
		this->age = age;
	}
	string get_first_name() {
		return first_name;
	}

	void set_first_name(string first_name) {
		this->first_name = first_name;
	}
	string get_last_name() {
		return last_name;
	}
	void set_last_name(string last_name) {
		this->last_name = last_name;
	}
	int get_standard() {
		return standard;
	}
	void set_standard(int standard) {
		this->standard = standard;
	}
	string to_string() {
		return ::to_string(age) + "," + first_name + "," + last_name + "," + ::to_string(standard);
	}
};

class Box {
private:
	int l, b, h;
public:
	Box() {
		l = 0;
		b = 0;
		h = 0;
	}
	Box(int length, int breadth, int height) {
		l = length;
		b = breadth;
		h = height;
	}
	Box(Box const& B) {
		l = B.l;
		b = B.b;
		h = B.h;
	}
	int getLength() {
		return l;
	}
	int getBreadth() {
		return b;
	}
	int getHeight() {
		return h;
	}
	long CalculateVolume() {
		return l * b * h;
	}
	bool operator<(Box& B) {
		if ((l < B.l) || (b < B.b && l == B.l) || (h < B.h && b == B.b && l == B.l)) {
			return true;
		}
		else
			return false;
	}
	friend std::ostream& operator<< (std::ostream& os, Box& B) {
		os << B.l << " " << B.b << " " << B.h;
		return os;
	}
};

class Person {
public:
	string name;
	int age;
	virtual void getdata() {}
	virtual void putdata() {}
};
class Studentss : public virtual Person {
public:
	int* marks = new int[6];
	int static cur_id;
	Studentss() {
		Studentss::cur_id++;
	}
	void getdata() {
		cin >> name >> age >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4] >> marks[5];
	}
	void putdata() {
		int sum = 0;
		for (int i = 0; i < 6; i++) {
			sum += marks[i];
		}
		cout << name << " " << age << " " << sum << " " << cur_id << endl;
	}
};
class Professor : public virtual Person {
public:
	int publications;
	static int cur_id;
	int id;
	Professor() {
		id = Professor::cur_id++;
	}
	void getdata() {
		cin >> name >> age >> publications;
	}
	void putdata() {
		cout << name << " " << age << " " << publications << " " << id << endl;
	}
};
int Studentss::cur_id = 0;
int Professor::cur_id = 0;
void print2De(int m, int n) {
	int arr[][3] = { {1,4,5},{4,5,2} };
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
	}
}

void StackUse() {
	Stacks<char> s(4);
	for (int i = 0; i < 4; i++)
	{
		s.push(i + 100);
	}
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.Size() << endl;
	cout << s.isEmpty() << endl;

}
void StackWithLinkedListUse() {
	StackWithLinkedList swl;
	swl.push(1);
	swl.push(2);
	swl.push(3);
	swl.push(4);
	swl.pop();
	swl.pop();
	swl.pop();
}
void templateUse() {
	Pair<int> temp1;
	temp1.setX(10);
	temp1.setY(20);

	cout << temp1.getY() + temp1.getX() << endl;

	DoublePair<int, double> doublePairs;
	double x = 10.55;
	doublePairs.setX(x);
	doublePairs.setY(x);

	cout << doublePairs.getX() + doublePairs.getY()<< endl;

	DoublePair<DoublePair<int,double>, double> triplet;
	DoublePair<int, double> doubles;
	doubles.setX(10);
	doubles.setY(2.5);
	triplet.setY(12.1);
	triplet.setX(doubles);
	cout << triplet.getX().getX()<<" "<< triplet.getX().getY()<< " " << triplet.getY() <<" "<< triplet.getX().getX() + triplet.getY() << endl;

}

int main() {
	Vector_Revisited q;
	//int n, val;
	//cin >> n; 
	//Person* per[4];

	//for (int i = 0; i < n; i++) {

	//    cin >> val;
	//    if (val == 1) {
	//        // If val is 1 current object is of type Professor
	//        per[i] = new Professor;

	//    }
	//    else per[i] = new Studentss; // Else the current object is of type Student

	//    per[i]->getdata(); // Get the data from the user.

	//}

	//for (int i = 0; i < n; i++)
	//    per[i]->putdata(); // Print the required output for each object.

	return 0;

}
//int main(int argc, const char * argv[]) {
//    
//    Box b1; // Should set b1.l = b1.b = b1.h = 0;
//    Box b2(2, 3, 4); // Should set b1.l = 2, b1.b = 3, b1.h = 4;
//    b2.getLength();    // Should return 2
//    b2.getBreadth(); // Should return 3
//    b2.getHeight();    // Should return 4
//    b2.CalculateVolume(); // Should return 24
//    bool x = (b1 < b2);    // Should return true based on the conditions given
//    cout<<b2; // Should print 2 3 4 in order.
//       
//}


