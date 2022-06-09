#include<iostream.h>
#include<conio.h>
//using namepsace std:
int main()
{
int a,b,ans;
cout<<"enter a:";
cin>>a;
cout<<"enter b:";
cin>>b;
clrscr();
ans=a;
a=b;
b=ans;
cout<<"value of a is:"<<a<<endl;
cout<<"value od b is:"<<b<<endl;
getch();
return 0;
}