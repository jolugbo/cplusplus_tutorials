//
//  main.cpp
//  helloWorld
//
//  Created by Jolugbo on 7/20/21.
//
//#include <GLFW/glfw3.h>
#include <google/cloud/storage/client.h>
#include <iostream>
#include <vector>
#include <array>
#include <algorithm> 
#include "student.cpp"
#include "fractor.cpp"
#include "product.cpp"
#include "dynamicArray.cpp"
#include "vectorManipulations.cpp"
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
#include "algos/random_codility/random_codilities.cpp"
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
#include "data_structure/Trees/Generic_Trees/Generic_Tree.cpp"
#include "data_structure/Trees/Binary _Tree/Binary_Tree.cpp"
#include "data_structure/Trees/Binary_Search_Tree/BinarySearchTree.cpp"
#include "data_structure/HashMap/Unordered_Map.cpp"
#include "data_structure/HashMap/HashMap.cpp"
#include "data_structure/PriorityQueue/CustomPriorityQueue.cpp"
#include "data_structure/PriorityQueue/InBuiltPriorityQueue.cpp"
#include "algos/dynamic_programming/Fibonacci_Upgraded.cpp"
#include "algos/dynamic_programming/MinimumStepTo1.cpp"
#include "algos/dynamic_programming/ClimbingStairs.cpp"
#include "algos/dynamic_programming/LongestCommonSubsequence.cpp"
#include "algos/dynamic_programming/EditDistance.cpp"
#include "algos/dynamic_programming/KnapSack.cpp"
#include "algos/dynamic_programming/LargestCombination.cpp"
#include "algos/random_codility/RotateVector.cpp"
#include "data_structure/Graphs/Adjacent_Matrix_Graph.cpp"
#include "data_structure/Graphs/CommutableIsland.cpp"
#include "algos/searchAlgos/TownJudge.cpp"
#include "algos/searchAlgos/TwoSums.cpp"
#include "algos/linked_list/AddTwoNumbers.cpp"
using namespace std;
using namespace Btree;

int length(char arr[]) {
	int length = 0;
	for (int i = 0; arr[i] != '\0'; i++) {
		length++;
	}
	return length;
}

// reverse a string e.g first becomes last, second becomes second to the last etc using thhe swap function
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

//Array size cannot exceed size 10^5
void arraySize() {
	int arr[100000];
	for (int i = 0; i < 1000000; i++) {
		cout << arr[i];
	}
	cout << "\n the end";

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

// print largest number in array...
int largestNumberInArray() {
	cout << "input 5 array numbers\n";
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cout << "array value at position " << i << ": ";
		cin >> arr[i];
	}
	int highest = INT8_MIN;// c++ universal minimum integer

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

//c++ strcmp default comparing string
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
	cout << s << "\n ";
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
	s = "testing";
	cout << s.size() << "\n";
	cout << s.length() << "\n";
}

// string substring
void substringString() {
	string s;
	s = "testing";
	cout << s.substr(1) << "\n";
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
	int sum = atoi(num.c_str());
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

	double x = 10.55;
	DoublePair<int, double> doublePairs(x,x);
	doublePairs.setX(x);
	doublePairs.setY(x);

	cout << doublePairs.getX() + doublePairs.getY()<< endl;

	DoublePair<int, double> doubles(10,2.5);
	//DoublePair<DoublePair<int, double>, double> triplet(doubles,12.1);
	/*doubles.setX(10);
	doubles.setY(2.5);
	triplet.setY(12.1);
	triplet.setX(doubles);*/
	//cout << triplet.getX().getX()<<" "<< triplet.getX().getY()<< " " << triplet.getY() <<" "<< triplet.getX().getX() + triplet.getY() << endl;

}

void twoSumUse() {
	vector<int> vec1;
	vec1.push_back(3);//[3,2,95,4,-3]
	vec1.push_back(2); 
	vec1.push_back(95);
	vec1.push_back(4); 
	vec1.push_back(-3);
	TwoSums ts(vec1, 92);  
}

