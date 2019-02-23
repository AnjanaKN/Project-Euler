#include <iostream>
#include <vector>
#include <cmath>
#include <string> 
#include <sstream>
#include <cstring>

using namespace std;



int istriplet(int a,int b,int c)
{
  if((a*a +b*b) == (c*c))
  	return 1;
  else return 0;

}
int main(){

for(int c=2;c<998;c++)
	for(int b=1;b<c;b++)
		for (int a=1;a<b;a++)
			if (a+b+c ==1000)
				if(istriplet(a,b,c))
					{
						cout<<"a b c :"<<a <<b<<c<<"Sum: "<<a+b+c<<"Product: "<<a*b*c;
						break;
					}


}