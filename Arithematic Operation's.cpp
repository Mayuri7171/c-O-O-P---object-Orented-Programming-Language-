// Arithematic Operation's

using namespace std;
#include<iostream>

class ArithmeticOperation


{
	public :
	int c;
	void add(int a,int b)
	
	
	{
	   c=a=b;
	   cout<<"\n Addition="<<c;	
	}
	
	void sub(int a ,int b)
	
	
	{
	   c=a-b;
	   cout<<"\n Substraction="<<c;	
	}
	
	
	void multiplication(int a,int b)
	
	  {
	  	c=a*b;
	  	cout<<"\n multiplication="<<c; 	
	  }
	  
	  
	  void Division(int a,int b)
	
	  {
	  	c=a*b;
	  	cout<<"\n Division="<<c; 	
	  }
	
};

int main()

{
	ArithmeticOperation ob;
	ob.add(33,66);
	ob. sub(66,99);
	ob.multiplication(33,66);
	ob.Division(36,69);
}
	
	 

