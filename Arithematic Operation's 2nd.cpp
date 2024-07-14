//Accept name rno percentage and display using c++

using namespace std;
#include<iostream>

class  student

{
	public:
		
		int rno;
		char name[20];
		float per;
		void accept()
		
		
		{
			cout<<"Enter the roll no name per:";
			cin>>rno>>name>>per;
		}
		
		void disp()
		{
			cout<<"roll no="<<rno<<endl;
			cout<<"name="<<name<<endl;
			cout<<"percentage="<<per<<endl;
		}
		
};


int main()

{
	
	student ob;
	ob. accept();
	ob.  disp();
}

