//create a class college containg the data member  as a collge_id college_name establishment_year write a c++ prgram  with folowing members function

//  to accept n college deatails 
// to display collge deatail of a specified unversity
//to display collge deatails according to a specified establishment year (use array of object & function overloading)



using namespace std;
#include<iostream>
#include<string.h>

   class college
  {
   	 
   	 public:
   	 
   	 int cid, year;
   	 
   	 char cname[50], univ[50];
   	 
   	 
   	  void accept()
   	       {
	
   	  
   	          cout<<" enter the college id   college name  college unvercity   college year:";
   	          cin>>cid>>cname>>univ>>year;   	
            }
   
   
   
            void search (college ob[100],char un[50],int n)
       {
   	
   	 for (int i=0;i<n;i++)
   	 
        	{
	
   
        if(strcmp (ob[i].univ,un)==0)
   
  	       {
	
	    	cout<<"\n college id="<<ob[i].cid;
		    cout<<"\n college name="<<ob[i].cname;
		    cout<<"\n college year="<<ob[i].year;
    	    }
	      
    	}
    	
      }
    
     
     void search(college ob[100],int y, int n)
     
      { 
    	
    	for(int i=0;i<n;i++)
    	
    	{
    		
    		if (ob[i].year==y)
    		
    		{
    	      cout <<"\n college id="<<ob[i].cid;
    	      cout<<"\n college name="<<ob[i].cname;
    	      cout<<"\n college uniericty="<<ob[i].univ;
	    	}
		}
	  }
   };
	
	
	 int main()
	 {
	  college ob[100],obj;
	  
	  int n,i,y;
	  
	  char un[20];
	  
	   cout <<"enter the limit:";
	   cin>>n;
	   
	   for(i=0;i<n;i++)	
	 	
	 	 {
	 	 	
	 		ob[i].accept();
	 		
		 }
		 
		 cout<<"enter univercity name to search:";
		 cin>>un;
		 
		 obj.search (ob,un,n);
		 
		 cout<<"enter year to search:";
		 cin>>y;
		 
		 obj.search(ob,y,n);
	 }

