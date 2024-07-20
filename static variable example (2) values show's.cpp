// static method example (2) values show's

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
}; 


        int main()
        
        
        {
        	
        	mayu ob , ob1, ob2;
        	
        	
        	ob.show();
        	ob. show();
        	ob. show();
		}
