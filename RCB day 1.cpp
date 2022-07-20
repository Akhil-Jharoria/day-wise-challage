#include <iostream>
using namespace std;

int main() 
{
  int T;
  cin>>T;
  
  while(T--)
  {
      int X,Y,Z;
      cin>>X>>Y>>Z;
      
      int temp=2*Z;
      int temp1=temp+X;
      if(temp1>=Y)
       cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
      
  }
	return 0;
}
