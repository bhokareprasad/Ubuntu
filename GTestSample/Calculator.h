#ifndef CALCULATOR_H
#define CALCULATOR_H
class Calculator
{
private:
	int no1,no2;
	
public:
	Calculator(int, int);
	int addition();
	int substraction();
	float division();
	int multiplication();
};

#endif
