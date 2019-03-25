#include"Date.h"
#include<string>
Date::Date(int month,int day,int year)
{
	if(day>=1 && day<=30 && month>=1 && month<=12 && year>=1000 && year<=9999)
	{
		this->Day=day;
		this->Month=month;
		this->Year=year;
	}
	else
	{
		cout<<"Invalid Input!Setting to default"<<endl;
		Day=1;
		Month=1;
		Year=2000;
	}

}
Date::Date()
{
	Day=1;
	Month=1;
	Year=2000;
}
ostream& operator<<(ostream& cout,const Date& d)
{
	static string monthNames[13] = { "", "January", "February","March", "April", "May","June", "July", "August", "September", "October", "November", "December"};
	if(d.Month==1)
	{
		cout<<monthNames[1];
	}
	if(d.Month==2 )
	{
		cout<<monthNames[2];
	}
	if(d.Month==3 )
	{
		cout<<monthNames[3];
	}
	if(d.Month==4 )
	{
		cout<<monthNames[4];
	}
	if(d.Month==5 )
	{
		cout<<monthNames[5];
	}
	if(d.Month==6 )
	{
		cout<<monthNames[6];
	}
	if(d.Month==7)
	{
		cout<<monthNames[7];
	}
	if(d.Month==8 )
	{
		cout<<monthNames[8];
	}
	if(d.Month==9)
	{
		cout<<monthNames[9];
	}
	if(d.Month==10)
	{
		cout<<monthNames[10];
	}
	if(d.Month==11)
	{
		cout<<monthNames[11];
	}
	if(d.Month==12)
	{
		cout<<monthNames[12];
	}
	cout<<" "<<d.Day<<","<<d.Year<<endl;
	return cout;
}
bool Date::operator==(const Date& d1)
{
	if(d1.Day==this->Day && d1.Month==this->Month && d1.Year==this->Year)
	{
		return true;
	}
	else
		return false;
}
istream& operator>>(istream& cin, Date& d1)
{
	int a,b,c;
	cout<<"Enter month"<<endl;
	cin>>a;
	cout<<"Enter day"<<endl;
	cin>>b;
	cout<<"Enter year"<<endl;
	cin>>c;
	d1.Month=a;
	d1.Day=b;
	d1.Year=c;

	return cin;
}
Date Date::operator+(int a)const
{
	Date temp(this->Month,this->Day,this->Year);
	int b=temp.Day;
	b=b+a;
	temp.Day=b;
	return temp;
}
Date Date::operator=( Date&d)
{
	if(d.Day<=30)
	{
		Day=d.Day;
	}
	else
	{
		Day=d.Day-30;
		d.Month++;
		d.Year++;
	}
	if(d.Month<=12)
	{
		Month=d.Month;

	}
	else
	{
		Month=d.Month-12;
	}

	Year=d.Year;
	return d;
}
Date Date::operator--()
{
	this->Day--;
	return *this;
}
Date Date::operator--(int u)
{
	Date temp=*this;
	this->Day--;
	return temp;
}
int &Date:: operator[](int n)
{
	if(n==0)
	{
		return this->Day;
	}
	if(n==1)
	{
		return this->Month;
	}
	if(n==2)

	{
		return this->Year;
	}
	else
	{
		cout<<"0"<<"Idex can't be anything except 0,1 and 2"<<endl;
	}
}