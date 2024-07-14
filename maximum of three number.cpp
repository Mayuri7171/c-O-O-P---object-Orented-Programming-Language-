
// maximum of three number

using namespace std;
#include<iostream>
int main()
{
	int a,b,c;
	
	cout<<"enter the three number:";
	cin>>a>>b>>c;
	
	if(a>b&&a>c)
	cout<<"maximum No="<<a;
	
    else if(b>a&&b>c)
	cout<<"maximum No="<<b;
	
    else if(c>a&&c>b);
	cout<<"maximum No="<<c;
	
}
