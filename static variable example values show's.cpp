
// static method example values show's

using  namespace std;
#include<iostream>

class mayu
{
	public:
		void show()
		
		{
			
			static int a;
			a++;
			cout<<"\n values="<<a<<endl;
			
		}
} ob;


          int main()
          {
          	ob. show();
          	ob. show();
          	ob. show();
		  }
