// SearchingAlgorithms.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int BinarySearch(const int array[], int size, int target);
int mid;
int main()
{
	//trivial example
	int a[5] = { 3,6,7,8,19 };
	if (BinarySearch(a, 5, 8) > 0)
		cout << "element found at " << mid;


    return 0;
}

int BinarySearch(const int array[], int size, int target) {

	int l = 0, r = size - 1, mid ;
	
	while (l<=r) {
		mid = (r + l) / 2;

		if (array[mid] < target)
			l = mid + 1;
		else if (array[mid] > target)
			r = mid - 1;
		else
			return mid;
		}
	return -1;
	
	int find(const tint array[], int size, int target) {
		for(int i = 0; i<size; i++)
			if(arra[i] == target)
			return i;
			else return -1
	}


	Void bubbleSort(int a[], int size)
	{
		For(int i = <size - 1; i > 0; i--)
			For(int j = 0; j < i; j++)
				if(a[j]>a[j + 1])
					Swap(a[j], a[j + 1])
	}

	void SelectionSort(int a[], int size)
	{
		int start, idx, MinIdx;
		for (start = 0; start<size - 1; start++)
		{
			MinIdx = start;
			For(idx = start + 1; idx < size; idx++)
			{
				If(a[idx
			} < a[MinIdx]))
			MinIdx = idx;
		}
		Swap(a[start], a[MinIdx]);
	}

}


