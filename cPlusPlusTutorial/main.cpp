//
//  main.cpp
//  helloWorld
//
//  Created by Jolugbo on 7/20/21.
//
//#include <GLFW/glfw3.h>
//#include <google/cloud/storage/client.h>
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
#include "algos/sortAlgos/TopologicalSort.cpp"
#include "algos/LongestUniqueLengthInString.cpp"
#include "algos/random_codility/FindMedianSortedArrays.cpp"
#include "algos/random_codility/LongestPalindromic.cpp" 
#include "algos/random_codility/ZigzagConvo.cpp"
#include "algos/random_codility/ReverseInteger.cpp"
#include "algos/random_codility/MyAtoi.cpp"
#include "algos/random_codility/PalindromeNumber.cpp"
#include "algos/random_codility/RegularExpressionMatching.cpp"
#include "algos/random_codility/ContainerWithMostWater.cpp"
#include "algos/vectors_algos/MissingNumber.cpp"
#include "algos/dynamic_programming/MaximumProductOfWordLengths.cpp"
#include "algos/random_codility/DivideTwoIntegers.cpp"
#include "algos/random_codility/HasAllValidBinary.cpp"
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
	string arr[] = { "abcw","baz","foo","bar","xtfn","abcdef" };              
	//{ 28,342,418,485,719,670,878,752,662,994,654,504,929,660,424,855,922,744,600,229,728,33,371,863,561,772,271,178,455,449,426,835,143,845,321,214,867,199,967,881,193,973,386,122,633,810,330,907,906,282,136,986,315,860,849,229,632,473,759,87,922,185,922,418,382,243,632,250,795,599,131,988,924,869,463,558,680,145,465,938,427,954,925,94,814,126,323,798,599,434,885,874,620,159,292,354,755,924,956,550,876,88,890,800,309,705,358,989,850,176,280,629,130,205,724,296,331,399,94,283,186,331,157,806,490,801,512,597,725,469,499,601,909,390,754,218,447,112,560,298,640,840,279,122,397,355,418,80,755,864,363,293,195,872,451,38,673,963,635,751,432,487,352,341,229,458,912,676,923,472,326,563,312,606,686,709,313,456,789,420,321,505,713,868,377,164,258,403,128,246,154,912,733,858,606,962,317,518,990,240,990,317,803,302,275,841,363,588,650,504,9,323,9,74,191,387,239,450,790,367,48,944,279,781,802,885,743,471,755,85,711,745,402,867,399,29,708,762,970,710,267,331,33,276,405,577,15,644,379,157,363,427,453,995,208,608,232,303,79,988,388,791,733,143,658,133,524,718,247,846,429,514,529,814,143,935,743,510,931,122,668,647,901,473,642,461,81,874,764,513,214,505,304,948,0,314,433,876,384,680,75,165,547,604,980,42,891,75,552,823,198,572,822,451,46,816,913,479,42,29,992,257,886,648,557,238,962,990,115,699,22,190,864,921,794,196,315,686,272,868,861,822,792,35,273,190,851,186,670,893,568,662,150,454,311,59,693,625,49,808,324,424,350,189,697,496,737,13,534,9,881,747,831,25,782,457,216,985,643,886,879,211,900,381,18,211,441,711,837,842,871,513,618,573,702,316,69,440,329,956,801,562,703,633,587,486,90,803,471,85,41,702,649,942,436,19,505,877,730,342,71,953,856,690,526,910,6,947,702,335,903,504,249,607,489,836,445,931,992,268,368,33,971,369,327,407,388,833,636,470,527,59,423,735,749,301,646,107,249,700,794,504,556,43,111,397,232,908,328,224,177,49,609,500,418,937,259,159,770,247,629,297,306,405,33,408,706,31,867,955,83,662,460,640,57,923,37,289,832,718,865,361,119,475,213,537,412,472,48,534,71,678,183,377,83,568,137,141,599,5,449,35,19,261,675,76,184,64,366,368,134,583,81,253,58,294,143,822,118,191,356,189,221,892,919,656,460,56,798,412,61,247,447,80,508,474,509,44,538,227,765,673,810,846,278,869,493,421,43,611,613,752,153,834,644,72,491,456,128,641,868,542,888,315,974,748,141,483,144,32,710,909,705,873,108,983,94,601,757,137,564,370,241,69,556,885,141,47,694,622,688,562,516,928,230,490,28,371,326,173,403,388,82,460,613,542,796,707,495,553,197,412,275,438,481,831,676,623,231,370,597,271,284,113,200,514,955,228,238,633,753,993,374,188,806,987,730,602,695,226,507,892,638,782,330,471,965,358,94,196,728,43,468,365,508,20,879,464,600,469,449,354,463,823,542,621,811,624,223,506,850,82,750,840,216,432,312,181,791,758,730,871,802,550,236,310,570,468,126,522,289,576,228,104,751,122,725,562,747,300,420,949,382,170,790,950,603,454,132,746,564,214,969,366,764,206,29,686,26,507,208,315,435,789,420,187,911,145,101,658,446,522,608,180,692,750,131,647,556,615,393,120,181,363,839,945,921,220,983,299,727,543,614,515,332,386,54,244,884,155,254,682,29,214,862,722,964,345,721,520,960,467,993,141,182,832,438,455,52,421,754,131,317,720,646,649,107,52,245,343,208,500,25,589,714,239,311,31,585,385,903,897,852,896,391,386,728,181,841,780,955,595,264,272,315,262,921,774,315,167,117,875,19,494,464,733,86,128,116,671,513,20,920,717,916,663,103,997,845,944,129,800,891,393,72,558,656,345,333,971,512,802,846,883,649,662,617,735,790,733,406,655,105,678,372,374,342,827,371,187,123,500,339,14,246,411,573,902,108,258,225,973,60,423,856,709,85,473,444,876,559,202,531,16,233,256,390,575,83,761,114,559,614,453,573,860,216,498,114,324,756,339,649,169,762,506,230,199,979,27,427,890,581,311,259,814,567,649,389,2,763,855,561,377,660,487,589,228,337,703,905,446,42,554,615,156,60,197,707,392,576,135,282,158,446,541,324,365,543,66,367,306,921,281,35,582,768,624,810,457,327,715,903,721,270,870,229,682,68,936,74,996,423,709,154,221,250,479,586,145,545,306,451,818,587,486,400,707,462,563,164,789,630,420,862,252,290,443,935,358,732,9,355,155,718,861,729,321,692,315,466,237,973,270,56,560,108,808,619,571,723,136,712,354,556,927,958,846,370,893,557,454,255,264,610,325,477,339,998,170,6,817,759,980,87,815,892,547,976,864,470,51,0,183,405,908,462,716,754,184,961,663,639,216,927,249,894,405,940,892,927,298,709,686,630,148,854,523,696,830,387,166,881,739,701,639,647,163,707,401,348,668,417,987,237,344,588,131,101,880,375,28,178,85,67,161,233,921,684,929,103,423,448,984,162,149,975,809,665,682,562,13,703,979,352,940,676,940,423,777,172,798,158,702,883,225,863,469,498,899,750,601,322,198,937,484,348,265,293,365,299,856,378,2,187,82,294,863,374,717,993,546,516,151,248,751,728,464,220,578,363,971,179,686,169,116,522,869,381,168,234,681,376,964,35,563,46,330,427,420,47,420,318,915,923,919,667,3,383,239,581,98,562,760,136,732,228,659,953,962,827,540,995,203,856,30,118,903,712,545,675,112,317,994,27,240,913,46,243,648,638,824,746,200,936,883,284,165,894,590,127,721,130,474,276,986,504,394,241,217,292,269,329,609,263,708,202,528,107,797,176,745,974,274,945,910,157,582,427,403,172,906,124,302,380,752,640,885,499,234,454,791,503,135,752,118,843,954,646,302,104,174,47,78,800,345,988,310,927,416,713,99,322,838,753,55,942,745,940,441,979,746,584,482,881,337,952,76,643,598,379,747,124,778,825,925,123,166,235,402,934,948,853,608,138,606,663,81,704,955,874,683,701,459,518,934,148,470,363,791,421,94,891,545,872,68,822,348,234,57,102,168,358,956,129,496,914,792,929,618,748,804,654,801,263,524,736,411,994,451,554,767,545,797,313,769,866,487,117,452,545,572,973,903,528,102,751,442,246,681,413,994,485,67,148,100,591,236,863,937,687,417,705,232,567,370,353,433,857,823,237,754,395,210,9,923,664,113,717,911,794,482,257,631,549,405,83,492,641,946,782,328,715,839,912,282,561,266,715,418,89,305,525,484,515,534,759,532,999,476,443,793,959,700,776,860,106,859,705,99,805,839,428,873,678,692,155,239,958,223,9,399,528,886,235,395,773,994,927,772,823,722,566,134,423,694,346,881,554,403,332,711,242,760,584,272,805,740,863,763,315,873,515,843,759,750,238,884,745,518,657,568,240,575,54,15,269,400,248,175,804,581,887,398,693,823,671,498,915,534,262,230,759,129,425,871,879,664,755,624,534,412,544,774,987,950,790,257,351,390,784,507,971,671,905,665,847,928,163,762,463,777,345,574,906,770,445,786,786,201,762,320,965,659,95,953,609,237,562,312,979,346,819,951,370,77,616,569,357,131,331,820,909,28,747,167,799,192,953,585,745,68,906,711,727,353,16,688,942,930,1,921,628,172,224,350,601,192,919,959,324,251,131,585,279,878,752,430,423,58,16,168,126,274,231,205,979,247,893,921,177,246,194,158,419,419,508,20,963,428,331,639,31,463,224,662,341,329,93,764,739,461,285,217,735,516,422,714,764,667,987,293,914,533,451,685,304,960,57,268,740,389,907,771,852,484,433,545,165,878,310,904,339,947,121,426,463,895,492,579,914,831,873,828,365,676,865,21,988,923,289,728,312,549,851,516,385,637,61,550,515,723,806,207,670,927,985,134,174,478,713,88,309,938,269,26,615,134,48,955,409,689,684,721,590,887,589,975,524,651,877,392,726,683,599,397,962,584,883,136,414,948,577,724,239,846,102,206,332,150,161,742,192,197,815,782,85,405,758,609,408,635,353,134,671,952,883,633,889,118,122,655,419,699,731,658,897,834,216,229,336,377,323,528,927,139,311,12,896,69,973,304,56,679,790,727,631,674,361,872,792,483,528,563,534,259,221,431,445,437,12,782,167,336,310,94,827,621,458,723,42,783,379,99,462,169,826,446,843,539,670,988,374,550,551,908,162,125,691,607,914,704,389,81,392,52,527,571,673,337,294,716,473,25,167,935,194,993,733,38,885,404,378,259,306,281,168,468,406,211,76,321,915,817,754,659,869,634,230,895,323,876,611,796,253,778,84,448,123,817,838,8,573,216,268,880,849,788,348,256,999,776,929,267,594,683,278,815,669,861,710,993,89,673,789,343,803,225,791,927,43,981,287,968,549,907,848,398,47,549,654,47,325,583,666,271,619,944,439,640,805,149,633,895,175,775,590,978,0,381,257,395,714,545,364,263,804,564,661,852,113,668,899,791,603,917,414,222,861,205,863,19,355,848,914,530,623,856,860,976,237,118,371,303,15,87,566,819,652,579,671,117,247,922,260,851,839,27,425,53,232,640,72,587,489,338,469,464,194,682,440,783,800,812,86,167,899,652,986,903,231,10,21,831,284,281,682,476,308,107,529,893,748,601,832,589,939,302,53,485,336,494,268,136,658,354,303,909,358,641,813,941,651,186,772,288,467,454,764,128,914,293,21,14,246,853,603,537,507,656,22,843,502,290,331,160,996,986,70,706,628,235,647,631,421,420,919,888,226,35,368,492,328,741,506,926,947,461,463,806,118,485,2,972,127,685,133,475,672,555,181,652,790,181,635,211,953,555,451,179,942,820,24,271,913,530,197,212,992,13,19,462,850,373,434,330,58,919,805,82,474,339,734,264,872,370,475,825,277,927,4,219,99,380,842,364,911,392,577,255,405,948,69,255,321,855,585,731,775,743,814,601,434,548,866,306,270,693,131,547,620,487,119,71,868,961,436,131,705,365,738,110,313,159,366,986,14,303,717,141,398,883,743,832,432,961,138,54,654,621,954,627,109,73,698,329,386,486,812,92,851,550,554,516,709,920,502,75,576,572,217,974,455,312,807,239,273,297,646,927,919,600,906,380,25,957,61,763,443,873,207,647,423,762,163,484,34,18,559,610,942,128,937,749,440,96,341,65,393,987,993,664,587,251,396,964,208,457,727,652,330,935,651,105,697,166,589,731,536,501,694,478,981,631,580,422,727,921,839,472,908,832,137,847,84,533,811,644,991,538,296,673,825,299,779,522,466,720,606,2,221,300,833,203,283,413,977,362,334,816,834,594,1,323,441,437,209,604,81,552,142,730,225,968,29,4,842,847,77,448,850,298,100,35,853,735,448,182,97,134,351,284,728,704,959,521,493,168,125,926,720,619,8,946,939,390,302,782,237,731,582,439,30,35,474,235,770,922,770,220,408,473,856,136,529,815,9,374,984,486,300,704,106,661,2,45,51,657,179,640,388,114,80,770,149,554,358,271,829,480,843,237,953,699,726,834,515,735,208,851,222,508,555,680,521,910,77,572,919,609,213,307,723,293,430,872,199,788,495,28,268,339,618,573,38,344,407,905,431,615,756,5,475,664,685,997,574,115,921,493,724,134,152,447,779,582,671,331,370,518,359,990,857,329,563,248,673,322,153,105,289,262,462,765,926,500,114,852,615,35,345,691,522,849,490,653,432,513,984,154,31,696,145,889,25,60,489,51,383,642,508,672,904,970,789,182,470,255,34,437,643,731,128,165,581,618,170,13,483,155,519,515,203,664,756,228,77,245,631,812,239,139,836,496,110,978,678,932,233,713,722,876,796,850,41,377,821,564,742,304,719,262,171,274,278,927,502,355,524,486,519,764,625,356,612,87,334,642,20,567,707,742,444,504,944,837,881,117,401,624,774,472,238,945,746,516,225,601,224,749,87,743,513,64,99,477,152,785,120,524,705,827,266,501,331,562,338,213,32,92,189,806,916,427,103,15,295,328,968,519,78,407,263,943,471,714,421,623,852,541,147,557,368,765,58,700,680,748,265,712,192,454,870,109,233,973,476,528,302,444,48,380,851,663,323,674,729,744,650,581,637,149,490,6,267,548,58,947,297,323,11,841,129,881,950,362,206,778,890,508,222,290,240,425,305,916,100,387,660,102,320,298,251,811,656,518,711,714,817,360,37,828,202,518,61,504,880,268,283,122,128,857,765,369,283,422,637,735,809,297,189,482,947,440,645,955,959,356,669,776,69,58,957,271,576,18,127,808,638,410,931,119,268,48,840,903,470,477,990,632,126,179,114,426,971,759,381,930,467,403,59,536,813,16,159,742,386,287,550,377,49,833,496,317,881,688,572,352,165,914,336,291,445,450,69,417,561,451,699,380,206,110,917,19,478,428,761,217,715,664,594,765,497,442,434,379,130,359,83,647,625,419,290,423,221,360,192,134,163,891,514,369,2,783,740,832,564,854,49,279,518,643,396,15,437,183,746,919,894,829,566,519,600,857,294,173,217,486,307,380,378,174,101,732,309,841,916,873,695,966,505,213,961,253,229,399,788,975,318,682,157,885,554,109,742,848,283,311,335,942,691,65,468,792,149,778,985,65,3,681,31,860,894,345,466,475,744,254,803,62,289,312,299,843,421,393,43,56,704,730,999,747,147,467,891,648,597,877,714,953,558,97,813,804,442,279,632,538,534,787,953,823,99,252,18,872,998,413,929,702,496,280,802,643,747,693,292,697,570,358,650,128,807,463,285,602,95,917,140,629,704,445,804,155,50,174,27,48,939,308,750,435,588,904,431,688,598,723,385,168,433,35,649,592,850,934,194,945,203,687,926,907,132,730,414,182,256,793,582,196,102,685,983,690,589,414,378,187,489,115,356,922,150,357,867,1,291,61,946,494,100,873,753,585,955,167,119,564,312,702,760,414,387,95,457,976,510,187,516,999,303,224,274,453,581,141,806,872,554,105,718,655,978,471,592,285,990,711,849,302,765,961,69,504,57,526,833,567,713,349,918,368,573,192,174,154,333,980,378,888,85,96,895,415,919,487,701,261,550,902,915,668,216,984,172,273,862,5,192,928,706,462,296,279,655,470,785,340,451,163,580,888,611,827,304,882,314,357,143,217,611,59,237,827,395,409,100,258,767,644,186,473,107,482,105,114,305,890,806,756,406,387,996,17,214,300,900,881,9,43,450,621,454,687,448,850,96,901,460,215,897,646,689,356,480,794,470,785,36,277,893,442,16,890,460,230,542,712,111,904,107,913,525,562,600,973,764,49,226,224,264,124,222,953,480,54,99,303,192,136,580,437,578,948,679,390,178,222,102,642,478,210,555,3,772,156,328,888,557,907,464,821,31,38,775,863,444,226,166,636,362,98,74,293,46,753,683,577,327,786,219,157,996,126,160,120,634,841,360,191,748,824,13,131,862,140,994,306,718,513,295,81,611,721,726,10,826,409,587,506,547,158,663,543,284,824,15,919,17,375,462,765,199,475,896,413,967,242,72,686,755,367,119,367,440,845,729,266,606,316,772,154,474,436,697,110,612,65,29,629,440,844,746,992,319,994,405,639,236,829,677,992,548,796,711,988,993,440,255,599,108,27,105,934,815,155,44,427,220,74,408,660,918,154,652,589,148,410,580,737,239,257,729,788,405,792,776,750,584,383,702,692,763,807,626,578,962,670,358,182,96,766,195,366,273,199,308,421,609,240,158,201,850,239,341,255,31,469,6,967,853,60,659,616,867,637,546,182,660,904,364,108,671,911,475,944,111,135,717,72,375,228,273,225,819,614,833,203,84,191,170,289,251,830,905,470,819,803,652,479,708,369,588,731,280,415,27,743,902,744,816,277,324,441,855,144,56,40,347,492,583,869,781,834,51,38,656,871,841,309,350,549,678,290,632,310,705,659,406,607,756,222,237,80,15,444,576,423,484,275,915,419,145,48,253,196,86,909,67,280,570,770,181,600,60,814,263,118,473,669,725,229,243,314,662,258,758,238,682,594,514,597,13,659,998,618,207,436,880,275,716,802,45,250,403,457,64,666,575,889,335,301,471,930,967,133,188,726,723,870,672,237,820,38,248,818,656,456,606,536,83,323,339,128,925,94,937,989,112,513,230,799,166,701,729,133,186,917,211,910,788,884,499,960,922,748,130,930,556,736,819,639,411,510,119,336,604,56,677,716,569,908,515,87,961,244,221,500,513,784,410,653,20,909,613,294,9,743,225,565,480,44,204,891,906,323,580,510,732,257,578,653,517,445,741,479,41,314,979,554,98,741,208,471,2,173,765,12,917,990,577,749,386,134,992,292,809,572,154,541,830,84,195,347,529,288,178,570,602,509,477,52,250,685,523,253,858,641,265,127,631,194,876,370,680,869,14,490,441,169,383,623,253,930,971,135,218,149,705,820,659,534,225,261,219,100,514,430,741,131,909,373,678,138,95,358,7,109,200,800,630,936,424,236,866,747,371,85,248,428,257,259,963,482,521,534,583,387,316,324,871,226,49,549,364,496,259,723,958,812,875,588,748,651,176,614,398,547,51,999,328,309,258,291,143,131,825,726,871,494,403,94,72,804,995,436,301,254,511,611,418,738,199,518,390,376,133,140,275,184,139,603,845,750,246,989,233,424,67,456,918,470,550,990,627,545,778,280,152,641,891,570,379,90,89,121,818,574,262,446,110,753,401,956,855,648,945,441,424,12,249,694,835,800,684,462,697,814,742,849,807,633,772,538,75,213,660,246,787,274,44,249,379,445,205,587,445,502,380,869,867,629,563,54,429,599,868,479,765,610,328,572,595,452,463,22,665,123,620,804,749,664,54,480,110,611,67,907,466,447,129,685,77,692,739,858,644,607,337,761,569,18,686,516,470,149,538,136,624,159,292,373,175,698,853,285,310,273,545,128,720,674,165,149,718,904,8,714,863,345,476,784,715,162,300,186,311,190,674,287,701,966,660,877,665,865,514,327,138,59,807,211,733,972,360,804,876,720,518,91,418,994,875,133,508,175,319,819,717,993,458,419,312,470,296,977,336,810,656,826,870,463,389,955,435,750,759,311,470,630,754,888,624,629,374,133,156,693,304,873,39,763,292,351,233,940,680,921,751,336,100,973,799,489,280,234,239,392,545,62,22,299,302,998,280,676,483,436,722,788,309,761,903,954,464,488,894,144,410,997,480,510,970,279,351,603,513,591,995,410,5,369,61,659,367,341,688,851,129,410,991,438,523,894,744,987,382,639,131,144,988,611,6,311,242,358,914,755,301,261,517,306,630,578,317,349,919,5,552,48,415,543,838,290,789,935,277,524,926,760,668,914,371,675,225,965,33,491,72,686,752,589,992,734,167,661,436,438,667,988,838,434,884,29,725,673,964,354,197,242,115,218,156,838,893,734,804,278,225,876,964,330,466,308,416,985,969,852,776,988,841,614,775,725,995,500,750,311,854,948,553,969,166,62,808,411,796,964,41,373,840,357,703,658,17,120,996,338,324,772,327,165,738,102,242,86,954,993,397,160,293,303,130,459,365,290,222,513,606,615,886,446,972,942,457,989,414,453,327,738,577,6,904,315,460,498,401,414,491,151,575,784,454,57,595,819,699,169,332,305,784,570,103,108,512,560,449,926,365,777,665,942,135,921,610,596,419,11,362,911,514,289,47,968,698,643,787,397,164,471,54,949,42,158,57,906,70,507,833,788,636,850,730,123,123,692,71,542,56,434,805,570,75,853,539,774,848,678,171,12,150,578,313,544,736,723,802,158,230,987,946,218,837,29,693,960,721,765,855,777,199,660,348,274,865,239,400,713,917,924,78,419,502,391,315,590,114,118,748,696,105,47,266,295,428,960,255,149,725,110,279,924,123,979,550,988,218,951,702,135,875,780,907,729,523,222,319,638,340,419,686,798,466,953,93,894,913,700,396,638,163,675,914,286,654,816,274,224,119,328,359,994,460,618,75,984,841,394,974,533,166,660,331,984,613,776,879,526,477,627,516,992,654,430,278,660,599,904,884,718,233,595,65,45,214,140,29,407,887,3,940,53,16,624,37,629,752,268,508,581,895,376,573,901,807,851,561,406,756,445,124,341,393,541,386,607,682,768,14,569,123,306,622,139,282,11,121,35,280,981,616,527,357,190,429,164,393,342,922,149,788,399,842,181,940,229,140,974,997,506,543,120,812,517,612,95,881,733,130,161,714,746,40,71,288,469,588,682,164,862,183,952,613,26,485,906,607,977,880,604,483,776,76,295,645,40,742,526,125,872,39,839,971,80,263,611,901,203,293,65,417,829,369,383,855,206,289,462,183,521,418,18,649,846,314,295,887,408,173,12,633,213,204,604,645,819,567,898,374,213,316,143,42,685,526,897,244,815,711,427,689,481,446,338,327,112,633,566,520,159,931,153,724,487,109,721,306,677,619,32,242,935,175,284,973,54,181,217,869,244,996,910,725,442,249,52,906,234,971,779,393,902,932,469,389,394,190,47,423,810,431,665,97,958,949,70,12,482,639,234,726,636,144,451,430,393,855,337,628,826,116,373,80,400,843,469,794,33,868,569,195,299,234,293,258,183,715,622,17,355,856,743,991,1,546,421,394,402,110,374,228,226,748,309,979,943,130,773,976,351,695,524,2,929,817,612,465,884,235,482,239,91,226,582,92,772,4,839,526,466,213,107,45,313,768,24,256,250,149,585,601,844,109,604,774,278,216,239,162,803,73,402,895,299,984,339,424,340,178,302,159,744,409,204,57,177,228,666,428,729,251,381,574,360,985,700,990,554,291,152,357,364,906,604,16,243,944,792,583,474,94,94,570,504,298,980,33,526,646,813,608,249,195,182,961,532,882,951,438,525,103,796,889,10,752,905,253,696,49,188,523,144,635,93,0,933,425,385,812,71,551,420,320,746,602,281,630,836,584,69,361,688,217,602,50,969,860,655,18,909,195,541,405,830,986,757,764,412,143,928,835,694,348,508,792,302,141,422,490,726,491,851,766,708,805,816,30,665,823,48,927,370,941,332,201,279,90,317,43,585,245,879,279,945,387,71,247,880,845,737,606,689,940,372,749,97,540,779,115,363,179,42,86,120,374,287,400,816,956,443,401,553,674,32,498,413,455,97,294,301,186,900,990,478,625,91,575,165,871,690,881,50,732,967,523,459,606,923,627,914,718,29,467,393,413,317,158,869,766,452 };
	vector<string> numbers(arr, arr + sizeof(arr) / sizeof(string));   
	HasAllValidBinary havb("011101100101110101101000011111101011111101110100111100010000010110010010011100110001110010101101011010010001101111000111110000001010100101111001111010110001111011001110100010001111000111010001111100101011100001001011101100010101010110001011110101001101001001111101000100011101110100100100101101110000000110001011100100111111001000100100010011001000101101100010010010001111010111010011110111110001010100000110000111010110001100100110111000111010111000010100100100101011001111010110010101110101000011011101000110001001100111100011000100110010101100001111000100101001111001100001010100100100110100101100111000110010110101010110010110001111010110101111011011100111001010101001011000101101110100001110011110001011000011100011111001110011111101110001110010000111010011110001011010100101110010110110100011111011110010100011111000000001011100110000010101110110111",7);
	//LongestValidParentheses cwmw(")(()(()(((())(((((()()))((((()()(()()())())())()))()()()())(())()()(((()))))()((()))(((())()((()()())((())))(())))())((()())()()((()((())))))((()(((((()((()))(()()(())))((()))()))())");  //"()(()",   ()()  )()())       
	//nums1 = [1, 3], nums2 = [2]      
	//vector<vector<int>> vec;     "aab","c*a*b" 
	//vector<int> vec1;vector<int> vec2;vector<int> vec3;vector<int> vec4;vector<int> vec5;
	//vec1.push_back(1);vec1.push_back(3);//vec1.push_back(1);
	//vec2.push_back(2); vec2.push_back(4); 
	//FindMedianSortedArrays(vec1,vec2);
	// vec2.push_back(3); //vec2.push_back(4); 
	/*vec3.push_back(1); vec3.push_back(4); vec3.push_back(3);     
	vec4.push_back(4); vec4.push_back(3); vec4.push_back(2); 
	vec5.push_back(1); vec5.push_back(3); vec5.push_back(10);  
	vec.push_back(vec1); vec.push_back(vec2); vec.push_back(vec3); vec.push_back(vec4); vec.push_back(vec5);  */
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


