#include <iostream>
using namespace std;

int main() {
	
	int N,A,B;
     cin>>N>>A>>B;
     
     int getrating=0;
     int goodrating=0;
     
     getrating=N-A;
     goodrating=N-(A+B);
     
     
     cout<<getrating<<" "<<goodrating;
	return 0;
}
