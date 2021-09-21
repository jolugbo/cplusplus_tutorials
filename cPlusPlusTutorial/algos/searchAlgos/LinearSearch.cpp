#include <iostream>
using namespace std;
class LinearSearch {
	public:
	LinearSearch() {
		int arrLength;
		cout << "input length " << endl;
		cin >> arrLength;
		cout << "input " << arrLength<<" items "<< endl;
		int* arr;
		arr = new int[arrLength];
		for (int i = 0; i < arrLength; i++)
		{
			cin >> arr[i];
		}
		cout << "input search clause"<< endl;
		int searchClause;
		cin >> searchClause;
		searchAlgo(arr, arrLength, searchClause);
	}
	void searchAlgo(int arr[], int length, int clause) {
		for (int i = 0; i < length; i++)
		{
			if (arr[i] == clause)
			{
				cout << clause << " found at position " << i << endl;
				break;
			}
		}
	}
};