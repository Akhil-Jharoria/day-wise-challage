#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin>>T;

while(T--)
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    int sum=0;
    
    if(a>b)
     sum=sum+a;
    else
      sum=sum+b;
      
     if(c>d)
     sum=sum+c;
    else
      sum=sum+d;
      
      cout<<sum<<endl;
}

	return 0;
}
