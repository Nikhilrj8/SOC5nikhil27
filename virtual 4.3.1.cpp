#include<iostream>
using namespace std;
class Person
{
public:
virtual void speak()
{
cout<<"he speak english"<<endl;
}
};

class Student:public Person
{
public:
void speak()
{
cout<<" he speak hindi"<<endl;
}
};
int main()
{
Person*ptr;
Student std;
ptr=&std;
ptr->speak();
return 0;
}
