#include <iostream>
#include <algorithm>
using namespace std;
class BinarySearchAlgo {
public:
	BinarySearchAlgo() {
		int arrLength;
		cout << "input length " << endl;
		cin >> arrLength;
		cout << "input " << arrLength << " items " << endl;
		int* arr;
		arr = new int[arrLength];
		for (int i = 0; i < arrLength; i++)
		{
			cin >> arr[i];
		}
		sort(arr,arr+arrLength);
		cout << "array sorted" << endl;
		for (int i = 0; i < arrLength; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		cout << "input search clause" << endl;
		int searchClause;
		cin >> searchClause;
		cout << "start binary search" << endl;
		binarySearch(arr,0, arrLength - 1,searchClause);
	}
	int binarySearch(int arr[],int start, int end,int clause) {
		if (start <= end) {
			int mid = (start + end) / 2;
			if (arr[mid] == clause) {
				cout << "item found at position " << mid<<endl;
				return mid;
			}
			else if (arr[mid] <= clause) {
				binarySearch(arr, start, mid -1,clause);
			}
			else if (arr[mid] >= clause) {
				binarySearch(arr, mid + 1, end, clause);
			}
		}
		else {
			cout << "item does not exist in the list";
			return - 1;
		}
	}
};