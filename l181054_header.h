#include <iostream>
using namespace std;
class Date
{
	int Day;
	int Month;
	int Year;
public:
	Date(int,int,int);//parametrized constructor that sets the value of day,month and year as passed
	Date();//default constructor that sets the value to January 1,2000
	friend ostream& operator<<(ostream&,const Date&);//this friend function is insertion and acts as printing
	bool operator==(const Date& d1);//this shows if two dates are completely equal
	friend istream& operator>>(istream&, Date&);//this is extraction operation that functions similar to taking input
	Date operator+( int a)const;//this adds passed integer to a date
	Date operator=( Date&d);//this equals the modified date to the original one
	Date operator--();//this is prefix decrement
	Date operator--(int u);//this is postfix decrement
	int &operator[](int);//this overloads the subscript operator
	//~Date();
};
