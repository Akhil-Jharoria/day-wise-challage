#include <iostream>
using namespace std;

int main() {
	
  int T;
  cin>>T;
  
  while(T--)
  {
      int X,Y,Z;
      cin>>X>>Y>>Z;
      
      int totalruppess=X*5+Y*10;
      
      int numberofchoclate=totalruppess/Z;
      
      cout<<numberofchoclate<<endl;
  }
	return 0;
}
