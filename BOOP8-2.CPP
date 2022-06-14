#include<iostream.h>
#include<conio.h>
class exa
{
public:
int a;
exa add(exa Ea,eax Eb)
{
exa Ec;
Ec.a=a+Eb.a;
return Ec;
}
};

int main()
{
exa E1,E2,E3;
E1.a=40;
E2.a=50;
E3.a=0;
cout<<"initial values\n";
cout<<"value of object:"<<E1.a<<"\nobject2:"<<E2.a<<"\nobject3:"<<endl;
E3=E3.add(E1,E2);
cout<<"new value\n";
cout<<"value of object:"<<E1.a
	<<"\nobject2:"<<E2.a
	<<"\nobject3:"<<E3.a
	<<endl;
	getch();
	return 0;

	}