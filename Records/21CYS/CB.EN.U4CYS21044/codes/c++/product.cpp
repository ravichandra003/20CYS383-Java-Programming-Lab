#include<iostream>
using namespace std;

//BASE CLASS
class base {
public:
int x;

};
//DERIVED CLASS FROM BASE
class derive1: public base 
{
public:
int y;
};
//DERIVED CLASS FROM DERIVE1
class derive2 : private derive1
{
private:
int z;
public:
void indata()
{
	cout<<"enter the value of x:";
	cin >> x;
    cout<<"enter the value of y:";
    cin >> y;
	cout<<"enter the value of z:";
    cin >> z;
}
void product()
{
cout<<"Product= " << x*y*z;
}
};
int main()
{
derive2 a;
a.indata();
a.product();
return 0;frro
}

