#include<stdio.h>
int main(){
	int a=10;
	int *p,**pp;
	p=&a;
	pp=&p;
	printf("\n%d",&a);
	printf("\n%d",p);
	printf("\n%d",&p);
	printf("\n%d",pp);
	printf("\n%d",*p);
	printf("\n%d",*pp);
	printf("\n%d",**pp);
	return 0;
}
