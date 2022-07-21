#include <iostream>
using namespace std;

int main() {
	char A,B;
	cin>>A>>B;
	
	if(A==B)
	 cout<<A;
	else if(A=='R'|| B=='R')
	cout<<"R";
	else if(A='B' || B=='B')
	  cout<<"B";
	 else
	   cout<<"G";
	return 0;
}
