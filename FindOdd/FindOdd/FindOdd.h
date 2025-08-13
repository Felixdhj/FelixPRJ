#pragma once

#include <iostream>


bool IsOdd(int number);	

class CMyAPP
{
public:
	CMyAPP() 
	{
		run();
	}
	~CMyAPP() = default;
	void run()
	{
		if (IsOdd(3) == true)
		{
			std::cout << "3 is odd.\n";
		}
		else
		{
			std::cout << "3 is not odd.\n";
		}
	}
};