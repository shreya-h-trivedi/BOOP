#include<iostream.h>
#include<conio.h>
class sam
{
private:
int sum;
public:
sam(int a,int b)
{
sum=a+b;
}
void show()
{
cout<<"SUM="<<sum<<endl;
}
};
int main()
{
int x,y;
cout<<"enter x:";
cin>>x;
cout<<"enter y:";
cin>>y;
sam ob(x,y);
ob.show();
return 0;
}
