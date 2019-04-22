// PrimeNumberGeneration.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <vector>
#include <string>
#include <iostream>
bool isPrime(int n)
{
	if (n <= 1)
		return false;
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;
	return true;
}

template<typename T>
void printv(std::vector<T> & v) 
{
	if (v.empty())
	{
		return;
	}
	for (T &i : v) 
	{
		std::cout << i << " "; 
	}	
	std::cout << std::endl;
}

int main()
{
	int num, count;
	std::vector<int> primeNums;

	std::cout << "Enter a number: " << std::endl;
	std::cin >> num;

	
	if (isPrime(num))
	{
		for (int count = 1; count <= num; count++)
		{
			primeNums.insert(primeNums.begin(), count);
		}
	}
	for (int x : primeNums)
	{
		if (isPrime(x))
		{
			std::cout << x << std::endl;
		}
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
