#include <iostream>
using namespace std;

int main() {
   
   int T;
   cin>>T;
   
   while(T--)
   {
       int N,K;
       cin>>N>>K;
       int arr[N];
       for(int i=0;i<N;i++)
       {
           cin>>arr[i];
       }
       
       int countofshot=0;
       for(int i=0;i<N;i++)
       {
           if(arr[i]>K)
           countofshot++;
       }
       cout<<countofshot<<endl;
       
   }
	return 0;
}
