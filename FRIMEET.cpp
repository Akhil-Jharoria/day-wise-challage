#include <iostream>
using namespace std;

int main() {
	
	int T;
	cin>>T;
	
	while(T--)
	{
	    int X1,X2;
	    cin>>X1>>X2;
	    
	    if(X1==X2)
	     cout<<"YES"<<endl;
	     
	     else if(X1<X2)
	      cout<<"NO"<<endl;
	      
	     else if(X1>X2)
	      cout<<"YES"<<endl;
	}
	return 0;
}
