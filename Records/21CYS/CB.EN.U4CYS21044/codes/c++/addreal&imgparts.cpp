/*#include<iostream>
using namespace std;
 class triangle 
 {
 	private:
 		int h;
 		int b;
 		
 		float area()
 		{
 			return (0.5*h*b);
		 };
 	
	 public:
	 void read (int h,int b)
	 {
	 	
	 	this->h=h;
	 	this->b=b;
	
		 };
		 void display();};
	void triangle ::display()
	{
		cout<< "the area of triangle:"<<area();
		cout<< "\n";
			 };
		
			 int main()
			 {
			 	triangle t[2];
			 	int i,a,c;
			 	for (i=0;i<2;i++)
			 	{
				 cout<<"enter the height:";
				 cin>>a;
				 cout<<"enter the base:";
				 cin>>c;
			 	t[i].read(a,c);
			 	t[i].display();
			 	cout<<"\n";
			 }
			 	return 0;
			 }
			 */
			 
#include<iostream>
using namespace std;
class complex
{
	private:
		int a;
		int b;
		float sum ();
		public:
		void read (int a, int b);
		void display();
 } ;
 float complex :: sum()
 {
 	return (a+b);
 };
 void complex :: read (int a,int b)
 {
 	this->a=a;
 	this->b=b;
 };
 void complex :: display()
 {
 	cout<<"the sum of the real and img part of a complex number:"<<sum();
 	cout<<"\n";
  } 
 
 int main ()
 {
 	complex c;
 	int x;
 	int y;
 	cout<<"enter the real part:";
 	cin>>x;
 	cout<<"enter the img part:";
 	cin>>y;
 	c.read(x,y);
 	c.display();
 return 0;
 }
