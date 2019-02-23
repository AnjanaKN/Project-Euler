#include <iostream>
#include <vector>
#include <cmath>
#include <string> 
#include <sstream>
#include <cstring>

using namespace std;

int isprime(unsigned long long n)
{
     if (n%2==0)
         return 0; 	
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

   unsigned long long sum=2;
	for(unsigned long long int i=3;i<2000000;i++)
		if(isprime(i))
			sum +=i;

	cout<<"Sum "<<sum<<endl;
}