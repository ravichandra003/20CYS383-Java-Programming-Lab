#include<iostream>
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
		 float display();};
	float triangle ::display()
	{
		int p;
		p=area();
		return(p);
			 };
		
			 int main()
			 {
			 	triangle t[2];
			 	int i,a,c,q[2];
			 	for (i=0;i<2;i++)
			 	{
				 cout<<"enter the height:";
				 cin>>a;
				 cout<<"enter the base:";
				 cin>>c;
			 	t[i].read(a,c);
			 	q[i]=t[i].display();
			 	
			 	cout<<"\n";
			 }
			 cout<<"area of first triangle:"<<q[0]<<"\n";
			 cout<<"area of second triangle:"<<q[1]<<"\n";
			 if (q[0]<q[1])
			 {
			 	cout<<"second triangle has larger area";
			
			 }
			 if (q[0]>q[1])
			 {
			 	cout<<"first triangle has larger area";
			
			 }
			 
			 	return 0;
			 }
			 
