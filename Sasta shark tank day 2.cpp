#include <iostream>
using namespace std;

int main() 
{
  int T;
  cin>>T;
  
  while(T--)
  {
     int A,B,per1=0,per2=0;
     cin>>A>>B;
     
     per1=(A*100)/10;
     
     per2=(B*100)/20;
     
     if(per1>per2)
      cout<<"FIRST"<<endl;
     else if(per1<per2)
      cout<<"SECOND"<<endl;
     else
      cout<<"ANY"<<endl;
     
  }
	return 0;
}
