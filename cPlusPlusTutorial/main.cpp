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
	int arr[] = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
	vector<int> numbers(arr, arr + sizeof(arr) / sizeof(int));
	ContainerWithMostWater cwmw(numbers);    
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


