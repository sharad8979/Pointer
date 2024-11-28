#include<stdio.h>
int main(){
	int arr[3]={10,20,30};
	int n=sizeof(arr)/sizeof(int);
	int *p=arr;
	printf("%d",*p);
	p=p+(n-1);
	printf("\n%d",*p);
	return 0;
}
