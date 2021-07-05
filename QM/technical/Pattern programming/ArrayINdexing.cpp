#include <iostream>

using namespace std;

int main(){
	// int a[2][5]={1,2,3,4,5,6,7,8,9,10};
	// cout<<*(*a+5)<<endl;//t11 stuff
	int a[5]={1,2,3,4,5};
	int *p=a;
	cout<<++*p<<"\t"<< ++*p <<endl;

return 0; 
}