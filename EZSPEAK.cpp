#include <iostream>
#include<string>
using namespace std;


bool isvowel(char ch)
{
    if(ch=='a')
      return true;
    else if(ch=='e')
      return true;
    else if(ch=='i')
      return true;
    else if(ch=='o')
      return true;
    else if(ch=='u')
      return true;
     else 
      return false;
     
}

int main() {
	
	int T;
	cin>>T;
	
	while(T--)
	{
	    int N;
	    cin>>N;
	    
	   string str;
	    cin>>str;
	    
	   int j= str.length()-1;
	   int countofconsonant=0;
	   int i;
	   
	   for(i=0;i<N;i++)
	   {
	     if(!isvowel(str[i]))
	        countofconsonant++;
	    else
	        countofconsonant=0;
	        
	      if(countofconsonant==4)
	         break;
	   }
	   
	   if(i>=N)
	   cout<<"YES"<<endl;
	  else
	   cout<<"NO"<<endl;
	    
	}
	return 0;
}
