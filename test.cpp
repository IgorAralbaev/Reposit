#include "pch.h"
#include "C:\Проги\mathfortest\mathFunc.cpp"

TEST(TestCaseName, TestInt) {
  ASSERT_EQ(120, factorial(5));
}


TEST(TestCaseName, TestFloat) {
	ASSERT_FLOAT_EQ(2.5, divAtoB(5.0, 2.0));
}

TEST(TestCaseName, TestBool) {
	ASSERT_EQ(1, isPositiv(5));
}

//#include "iostream"

TEST(TestCaseName, TestString) {
	std::string str = "12345";
	std::string res = "54321";
	ASSERT_TRUE(res == reverseStr(str));
}