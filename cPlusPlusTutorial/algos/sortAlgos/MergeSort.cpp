#include <iostream>
using namespace std;
class MergeSort {
public:
	MergeSort() {
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
		sort(arr, 0, arrLength -1);
		cout << "merge output " << endl;
		for (int i = 0; i < arrLength; i++)
		{
			cout << arr[i];
		}
	}
	
	void sort(int arr[], int start, int end) {
		if (start >= end) {
			return;
		}
		int mid = (start + end) / 2;
		int* arr1 = new int[mid];
		int* arr2 = new int[end];

		for (int i = 0; i <= mid; i++)
		{
			arr1[i] = arr[i];
		}
		for (int i = mid + 1; i <= end; i++)
		{
			arr2[i] = arr[i];
		}
		sort(arr1, start, mid);
		sort(arr2, mid + 1, end);
		mergeSort(arr1, arr2, arr, start, end);
	}
	void mergeSort(int arr1[], int arr2[], int arr[], int start, int end)
	{
		int mid = (start + end) / 2;
		int i = start, j = mid + 1, k = start;
		while (i<=mid && j <= end)
		{
			if (arr1[i] < arr2[j])
			{
				arr[k] = arr1[i];
				i++;
				k++;
			}
			else
			{
				arr[k] = arr2[j];
				j++;
				k++;
			}
		}
		while (i <=mid)
		{
			arr[k] = arr1[i];
			i++;
			k++;
		}
		while (j <= end)
		{
			arr[k] = arr2[j];
			k++;
			j++;
		}
	}
};