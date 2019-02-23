#include <iostream>
#include <vector>
#include <cmath>

using namespace std;



int isprime(int n)
{

	int isPrime=1;
    for(unsigned long long int i = 3; i <= (unsigned long long int)(sqrt(n)); i=i+2)
  {
      if(n % i == 0)
      {
          isPrime = 0;
          break;
      }
  }
	return isPrime;
}


int main(){

unsigned long long int num=600851475143; //13195 ;
unsigned long long int factor=1;
if (isprime(num))
    factor=num;
else
  {
    for (unsigned long long int i=3;i<=(unsigned long long int)(sqrt(num));i++)
     {

      if (num%i==0)
      	{   // cout<<"divisor:"<<i<<endl;
      	if(isprime(i))
      		if (i>factor)
      			{factor=i;
                   //cout<<"prime factor "<<factor<<endl;
               }
      }

    }
  }
  cout<<factor<<endl;
  return 0;
}