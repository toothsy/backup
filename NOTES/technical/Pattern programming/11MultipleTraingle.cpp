#include <iostream>

using namespace std;

int main(){
int n =5;
for(int i = 1 ;i<=n;i++){



	for( int j=1 ; j<=n-i ; j++ ){		cout<<"\t";	}//for printing spacess
	for(int j =1;j<=i;j++){	cout<<j<<"\t";		}// for printing numbers asc
	for(int j =i-1;j>=1;j--){	cout<<j<<"\t";		}// for printing numbers dsc
	cout<<endl; // new line character
}
return 0; 
}