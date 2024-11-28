#include<stdio.h>
void add(int ,int);
void sub(int ,int);
void multi(int ,int);
void divide(int ,int);
int main(){
	int a,b;
	char c;
	printf("Enter two numbers=");
	scanf("%d %d",&a,&b);
	printf("\nEnter choice=");
	scanf("%c",&c);
	int *p(int ,int);
	switch(c){
		case '+':
			       p=add;
			       break;
		
		case '-':
		        p=sub;
		        break;
		case '*' :
			      p=multi;
			      break;
		case '/':
		          p=divide;
				  break;
		default :
		           printf("Invalid");		  	      
	}
	return 0;
}

void add(int x,int y){
	printf("%d",x+y);
}

void sub(int x,int y){
	printf("%d",x-y);
}
void multi(int x,int y){
	printf("%d",x*y);
}
void divide(int x,int y){
	printf("%d",x/y);
}
