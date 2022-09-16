// RevisionExercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

bool isPanindrome(string s)
{
	if (s.size() < 2)
		return true;
	if (s[0] != s[s.size() - 1])
		return false;
	return isPanindrome(s.substr(1, s.size() - 2));
}

void question1Test()
{
	cout << "============ Question 1 ===================="<<endl;
	string arrs[] = { "racecar", "navan", "test", "teet" };
	for (string &s : arrs)
	{
		cout << s << ":" << (isPanindrome(s) ? "Yes" : "No") << endl;
	}
}

void minMax(int *nums, int size, int &min, int &max, int pos)
{
	if (pos == size)
	{
		return;
	}
	if (pos == 0)
	{
		min = max = nums[0];
	}
	if (min > nums[pos])
	{
		min = nums[pos];
	}
	if (max < nums[pos])
	{
		max = nums[pos];
	}
	minMax(nums, size, min, max, pos + 1);
}

void question2Test()
{
	cout << "============ Question 2 ====================" << endl;
	int min = 0, max = 0;
	int *nums = new int[9]{ 7,9, 1,2,3,5,9,8,7 };
	minMax(nums, 7, min, max, 0);
	cout << "Min:" << min << " - Max: " << max << endl;
}

string reverse(string s)
{
	if (s.size() == 0)
		return "";

	return s[s.size() - 1] + reverse(s.substr(0, s.size() - 1));
}

void question3Test()
{
	cout << "============ Question 3 ====================" << endl;
	cout << "pots&pans" << " in reverse " << reverse("pots&pans") << endl;;
}

int toNumber(string s)
{

	if (s.length() == 1)
	{
		return stoi(s);
	}
	else
	{
		return ((s[0]-'0') * pow(10, s.length() - 1)) + toNumber(s.substr(1, s.length() - 1));
	}
}

void question4test()
{
	cout << "============ Question 4 ====================" << endl;
	cout << toNumber("12345") << endl;
}
int pow(int x)
{
	if (x == 1)
	{
		return 2;
	}
	return 2 * pow(x - 1);
}

void question5test()
{
	cout << "============ Question 5 ====================" << endl;
	for(int i = 1; i <= 10;i++)
		cout << pow(i) << endl;
}

