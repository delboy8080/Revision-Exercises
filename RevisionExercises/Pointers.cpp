#include <iostream>
#include "Pointers.h"
using namespace std;

int sumArray(int *nums, int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += *nums;
		nums++;
	}
	return total;
}

void pointersQuestion1test()
{
	cout << "============= Pointers Question 1 =============" << endl;
	int *num = new int[5]{1,2,3,4,5};
	cout << "total: " << sumArray(num, 5)<<endl;
}
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void pointersQuestion2test()
{
	cout << "============= Pointers Question 2 =============" << endl;
	int x = 5;
	int y = 10;
	cout << "x: " << x << " - y:" << y << endl;
	swap(x, y);
	cout << "x: " << x << " - y:" << y << endl;

}

void reverse(int *arr, int size)
{
	int *end = arr + (size-1);
	for (int i = 0; i < size / 2; i++)
	{
		cout << "Swap " << *arr << " and " << *end << endl;
		int temp = *arr;
		*arr = *end;
		*end = temp;
		end--;
		arr++;
	}

}
void pointersQuestion3test()
{
	cout << "\n\n============= Pointers Question 3 =============" << endl;
	int *arr = new int[10]{1,2,3,4,5,6,7,8,9,10};
	cout << "Before: ";
	for (int i =0; i <10;i++)
	{
		if (i != 0)
			cout << ",";
		cout << arr[i];
	}
	cout << endl;
	cout << "After: ";
	reverse(arr, 10);
	for (int i = 0; i < 10; i++)
	{
		if (i != 0)
			cout << ",";
		cout << arr[i];
	}
	cout << endl;

}

int countEven(int *arr, int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (*arr % 2 == 0)
			count++;
		arr++;
	}
	return count;
}
void pointersQuestion4test()
{
	int *arr = new int[10]{ 1,2,3,4,5,6,7,8,9,10 };
	cout << "\n\n============= Pointers Question 4 =============" << endl;
	cout << "Count of even: " << countEven(arr, 10);
}
void pointersQuestion5test()
{

}
void pointersQuestion6test()
{

}