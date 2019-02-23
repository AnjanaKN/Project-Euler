#include <iostream>
#include <vector>

using namespace std;

int main(){



int current=1;
int sum=0;
vector<int> f;
f.push_back(1);

int prev=current;
int index=0;
while(current+prev<4000001)
{
    
	//cout<<"current: "<<	current<<endl;
	//cout<<"prev: "<<prev<<endl;
	current=current+prev;
	f.push_back(current);
	//cout<<"Pushed current :"<<current<<endl;	
    index=index+1;
    prev=f[index-1];
    if (current%2==0)
    	sum=sum+current;
    		//cout<<"sum loop"<<sum<<endl;}
}  
cout<<sum<<endl;
return 0;
}