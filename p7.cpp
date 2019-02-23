#include <iostream>
#include <vector>
#include <cmath>
#include <string> 
#include <sstream>

using namespace std;

int isprime(int n)
{
    if(n%2==0)
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
int i=3;
int index=1;
while (index<10001)
    {
    if(isprime(i))      
    	index=index+1;
        i=i+1;
    }   cout<<index<<endl;
        cout<<i-1;
}