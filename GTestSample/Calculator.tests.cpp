#include<gtest/gtest.h>
#include"Calculator.h"
#include<iostream>

TEST(Addition,PositiveNos)
{
	Calculator* cal=new Calculator(10,15);
	ASSERT_EQ(25,cal->addition());
}
TEST(Substraction,PositiveNos)
{
	Calculator* cal= new Calculator(10,15);
	ASSERT_EQ(-9,cal->substraction());
}


int main(int argc,char **argv)
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
	
}
