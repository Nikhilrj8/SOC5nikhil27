#include<iostream>
using namespace std;
class Calculator
{
private:
int num;
public:
int add(int a, int b)
{
	return a+b;
}
int add(int a, int b, int c)
{
	return a+b+c;
}
};
int main()
{
Calculator c;
cout<<"add of a and b is:"<<c.add(3,8);
cout<<"add of a, b  and c is:"<<c.add(1,2,5);
return 0;
}
