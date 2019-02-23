#include <iostream>
#include <vector>
#include <cmath>
#include <string> 
#include <sstream>

using namespace std;

int main(){
int done=0;
unsigned long long int i=20;
while (done==0 ){
	//cout<<i<<endl;
	if (i%20 ||  i%19 || i%18 || i%17 ||  i%16 || i%15 || i%14 || i%13 || i% 12 || i%11 )
// if (i%11 ||  i%12 || i%13 ||  i%14 || i%15 || i%16 || i%17 || i%18 ||  i%19 ||  i%20  )
      i=i+20;
 
 else {cout<<"entered else"<<done<<endl;
     	cout<<i;
     	done=1;
     }
 
}

}