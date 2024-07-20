 
 // accept emp info... 
using namespace std;

#include<iostream>
#include<string.h>

class emp

{
  public:
  
  int eno, sal;
  
  char ename[50];
  
  void accept( int eno1, char ename1[50],int s)
  
  {
  	
  	 eno= eno1;
  	 strcpy(ename, ename1);
  	 sal=s;
  	 
  }
  
  void disp()
  
  {
  	
  	cout<<"\n emp no="<<eno<<endl;
  	cout<<"\n ename="<<ename<<endl;
  	cout<<"\n sal="<<sal<<endl;
  	
  }
  
};

             int main()
             {
             	
             	emp ob;
             	
             	int no ,sal;
             	
             	char name[50];
             	
             	cout<<"\n enter the emp no  ename and salary:";
             	
             	cin>>no>>name>>sal;
             	
             	
             	ob.accept( no , name ,sal );
             	
             	ob.disp();
			 }
