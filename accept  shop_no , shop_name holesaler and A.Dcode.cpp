// accept  shop_no , shop_name  and A.Dcode

using namespace std;
#include<iostream>

class shop
{
	public:
		
		int shop_no;
		char shop_name[50];
		int  A_D_code;
		void accept()
		
		{
			cout<<"enter the shop_no shop_name A_D_code:";
			cin>>shop_no>>shop_name>>A_D_code;
			
		}
		void disp()
		{
			cout<<"shop_no="<<shop_no<<endl;
			cout<<"shop_name="<<shop_name<<endl;
			cout<<"A_D_code="<<A_D_code<<endl;
			
		}
};


int main()
{
	
	shop ob;
	ob. accept();
	ob. disp();
}
