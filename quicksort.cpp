// quicksort, partition and recursion.

#include <iostream>
using namespace std;
void quicksort(int* arr, int beg, int end);
int partition(int* arr, int p, int r);
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int main()
{
	int c_array[] = {24,23,35,2,12,4,123,4};
	quicksort(c_array, 0, 7);
	for(int i = 0; i < 8; ++i)
		cout << c_array[i] << " ";
	return 0;
}
void quicksort(int* arr, int beg, int end)
{
 	if(beg < end)
	{
		int q = partition(arr, beg, end);
		quicksort(arr, beg, q - 1);
		quicksort(arr, q+1, end);
	}
}
int partition(int* arr, int p, int r)
{
	int i = p - 1;
	int pivot = arr[r];
	for(int j = p; j < r; ++j)
	{
		if(arr[j] <= pivot)
		{
			++i;
			swap(arr[i], arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[r]);
	return (i + 1);
}



