#include<iostream>
using namespace std;
class add
{
public://access specifier
int a,b,D;
void read()
{cout<<"enter two number"<<endl;
cin>>a>>b;
}
void display()
{cout<<"A="<<a<<endl;
cout<<"B="<<b<<endl;
cout<<"sum="<<D<<endl;
}
void sum()
{
D=a+b;
}
};
int main()
{
add x;
x.read();
x.sum();
x.display();

return 0;
}
