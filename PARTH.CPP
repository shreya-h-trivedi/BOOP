#include<iostream.h>
#include<conio.h>
//using namespace std;
void main()
{
int m,n;
cout<<"enter value of m and n:";
// calling normaly
int p=min(m,n);
cout<<"normal call"<<endl;
cout<<"min"<<p<<endl;
min(m,n,)=0;
cout<<"call on left side="<<endl;
cout<<"m"<<m<<endl;
cout<<"n"<<n<<endl;
}
//function with call by reference
int & min(int&a,int&b)
{
return(a>b>?a:b);
}