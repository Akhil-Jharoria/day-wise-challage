#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    
    while(T--)
    {
        float N,X,Y,A,B;
        cin>>N>>X>>Y>>A>>B;
          
        float pertrolreq=N/A;
        float dieselreq=N/B;
        float pertrolprice=pertrolreq*X;
        float dieselprice=dieselreq*Y;
        
        if(pertrolprice==dieselprice)
          cout<<"ANY"<<endl;
        else if(pertrolprice<dieselprice)
          cout<<"PETROL"<<endl;
        else
          cout<<"DIESEL"<<endl;
    }
return 0;
}
