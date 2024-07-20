//accept number and display in its digit in c++

using namespace std;
#include<iostream>

class mayu

{
	public:
		
		int n,d;
		
		void accept();
		
		{
		
		 cout<<"enter the number="<<n<<endl;
		
	    }
	   
		{
			d=n%10;
		 cout<<"\ last digit="<<d<<endl;
		}
		
};

int main()
{

 mayu ob;
 ob.accept();
 ob.disp();
}
