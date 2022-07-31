#include <iostream>
using namespace std;

int main() {

  int T;
  cin>>T;
  
  while(T--)
  {
      int X,Y;
      cin>>X>>Y;
      
      int totalprice=0;
      
      totalprice=X*10+Y*90;
      
      cout<<totalprice<<endl;
  }
	return 0;
}
