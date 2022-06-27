#include<iostream.h>
#include<conio.h>
class base1
{
public:
int b1;
void show1()
{
cout<<"value of base:"<<b1<<endl;
}
};


class base2
{
public:
int b2;
void show2()
{
cout<<"value of base:"<<b2<<endl;
}
};
class derived:public base1,public base2
{
public:
int d;
void show3()
{
cout<<"value of devried class:"<<d<<endl;
}
};
int main()
{
base1 b1;
base2 b2;
derived x;
clrscr();

b1.b1=5;
b1.show1();

b2.b2=10;
b2.show2();
cout<<"enetr value of base class1:";
cin>>x.b1;
cout<<"enetr value of base class2:";
cin>>x.b2;
cout<<"enetr value of derived class:";
cin>>x.d;

x.show1();
x.show2();
x.show3();

getch();
return 0;
}

