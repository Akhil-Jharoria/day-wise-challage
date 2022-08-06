#include <iostream>
using namespace std;

int main() 
{
    int  T;
    cin>>T;
    
    while(T--)
    {
        int N,K;
        cin>>N>>K;
        
        int protein[N];
        for(int i=0;i<N;i++)
        {
            cin>>protein[i];
        }
        
        int remainding_proteins=0;
        
        int i;
        for(i=0;i<N;i++)
        {
            remainding_proteins+=protein[i];
            
            if(remainding_proteins<K)
              break;
            else
            remainding_proteins-=K;
             
        }
        
        
        if(remainding_proteins>=0 && i>=N)
         cout<<"YES"<<endl;
        else
          cout<<"NO"<<" "<<i+1<<endl;
    }

	return 0;
}
