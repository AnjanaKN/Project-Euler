#include <iostream>
#include <vector>
#include <cmath>
#include <string> 
#include <sstream>

using namespace std;

int main(){
int n=100;
unsigned long long int a=0;
for (int i=1;i<=n;i++)
     a=a+(i*i);
unsigned long long int b =pow((n+1)*n/2,2); 
cout<<a<<" "<<b<<endl;
cout<<b-a<<endl;

}