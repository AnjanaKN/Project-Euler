#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>


using namespace std;
vector<unsigned long long int> sum_array;

int Primes()
{
   unsigned long long int n=1000000;
    bool prime[n + 1];
    memset(prime, true, n + 1);
    
    
    unsigned long long int sum = 0;
    
    for (unsigned long long int p = 2; p * p <= n; p++) {

        if (prime[p] == true) {
 
            // Update all multiples of p
            for (unsigned long long int i = p * 2; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    
      
     for (unsigned long long int i = 2; i <= n; i++)
     {   if (prime[i])
          sum += i;
        //cout<<"sum: "<<sum<<"i "<<i<<endl;
        sum_array.push_back(sum); 
     }  

    return 0;
}


unsigned long long int sumOfPrimes(unsigned long long int n){
    
    
    return sum_array[n];
}
int main(){
    unsigned long int t;
    cin >> t;
    sum_array.push_back(0);
    sum_array.push_back(0);
    Primes();
    
    for(unsigned long int a0 = 0; a0 < t; a0++){
       unsigned long long int n;
        cin >> n;
        cout<<sumOfPrimes(n)<<endl;
    }
    return 0;
}