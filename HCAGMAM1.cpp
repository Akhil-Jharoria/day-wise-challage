#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--)
	{
	    int X,Y;
	    cin>>X>>Y;
	    char arr[30];
	    for(int i=0;i<30;i++)
	    {
	        cin>>arr[i];
	    }
	    int totalworkingday=0;
	    int totalmoney=0;
	    int maxstrick=0;
	    int strickcount=0;
	    for(int i=0;i<30;i++)
	    {
	        if(arr[i]=='1')
	          {
	           totalworkingday++;
	           strickcount++;
	          }
	        else
	         {
	             if(strickcount>=maxstrick)
	             {
	              maxstrick=strickcount;
	             }
	            strickcount=0;
	         }
	     }
	     
	     if(strickcount>=maxstrick)
	       maxstrick=strickcount;
	     
	    totalmoney=totalworkingday*X+maxstrick*Y;
	     cout<<totalmoney<<endl;
	}
	
	return 0;
}
