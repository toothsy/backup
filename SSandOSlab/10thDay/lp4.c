#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int len,top=-1,i,j;
char str[20],stk[20];
void errfcn();
void stkfcn();
void chk();
void smch();
void main(){
	puts("Note: Do Not give spaces in between the operator in the input\n");
	puts("The given GRAMMAR is \nE->E+T|T\nT->T*F|F\nF->(E)|id\n");
	puts("enter the input srting");
	gets(str);
	len=strlen(str);
	puts("stack\t\tinput\t\taction\n");
	printf("$%s\t\t%s$\n",stk,str);
	for(i=0;i<len;i++){
		if(str[i]=='i' && str[i+1]=='d'){
			str[i]=str[i+1]=' ';
			top=top+1;
			printf("$%sid\t\t%s$\t\tSHIFT->id\n",stk,str);
			stk[top]='F';
			printf("$%s\t\t%s$\t\tREDUCE to F->id\n",stk,str);
			stkfcn();
			smch();
			i=i+1;
			}
			else if(str[i]=='+' || str[i]=='*'){
				top=top+1;
				stk[top]=str[i];
				str[i]=' ';
				if(stk[top]=='+')	printf("$%s\t\t%s$\t\tSHIFT->+\n",stk,str);
				else	printf("$%s\t\t%s$\t\tSHIFT->*\n",stk,str);
				if((stk[0]=='+'|| stk[0]=='*')||((stk[top]=='+'|| stk[top]=='*')&&(stk[top-1]=='+'|| stk[top-1]=='*'))) 
					errfcn();
			}
			else
			errfcn();
		}
		if(stk[top]=='+'||stk[top]=='*')	errfcn();
		chk();
		if(top==0){
			if(stk[top]=='F'){
				stk[top]='T';
				printf("$%s\t\t%s$\t\tREDUCE to T->F\n",stk,str);
			}
			if(stk[top]=='T'){
				stk[top]='E';
				printf("$%s\t\t%s$\t\tREDUCE to E->T\n",stk,str);
			}
		}
		printf("$%s\t\t%s$\t\tSUCCESS\n",stk,str);
		}
		void stkfcn(){
		if((top==0)&&((str[i+2]=='+')||(str[i+2]==' '))){
			stk[top]='T';
			printf("$%s\t\t%s$\t\tREDUCE to T->F\n",stk,str);
			stk[top]='E';
			printf("$%s\t\t%s$\t\tREDUCE to E->T\n",stk,str);
			return;
		}
		else if((top==0)&&(str[i+2]=='*')){
			stk[top]='T';
			printf("$%s\t\t%s$\t\tREDUCE to T->F\n",stk,str);
			return;
		}
		if(stk[top-1]=='+'){
			stk[top]='T';
			printf("$%s\t\t%s$\t\tREDUCE to T->F\n",stk,str);
			chk();
		}
		else if(stk[top-1]=='*')
			chk();
}
void chk(){
	if(stk[top-1]=='*'){
		stk[top-1]=stk[top]=' ';
		top=top-2;
		printf("$%s\t\t%s$\t\tREDUCE to T->T*F\n",stk,str);
		if((str[i+2]=='+')&&(top==0)){
			stk[top]='E';
			printf("$%s\t\t%s$\t\tREDUCE to E->T\n",stk,str);
		}
	}
	else if((stk[top-1]=='+' && str[i+2]=='+')||(stk[top-1]=='+' && str[i+2]!='*')){
		if(top-2==0){
			stk[top-2]='E';
		}
	else{
		stk[0]='E';
		for(j=3;j<=top;j++){
			stk[j]=stk[j-2];
		}
	}
	stk[top-1]=stk[top]=' ';
	top=top-2;
	printf("$%s\t\t%s$\t\tREDUCE to E->E+T\n",stk,str);
}
}
void smch(){
	if(stk[top-1]=='+' && str[i+2]=='+'){
		if(top-2==0){
			stk[top-2]='E';
		}
		else{
			stk[0]='E';
			for(j=3;j<=top;j++){
				stk[j]=stk[j-2];
			}
		}
		stk[top-1]=stk[top]=' ';
		top=top-2;
		printf("$%s\t\t%s$\t\tREDUCE to E->T\n",stk,str); 
	}
}
void errfcn(){
	printf("ERROR:invalid argument\n");
	exit(0);
}
