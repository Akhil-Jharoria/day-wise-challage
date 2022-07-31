#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {

 int T;
  cin>>T;
  
  while(T--)
  {
      int N;
      cin>>N;
      
      int sum=0;
     int array[N];
      
      for(int i=0;i<N;i++)
      {
          cin>>array[i];
          sum=sum+array[i];
      }
    
    
    if(sum%2==0)
     cout<<"NO"<<endl;
    else
     cout<<"YES"<<endl;
  }
	return 0;
}
