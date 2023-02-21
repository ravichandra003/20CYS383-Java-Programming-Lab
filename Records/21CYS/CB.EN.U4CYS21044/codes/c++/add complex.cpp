#include<iostream>
using namespace std;
class complex
{
	private:
		int a;
		int b;
		public:
		void sum(int a,int b);
		void read (int a, int b);
		void display(int a, int b);
 } ;

 
 void complex :: read (int a,int b)
 {
 	this->a=a;
 	this->b=b;
 };
 void complex :: sum (int a,int b)
 {
 	int h;
 	int j;
 	h=this->a+a;
 	j=this->b+b;
 	cout<<"the total of two complex numbers:"<<h<<"+"<<"i"<<j<<endl;
 	
  } 
 
 int main ()
 {
 	complex c;
 	int x[2];
 	int y[2];
 	int i;
 	for (i=0;i<2;i++)
 	{
	 
 	cout<<"enter the real part:";
 	cin>>x[i];
 	cout<<"enter the img part:";
 	cin>>y[i];
 }
 	c.read(x[0],y[0]);
 	c.sum(x[1],y[1]);
 return 0;
 }
