#include<iostream.h>
#include<conio.h>
class temp
{
private:
int x1,x2;

public:
void get()
{
cout<<"x1";
cin>>x1;
cout<<"x2";
cin>>x2;
}
int max(temp t)
{
if(t.x1>t.x2)
{
cout<<"maximum number is:"<<x1<<endl;
}
else
{
cout<<"maximum number is:"<<x2<<endl;
}
return(x1,x2);
}
};
int main()
{
temp t;
clrscr();
t.get();
t.max(t);
getch();
return 0;
}


