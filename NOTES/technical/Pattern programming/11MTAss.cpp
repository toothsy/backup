#include <iostream>
// ascii value of a is 97
// asci value of A is 65
using namespace std;

void smallabcd(int n){
	for(int i = 1;i<=n;i++){
		for(int j =1;j<i;j++){printf("\t");}
		for(int j = n+1;j-i>=1;j--){int value=0;value=j-i+96;printf("%c\t",value);}
		for(int j = 1;j<=n-i;j++){//use n-i to reduce the iteration in a line by one each iteration,start with 1 ofc
			printf("%c\t",j+97);
		}
		printf("\n");//next line
	}
}
void alternateAbCd(int n){
	for(int i = 1;i<=n;i++){
		for(int j =1;j<i;j++){
			printf("\t");
		}
		for(int j = n+1;j-i>=1;j--){
			int value=0;
			if (i%2==0){
				value=j-i+64;
			}
			else{
				value=j-i+96;
			}
			printf("%c\t",value);
		}
		for(int j = 1;j<=n-i;j++){//use n-i to reduce the iteration in a line by one each iteration,start with 1 ofc
			int value=i%2==0?j+65:j+97;
			printf("%c\t",value);
		}
		printf("\n");//next line
	}
}
void integerPattern(int n){
	for(int i = 1;i<=n;i++){
		for(int j =1;j<i;j++){
			printf("\t");
		}
		for(int j = n+1;j-i>=1;j--){
			int value=0;
			value=j-i;
			printf("%d\t",value);
		}
		for(int j = 1;j<=n-i;j++){//use n-i to reduce the iteration in a line by one each iteration,start with 1 ofc
			printf("%d\t",j);
		}
		printf("\n");//next line
	}
}
void mod3(int n){
	for(int i = 1;i<=n;i++){
		for(int j =1;j<i;j++){
			printf("\t");
		}
		for(int j = n+1;j-i>=1;j--){
			int value=0;
			
			if(i%3==0){value = value=j-i+64;printf("%c\t",value);}
			else if(i%3==1){value = value=j-i+96;printf("%c\t",value);}
			else{value=j-i;printf("%d\t",value);}
		}
		for(int j = 1;j<=n-i;j++){//use n-i to reduce the iteration in a line by one each iteration,start with 1 ofc
			printf("%d\t",j);
		}
		printf("\n");//next line
	}
}
int main(){

	int n= 6;
	// smallabcd(n);
	// alternateAbCd(n);
	// integerPattern	(n);
	mod3	(n);
return 0; 
}