int lowestAbsence(vector<int> A, int counter) {
	if (A.size() == 0)return 1;
	if (counter == A.size() - 1 && A[counter] > counter) return counter;
	else return lowestAbsence(A, ++counter);
}
long repeatedString(string s, long n) {


	string totalLength = "";
	long totalLengthHeight = n / s.length(); 

	for (long i = 0; i < totalLengthHeight; i++)
	{
		totalLength += s;
	}
	long remainder = n % s.length();
	for (int i = 0; i < remainder; i++)
	{
		totalLength += s[i];
	}
	long max = 0;
	unordered_map<char, long> uo_map;
	for (long i = 0; i < totalLength.length(); i++)
	{
		uo_map[totalLength[i]] = uo_map[totalLength[i]] + 1;
		if (uo_map[totalLength[i]] > max) { 
			max++; 
		}  
	} 
	return max;
}
 
#undef main 
int main() { 
	int test[][3] = {
		{7, 65, 610},
		{74, 53, 927},
		{68, 67, 263},
		{67, 56, 277},
		{17, 34, 275},
		{66, 42, 822},
		{24, 73, 984},
		{39, 19, 324},
		{76, 45, 820},
		{12, 78, 488},
		{35, 29, 177},
		{25, 52, 682},
		{47, 42, 192},
		{4, 24, 783},
		{7, 44, 255},
		{75, 64, 73},
		{13, 60, 979},
		{5, 65, 131},
		{71, 5, 443},
		{33, 39, 966},
		{17, 58, 9	},
		{48, 15, 102},
		{30, 55, 807},
		{23, 14, 961},
		{26, 74, 100},
		{75, 9, 433},
		{50, 18, 660},
		{32, 73, 320},
		{38, 56, 17},
		{43, 11, 292},
		{1, 19, 919},
		{21, 52, 172},
		{77, 26, 91},
		{27, 22, 666},
		{32, 44, 575},
		{25, 13, 490},
		{64, 31, 752},
		{18, 41, 794},
		{36, 51, 801},
		{51, 63, 187},
		{36, 9, 959},
		{2, 8, 855	},
		{10, 43, 596},
		{33, 70, 660},
		{59, 46, 56},
		{23, 57, 161},
		{49, 31, 54},
		{76, 5, 223},
		{68, 28, 123},
		{10, 28, 26},
		{27, 66, 909},
		{20, 11, 649},
		{59, 58, 329},
		{45, 59, 186},
		{53, 40, 606},
		{54, 12, 370},
		{69, 61, 865},
		{57, 72, 572},
		{37, 48, 601},
		{29, 60, 872},
		{63, 47, 77},
		{15, 40, 295},
		{16, 45, 330},
		{34, 3, 652},
		{54, 37, 482},
		{6, 37, 533},
		{30, 41, 146},
		{62, 50, 514},
		{8, 57, 492},
		{22, 70, 543},
		{78, 2, 581},
		{35, 61, 750},
		{49, 69, 71},
		{14, 55, 135},
		{21, 4, 610},
		{77, 3, 666},
		{38, 62, 743},
		{2, 1, 188	},
		{3, 1, 38	},
		{4, 1, 281	},
		{5, 1, 833	},
		{6, 1, 530	},
		{7, 1, 241	},
		{8, 1, 584	},
		{9, 1, 248	},
		{10, 1, 191},
		{11, 1, 575},
		{12, 1, 231},
		{13, 1, 649},
		{14, 1, 823},
		{15, 1, 784},
		{16, 1, 468},
		{17, 1, 39},
		{18, 1, 762},
		{20, 1, 416},
		{21, 1, 880},
		{22, 1, 551},
		{23, 1, 585},
		{24, 1, 944},
		{25, 1, 992},
		{26, 1, 621},
		{27, 1, 36},
		{28, 1, 915},
		{29, 1, 965},
		{30, 1, 870},
		{31, 1, 470},
		{32, 1, 866},
		{33, 1, 604},
		{34, 1, 756},
		{35, 1, 143},
		{36, 1, 761},
		{37, 1, 183},
		{38, 1, 701},
		{39, 1, 681},
		{40, 1, 215},
		{41, 1, 235},
		{42, 1, 204},
		{43, 1, 844},
		{44, 1, 826},
		{45, 1, 456},
		{46, 1, 815},
		{47, 1, 451},
		{48, 1, 929},
		{49, 1, 404},
		{50, 1, 399},
		{51, 1, 5},
		{52, 1, 56},
		{53, 1, 928},
		{54, 1, 731},
		{55, 1, 60},
		{56, 1, 63},
		{57, 1, 745},
		{58, 1, 581},
		{59, 1, 241},
		{60, 1, 275},
		{61, 1, 240},
		{62, 1, 563},
		{63, 1, 830},
		{64, 1, 692},
		{65, 1, 459},
		{66, 1, 15},
		{67, 1, 482},
		{68, 1, 725},
		{69, 1, 34},
		{70, 1, 208},
		{71, 1, 569},
		{72, 1, 776},
		{73, 1, 938},
		{74, 1, 935},
		{75, 1, 810},
		{76, 1, 471},
		{77, 1, 606},
		{78, 1, 955},
		{3, 2, 375},
		{4, 2, 252},
		{5, 2, 121},
		{6, 2, 821},
		{7, 2, 776},
		{9, 2, 650},
		{10, 2, 429},
		{11, 2, 317},
		{12, 2, 584},
		{13, 2, 409},
		{14, 2, 319},
		{15, 2, 891},
		{16, 2, 447},
		{17, 2, 638},
		{18, 2, 104},
		{19, 2, 814},
		{20, 2, 358},
		{21, 2, 840},
		{22, 2, 69},
		{23, 2, 225},
		{24, 2, 766},
		{25, 2, 933},
		{26, 2, 208},
		{27, 2, 425},
		{28, 2, 401},
		{29, 2, 731},
		{30, 2, 750},
		{31, 2, 448},
		{32, 2, 615},
		{33, 2, 679},
		{34, 2, 335},
		{35, 2, 669},
		{36, 2, 227},
		{37, 2, 417},
		{38, 2, 249},
		{39, 2, 794},
		{40, 2, 308},
		{41, 2, 190},
		{42, 2, 429},
		{43, 2, 901},
		{44, 2, 725},
		{45, 2, 837},
		{46, 2, 833},
		{47, 2, 799},
		{48, 2, 44},
		{49, 2, 523},
		{50, 2, 212},
		{51, 2, 448},
		{52, 2, 246},
		{53, 2, 623},
		{54, 2, 740},
		{55, 2, 601},
		{56, 2, 314},
		{57, 2, 854},
		{58, 2, 619},
		{59, 2, 720},
		{60, 2, 634},
		{61, 2, 808},
		{62, 2, 534},
		{63, 2, 944},
		{64, 2, 189},
		{65, 2, 225},
		{66, 2, 157},
		{67, 2, 654},
		{68, 2, 512},
		{69, 2, 817},
		{70, 2, 974},
		{71, 2, 293},
		{72, 2, 248},
		{73, 2, 668},
		{74, 2, 979},
		{75, 2, 971},
		{76, 2, 113},
		{77, 2, 547},
		{4, 3, 575},
		{5, 3, 554},
		{6, 3, 610},
		{7, 3, 546},
		{8, 3, 436},
		{9, 3, 688},
		{10, 3, 431},
		{11, 3, 56},
		{12, 3, 504},
		{13, 3, 263},
		{14, 3, 814},
		{15, 3, 370},
		{16, 3, 755},
		{17, 3, 670},
		{18, 3, 202},
		{19, 3, 895},
		{20, 3, 850},
		{21, 3, 486},
		{22, 3, 756},
		{23, 3, 541},
		{24, 3, 440},
		{25, 3, 341},
		{26, 3, 468},
		{27, 3, 395},
		{28, 3, 464},
		{29, 3, 310},
		{30, 3, 612},
		{31, 3, 221},
		{32, 3, 492},
		{33, 3, 424},
		{35, 3, 862},
		{36, 3, 996},
		{37, 3, 393},
		{38, 3, 187},
		{39, 3, 105},
		{40, 3, 123},
		{41, 3, 224},
		{42, 3, 542},
		{43, 3, 808},
		{44, 3, 435},
		{45, 3, 87},
		{46, 3, 875},
		{47, 3, 274},
		{48, 3, 799},
		{49, 3, 526},
		{50, 3, 41},
		{51, 3, 299},
		{52, 3, 105},
		{53, 3, 123},
		{54, 3, 865},
		{55, 3, 810},
		{56, 3, 748},
		{57, 3, 966},
		{58, 3, 506},
		{59, 3, 977},
		{60, 3, 887},
		{61, 3, 341},
		{62, 3, 710},
		{63, 3, 289},
		{64, 3, 392},
		{65, 3, 489},
		{66, 3, 18},
		{67, 3, 531},
		{68, 3, 439},
		{69, 3, 256},
		{70, 3, 18},
		{71, 3, 407},
		{72, 3, 431},
		{73, 3, 689},
		{74, 3, 434},
		{75, 3, 425},
		{76, 3, 384},
		{78, 3, 875},
		{5, 4, 974},
		{6, 4, 311},
		{7, 4, 432},
		{8, 4, 750},
		{9, 4, 635},
		{10, 4, 180},
		{11, 4, 581},
		{12, 4, 832},
		{13, 4, 116},
		{14, 4, 761},
		{15, 4, 540},
		{16, 4, 137},
		{17, 4, 998},
		{18, 4, 471},
		{19, 4, 478},
		{20, 4, 287},
		{22, 4, 916},
		{23, 4, 589},
		{25, 4, 285},
		{26, 4, 219},
		{27, 4, 707},
		{28, 4, 880},
		{29, 4, 124},
		{30, 4, 579},
		{31, 4, 903},
		{32, 4, 310},
		{33, 4, 948},
		{34, 4, 86},
		{35, 4, 365},
		{36, 4, 394},
		{37, 4, 112},
		{38, 4, 651},
		{39, 4, 311},
		{40, 4, 644},
		{41, 4, 82},
		{42, 4, 794},
		{43, 4, 811},
		{44, 4, 846},
		{45, 4, 339},
		{46, 4, 737},
		{47, 4, 596},
		{48, 4, 79},
		{49, 4, 359},
		{50, 4, 480},
		{51, 4, 167},
		{52, 4, 996},
		{53, 4, 78},
		{54, 4, 565},
		{55, 4, 368},
		{56, 4, 282},
		{57, 4, 941},
		{58, 4, 873},
		{59, 4, 395},
		{60, 4, 942},
		{61, 4, 483},
		{62, 4, 226},
		{63, 4, 795},
		{64, 4, 933},
		{65, 4, 540},
		{66, 4, 583},
		{67, 4, 814},
		{68, 4, 724},
		{69, 4, 658},
		{70, 4, 599},
		{71, 4, 558},
		{72, 4, 825},
		{73, 4, 351},
		{74, 4, 922},
		{75, 4, 106},
		{76, 4, 191},
		{77, 4, 483},
		{78, 4, 590},
		{6, 5, 491},
		{7, 5, 423},
		{8, 5, 380},
		{9, 5, 339},
		{10, 5, 551},
		{11, 5, 162},
		{12, 5, 633},
		{13, 5, 240},
		{14, 5, 42},
		{15, 5, 303},
		{16, 5, 167},
		{17, 5, 36},
		{18, 5, 952},
		{19, 5, 739},
		{20, 5, 916},
		{21, 5, 501},
		{22, 5, 916},
		{23, 5, 916},
		{24, 5, 607},
		{25, 5, 61},
		{26, 5, 413},
		{27, 5, 654},
		{28, 5, 318},
		{29, 5, 119},
		{30, 5, 563},
		{31, 5, 414},
		{32, 5, 557},
		{33, 5, 895},
		{34, 5, 910},
		{35, 5, 529},
		{36, 5, 446},
		{37, 5, 15},
		{38, 5, 648},
		{39, 5, 230},
		{40, 5, 772},
		{41, 5, 915},
		{42, 5, 270},
		{43, 5, 424},
		{44, 5, 911},
		{45, 5, 918},
		{46, 5, 106},
		{47, 5, 565},
		{48, 5, 491},
		{49, 5, 914},
		{50, 5, 964},
		{51, 5, 977},
		{52, 5, 1000},
		{53, 5, 837},
		{54, 5, 996},
		{55, 5, 204},
		{56, 5, 243},
		{57, 5, 990},
		{58, 5, 506},
		{59, 5, 88},
		{60, 5, 964},
		{61, 5, 300},
		{62, 5, 287},
		{63, 5, 836},
		{64, 5, 839},
		{66, 5, 535},
		{67, 5, 697},
		{68, 5, 219},
		{69, 5, 515},
		{70, 5, 301},
		{72, 5, 395},
		{73, 5, 942},
		{74, 5, 149},
		{75, 5, 375},
		{77, 5, 962},
		{78, 5, 462},
		{7, 6, 686},
		{8, 6, 49},
		{9, 6, 841},
		{10, 6, 27},
		{11, 6, 417},
		{12, 6, 581},
		{13, 6, 606},
		{14, 6, 8},
		{15, 6, 430},
		{16, 6, 665},
		{17, 6, 379},
		{18, 6, 620},
		{19, 6, 690},
		{20, 6, 212},
		{21, 6, 918},
		{22, 6, 162},
		{23, 6, 789},
		{24, 6, 605},
		{25, 6, 489},
		{26, 6, 74},
		{27, 6, 626},
		{28, 6, 220},
		{29, 6, 370},
		{30, 6, 294},
		{31, 6, 994},
		{32, 6, 583},
		{33, 6, 980},
		{34, 6, 910},
		{35, 6, 697},
		{36, 6, 687},
		{38, 6, 773},
		{39, 6, 476},
		{40, 6, 360},
		{41, 6, 248},
		{42, 6, 918},
		{43, 6, 473},
		{44, 6, 201},
		{45, 6, 780},
		{46, 6, 902},
		{47, 6, 806},
		{48, 6, 95},
		{49, 6, 937},
		{50, 6, 127},
		{51, 6, 652},
		{52, 6, 643},
		{53, 6, 142},
		{54, 6, 119},
		{55, 6, 140},
		{56, 6, 352},
		{57, 6, 74},
		{58, 6, 25},
		{59, 6, 832},
		{60, 6, 624},
		{61, 6, 677},
		{62, 6, 778},
		{63, 6, 432},
		{64, 6, 484},
		{65, 6, 317},
		{66, 6, 884},
		{67, 6, 950},
		{68, 6, 384},
		{69, 6, 763},
		{70, 6, 422},
		{71, 6, 619},
		{72, 6, 332},
		{73, 6, 667},
		{74, 6, 201},
		{75, 6, 767},
		{76, 6, 604},
		{77, 6, 352},
		{78, 6, 189},
		{8, 7, 461},
		{9, 7, 129},
		{10, 7, 885},
		{11, 7, 746},
		{12, 7, 764},
		{13, 7, 319},
		{14, 7, 525},
		{15, 7, 824},
		{16, 7, 95},
		{17, 7, 45},
		{18, 7, 84},
		{19, 7, 511},
		{20, 7, 782},
		{21, 7, 199},
		{22, 7, 123},
		{23, 7, 655},
		{24, 7, 107},
		{25, 7, 415},
		{26, 7, 336},
		{27, 7, 122},
		{28, 7, 878},
		{29, 7, 504},
		{30, 7, 924},
		{31, 7, 405},
		{32, 7, 706},
		{33, 7, 18},
		{34, 7, 715},
		{35, 7, 75},
		{36, 7, 949},
		{37, 7, 601},
		{38, 7, 223},
		{39, 7, 497},
		{40, 7, 956},
		{41, 7, 174},
		{42, 7, 78},
		{43, 7, 483},
		{45, 7, 620},
		{46, 7, 956},
		{47, 7, 207},
		{48, 7, 54},
		{49, 7, 58},
		{50, 7, 868},
		{51, 7, 857},
		{52, 7, 428},
		{53, 7, 309},
		{54, 7, 138},
		{55, 7, 413},
		{56, 7, 531},
		{57, 7, 686},
		{58, 7, 349},
		{59, 7, 487},
		{60, 7, 342},
		{61, 7, 631},
		{62, 7, 275},
		{63, 7, 848},
		{64, 7, 586},
		{66, 7, 153},
		{67, 7, 298},
		{68, 7, 615},
		{69, 7, 251},
		{70, 7, 436},
		{71, 7, 672},
		{72, 7, 99},
		{73, 7, 388},
		{74, 7, 323},
		{75, 7, 101},
		{76, 7, 195},
		{77, 7, 466},
		{78, 7, 173},
		{9, 8, 796},
		{10, 8, 502},
		{11, 8, 2},
		{12, 8, 398},
		{13, 8, 654},
		{14, 8, 19},
		{15, 8, 447},
		{16, 8, 755},
		{17, 8, 646},
		{18, 8, 235},
		{19, 8, 581},
		{20, 8, 130},
		{21, 8, 133},
		{22, 8, 10},
		{23, 8, 632},
		{24, 8, 640},
		{25, 8, 504},
		{26, 8, 913},
		{27, 8, 198},
		{28, 8, 384},
		{29, 8, 805},
		{30, 8, 567},
		{31, 8, 465},
		{32, 8, 395},
		{33, 8, 674},
		{34, 8, 963},
		{35, 8, 62},
		{36, 8, 491},
		{37, 8, 950},
		{38, 8, 668},
		{39, 8, 360},
		{40, 8, 22},
		{41, 8, 438},
		{42, 8, 697},
		{43, 8, 261},
		{44, 8, 713},
		{45, 8, 145},
		{46, 8, 625},
		{47, 8, 408},
		{48, 8, 451},
		{49, 8, 613},
		{50, 8, 789},
		{51, 8, 414},
		{52, 8, 765},
		{53, 8, 440},
		{54, 8, 969},
		{55, 8, 897},
		{56, 8, 841},
		{58, 8, 311},
		{59, 8, 527},
		{60, 8, 936},
		{61, 8, 424},
		{62, 8, 394},
		{63, 8, 59},
		{64, 8, 941},
		{65, 8, 178},
		{66, 8, 678},
		{67, 8, 376},
		{68, 8, 965},
		{69, 8, 58},
		{70, 8, 858},
		{71, 8, 409},
		{72, 8, 980},
		{73, 8, 136},
		{74, 8, 114},
		{75, 8, 817},
		{76, 8, 606},
		{77, 8, 77},
		{78, 8, 767},
		{10, 9, 76},
		{11, 9, 983},
		{12, 9, 410},
		{13, 9, 645},
		{14, 9, 363},
	};
	vector<vector<int>> vec;
	for (int i = 0; i < 656; i++)
	{
		vector<int> vec1;
		vec1.push_back(test[i][0]);
		vec1.push_back(test[i][1]);
		vec1.push_back(test[i][2]);
		vec.push_back(vec1);
	}
	/*vector<vector<int>> vec; 
	vector<int> vec1;vector<int> vec2;vector<int> vec3;vector<int> vec4;vector<int> vec5;
	vec1.push_back(1);vec1.push_back(2);vec1.push_back(1);
	vec2.push_back(2); vec2.push_back(3); vec2.push_back(4); 
	vec3.push_back(1); vec3.push_back(4); vec3.push_back(3);     
	vec4.push_back(4); vec4.push_back(3); vec4.push_back(2); 
	vec5.push_back(1); vec5.push_back(3); vec5.push_back(10);  
	vec.push_back(vec1); vec.push_back(vec2); vec.push_back(vec3); vec.push_back(vec4); vec.push_back(vec5);*/
	CommutableIsland C(78, vec);    
	//InBuiltStack();
	//Adjacent_Matrix_Graph graph(8, 6); 
	//int a = glfwInit();
	//namespace gcs = ::google::cloud::storage;
	//cout << a << endl;
	//CommutableIsland comIsl();
	/*0 1
		0 2
		1 3
		1 4
		2 6
		3 5
		4 5
		6 5*/
	/*int A[] = { 14, 5, 14, 34, 42, 63, 17, 25, 39, 61, 97, 55, 33, 96, 62, 32, 98, 77, 35 };
	int arrSize1 = sizeof(A) / sizeof(A[0]);
	vector<int> vec1;
	for (int i = 0; i < arrSize1; i++) 
	{ 
		vec1.push_back(A[i]);
	}
	RotateVector vec(vec1, 56);*/  
//A: [539, 870]
//B : [13, 68]
//C : 300
	/*int A[] = { 14, 5, 14, 34, 42, 63, 17, 25, 39, 61, 97, 55, 33, 96, 62, 32, 98, 77, 35  };
	int B[] = { 4, 4, 5, 2, 2, 4, 9, 8, 5, 3, 8, 8, 10, 4, 2, 10, 9, 7, 6, 1, 3, 9, 7, 1, 3, 5, 9, 7, 6, 1, 10, 1, 1, 7, 2, 4, 9, 10, 4, 5, 5, 7 };
     int arrSize1 = sizeof(A) / sizeof(A[0]);
	 int arrSize2 = sizeof(B) / sizeof(B[0]);
	 for (int i = 0; i < arrSize1; i++)
	 {
		 vec1.push_back(A[i]);
	 }
	 for (int i = 0; i < arrSize2; i++)
	 {
		 vec2.push_back(B[i]);
	 }*/
	
	//cout << calc.solve(vec1, vec2, C)<<endl;
	/*for (int i = 0; i < 5; i++)
	{ 
		cout << input[i] << endl;
	}*/

	//vector<vector<int>> vec;
	////[[1,2],[2,3]]
	//vector<int> temp2;
	//temp2.push_back(2);
	//temp2.push_back(3);
	//vec.push_back(temp);
	//vec.push_back(temp2);
	//me->findJudge(2, vec);
	/*Unordered_Map* me = new Unordered_Map();
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(2);
	cout << me->countUnique(vec);*/
	/*Binary_Tree<int>* root = new Binary_Tree<int>(0);
	Binary_Tree<int>* node1 = new Binary_Tree<int>(1);
	Binary_Tree<int>* node2 = new Binary_Tree<int>(2); 
	root->leftNode = node1;
	root->rightNode = node2;*/
	/*Binary_Tree<int>* root =   Binary_Tree<int>(0).TakeInputLevelWise();
	root->PrintTreeRecursively(root);
	cout << endl << endl;
	root->PrintTreeRecursivelyInOrderTraversal(root);
	cout << endl << endl;
	root->PrintTreeLevelWise(root);
	cout << endl << endl;
	cout << "Diameter of binary tree " << root->DiameterOfBinaryTree2(root) << endl;
	cout << endl << endl;
	cout << "path to a node in Binary Tree " << endl;
	cout << endl << endl;
	vector<int>* path = new vector<int>();
	root->getPath(root, 7,path);
	for (int i = 0; i < path->size(); i++)
	{
		cout << path->at(i) << endl;
	}
	BinarySearchTree newBST;
	queue<int>* queu = new queue<int>();
	Binary_Tree<int>* newBST2 = newBST.BSTToSortedLinkedListEntry(root, queu);
	cout << endl << endl; 
	newBST2->PrintTreeLevelWise(newBST2);*/
	/*vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(6);
	vec.push_back(7);
	vec.push_back(8);
	vec.push_back(9);
	vec.push_back(10);
	newBST.deleteNodeInBSTTree(root, 5);
	root->PrintTreeLevelWise(root);*/
	/*cout << "Minimum value in a Min Binary Tree " << endl;
	cout << newBST.MinValueInBST(root);
	cout << endl << endl;
	cout << "Maximum value in a Min Binary Tree " << endl;
	cout << newBST.MaxValueInBST(root);
	cout << endl << endl;
	newBST.rangeSumBST(root,6,10);*/
	/*cout << root->CountNodes(root);
	cout << endl << endl;
	cout << root->findMinInTree(root);
	cout << endl << endl;
	cout << root->findMaxInTree(root);
	cout << endl << endl;
	cout << root->CountLeafNode(root);*/
	//vector<int> postorder;
	//postorder.push_back(9);
	//postorder.push_back(15);
	//postorder.push_back(7);
	//postorder.push_back(20);
	//postorder.push_back(3);
	//vector<int> inorder;
	//inorder.push_back(9);
	//inorder.push_back(3);
	//inorder.push_back(15);
	//inorder.push_back(20);
	//inorder.push_back(7);
	//// = new vector<int>[3, 9, 20, 15, 7], inorder = [9, 3, 15, 20, 7]
	//Binary_Tree<int>* root2 = Binary_Tree<int>(0).ConstructFromInOrderPostOrderTraversal(inorder, postorder);
	//root2->PrintTreeRecursively(root2);
	
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


