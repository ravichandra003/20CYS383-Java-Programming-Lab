#include <iostream>
using namespace std;
int sub(int); 
int sub(int a)
{
	a=a-5;
return a;
}
int main()
{/*
int x,y; 
for(x=1;x<=5;++x)
{ 
for(y=1;y<=x;++y)
{ 
cout<< y; 
} 
cout<<"\n";
}*/

int i;
int a[i];
for(i=0;i<5;i++)
{
    cout<< "enter the value of  a["<<i<<"]:";
    
    cin>>a[i];
    cout<< "\n";
}
int sum;
sum=0;
float y;
for(i=0;i<5;i++)
{
    sum=sum+a[i];
    cout << a[i];
	cout<< "\n";
}
cout <<"the sum of the array is :"<< sum ;
int x;
x=sub(sum);
cout<<"\n";
cout<<"the sum after sub 5 is :";
cout<< x <<"\n" ;
cout<< "the average of sum and x is ";
y=11/2;
cout << y;


return 0;
}
