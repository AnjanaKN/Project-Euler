/*#include <iostream>

using namespace std;

int main(){

int i=0;
int sum=0;
while(i<999)
{
	i =i+1;
	if(i%3 ==0)
 	sum =sum+i;
 	else if(i%5==0)
 		sum=sum+i;
}
cout<<sum<<endl;
return 0;
}

*/
//USING AP

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

unsigned long long int get_sum(int i,unsigned long int n)
{
    //cout<<"i:"<<i<<endl;
    unsigned long int Tn=0;
    unsigned long int S=0 ;  
    int r;
    r=n%i;
    Tn=n-r;
    n=Tn/i;
    S= S+i*n*(n+1)/2;
    //cout<<S;
    return S;
}
int main() {
    //int i=0;
    unsigned long int S=0;
    
    unsigned long int limit=1000;
        
        //cin>>limit;
        limit=limit-1;
        S=get_sum(3,limit)+get_sum(5,limit)-get_sum(15,limit);
       // cout<<get_sum(3,limit)<<" 3"<<endl;
        cout<<S<<endl;
     
    
    return 0;
}
