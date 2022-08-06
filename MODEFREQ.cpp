#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
   int T;
   cin>>T;
   
    while(T--)
    {
     int n;
     cin>>n;
     int a[n];
     map<int,int>mp;
     map<int,int>mode;
     
     for(int i=0;i<n;i++)
      {
         cin>>a[i];
        mp[a[i]]++;
      }

     for(auto it : mp)
     {
      mode[it.second]++;
      }

    int ans=0,maxi=INT_MIN;
    for(auto it : mode)
    {
    if(it.second>maxi)
    {
      maxi=it.second;
      ans=it.first;
    }
  }

 cout<<ans<<endl;
}
return 0;
}
