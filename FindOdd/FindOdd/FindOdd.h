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
			std::cout << "this is odd.\n";
		}
		else
		{
			std::cout << "this is not odd.\n";
		}
	}
};