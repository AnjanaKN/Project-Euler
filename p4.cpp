#include <iostream>
#include <vector>
#include <cmath>
#include <string> 
#include <sstream>
using namespace std;

int isfivedigit(unsigned long int prod)
 {

 	if (prod>9999 && prod <100000)
 		{  // cout<<"is five digit"<<endl;
  		return 1;
 	}
    else return 0;
}


int isPal (int a,int b,int c,int d,int e,int f)
{
    if (f>-1 && a==f && b==e && c==d)
   		return 1;
   
    if(f<0 && a==e && b==d)
    	return 1;
        
    else
		return 0;
}
unsigned long int val;
int a ,b,c,d,e,f;
unsigned long int prod;
unsigned long int store=1;
int main(){

   for(int i=999;i>99;i--)
	{
		
		for (int j=i;j>99;j--)
			{  

			   prod= i*j;
			   val=prod;
			   //cout<<"i: "<<i<<"j: "<<j<<"prod :"<<val<<endl;
			   f=-1;
			   a=prod%10;
	           prod=(int)(prod/10);
	           b=prod%10;
	           prod=(int)(prod/10);
	           c=prod%10;
	           prod=(int)(prod/10);
	           d=prod%10;
	           prod=(int)(prod/10);
	           e=prod%10;

	           //if (i==101&&j==101)
	           //	{cout<<a<<b<<c<<d<<e<<f<<"----------"<<isPal(a,b,c,d,e,f)<<endl;}
	           if(isfivedigit(val)==0)
	         	{  // cout<<"five digit------"<<endl;
	           		prod=(unsigned long int)(prod/10);
	           		f=prod%10;
		        }
		    if(isPal(a,b,c,d,e,f))
		    	if(val>store)
                  { store=val;
               	    continue;
                   }
		 }
		}
	   cout<<store<<endl;
}