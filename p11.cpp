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
#include <unordered_map>

using namespace std;


int main(){
    vector< vector<int> > data(20,vector<int>(20));
    for(int grid_i = 0;grid_i < 20;grid_i++){
    	for(int grid_j = 0;grid_j < 20;grid_j++){
    		cin >> data[grid_i][grid_j];
    	}
    }
    
    
    
    
    
    
    
    unsigned long long int product,max=0;
       for (int i=0;i<20;i++)
       	   {

       	    for (int j=0;j<20;j++)
       	    	 {
       	    	 // row wise
                if(j<17)
                {
       	    	  product=0;
         		  product=data[i][j+0]*data[i][j+1]*data[i][j+2]*data[i][j+3];
         		    if (product>max)
         		    	max=product;
                   //every column
         		
                product=0;
         			product=data[j][i]*data[j+1][i]*data[j+2][i]*data[j+3][i];
         		    if (product>max)
         		    	max=product;
                
         		    //diagonal 
         		if(i<17)
                {
         		    product=0;
         			product=data[i][j]*data[i+1][j+1]*data[i+2][j+2]*data[i+3][j+3];
         		    if (product>max)
         		    	max=product;

         		    //if (product==1788696)
         		    	//cout <<i<<" "<<j<<endl;
         		    product=0;
         			product=data[i][j+3]*data[i+1][j+2]*data[i+2][j+1]*data[i+3][j];
         		    if (product>max)
         		    	max=product;
                }
                }
				}
       	    }
       	    	  cout<<max;


    
    
    
    return 0;
}




/*#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <fstream>
#include <sstream>


using namespace std;


int main(){

    std::vector<std::vector<int> > data;
    std::ifstream  file("p11.txt");
    
    std::string   line;
    while(std::getline(file, line))
    {
        std::vector<int>   lineData;
        std::stringstream  lineStream(line);

        int value;
        
        while(lineStream >> value)
        {
            //cout<<"value :"<<value<<endl;
            lineData.push_back(value);
        }
        
        data.push_back(lineData);
    }

    //cout<<data.size();
    //cout<<data[0][0]<<" "<<data[1][1]<<" "<<data[2][2]<<"  "<<data[3][3]<<endl;;
    unsigned long long int max=0;
    /*for (int i=0;i<20;i++)
    	{	
    		
          	for (int j=0;j<20-3;j++)
         		{   //every row
         			product=0;
         			product=data[i][j+0]*data[i][j+1]*data[i][j+2]*data[i][j+3];
         		    if (product>max)
         		    	max=product;
         		    //every column
         		    product=0;
         			product=data[j][i]*data[j+1][i]*data[j+2][i]*data[j+3][i];
         		    if (product>max)
         		    	max=product;
         		}
 			/*if(3*i<=16)
            	{   product=0;
            		product=data[3*i][3*i]*data[3*i+1][3*i+1]*data[3*i+2][3*i+2]*data[3*i+3][3*i+3];
         			if (product>max)
         		    	max=product;
         		}
		}*/
unsigned long int product;
       for (int i=0;i<17;i++)
       	   {

       	    for (int j=0;j<17;j++)
       	    	 {
       	    	 // row wise
       	    	  product=0;
         		  product=data[i][j+0]*data[i][j+1]*data[i][j+2]*data[i][j+3];
         		    if (product>max)
         		    	max=product;
         		    //every column
         		    product=0;
         			product=data[j][i]*data[j+1][i]*data[j+2][i]*data[j+3][i];
         		    if (product>max)
         		    	max=product;
         		 
         		    //diagonal 
         		 
         		    product=0;
         			product=data[i][j]*data[i+1][j+1]*data[i+2][j+2]*data[i+3][j+3];
         		    if (product>max)
         		    	max=product;

         		    if (product==1788696)
         		    	cout <<i<<" "<<j<<endl;
         		    product=0;
         			product=data[i][j]+3*data[i+1][j+2]*data[i+2][j+1]*data[i+3][j];
         		    if (product>max)
         		    	max=product;
				}
       	    }
       	    	  cout<<max;

}
*/