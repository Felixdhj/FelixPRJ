#include "FindOdd.h"

int s_a;
int s_b;

CMyAPP theApp;

CMyAPP theApp2;
bool IsOdd(int number) 
{
	s_a = number / 2;
	s_b = number - s_a;

	if (s_a == s_b)
	{
		return false; // Even number
	}
	else
	{
		return true;
	}
}
