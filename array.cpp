#include<iostream>
using namespace std;
class add
{
public://access specifier
int a,b,c;
void read()
{cout<<"enter two number"<<endl;
cin>>a>>b;
}
void display()
{cout<<"A="<<a<<endl;
cout<<"B="<<b<<endl;
cout<<"sum="<<c<<endl;
}
void sum()
{
c=a+b;
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
