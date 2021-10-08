#include <iostream>
using namespace std;
#pragma once
class QuickSorting {
public:
	QuickSorting(){
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
		sort(arr, 0, arrLength - 1);
		cout << "quick sort output " << endl;
		for (int i = 0; i < arrLength; i++)
		{
			cout << arr[i];
		}
	}
	int partition(int arr[], int start, int end) {
		int pivot = arr[end];
		int pivotPosition = start;
		for (int i = start; i < end; i++)
		{
			if (arr[i] < pivot)
			{
				swap(arr[i],arr[pivotPosition]);
				pivotPosition++;
			}
		}
		swap(arr[pivotPosition],arr[end]);
		return pivotPosition;
	}
	void sort(int arr[], int start, int end) {
		if (start >= end)
		{
			return;
		}
		int pivot = partition( arr,start,end);
		sort(arr, start, pivot - 1);
		sort(arr, pivot + 1, end);
	}
};