#include<iostream>
#include<math.h>
#include"Calculator.h"
#include<stdexcept>

Calculator::Calculator(int n1,int n2)	
{
	no1=n1;
	no2=n2;
}

int Calculator::addition()
{
	return no1+no2;
}

int Calculator::substraction()
{
	return no1-no2;
}

float Calculator::division()
{
	if(no2==0)
	throw std::invalid_argument("Devide by zero not allowed");

	return no1/no2;
}

int Calculator::multiplication()
{
	return no1*no2;
}
