#include<stdio.h>
int main(){
	int arr[3]={10,20,30};
	int n=sizeof(arr)/sizeof(int);
	int *p1=arr;
	int *p2=arr+1;
	if(*p1>*p2){
	printf("%d",*p1);	
	}
	else{
       	printf("\n%d",*p2);		
	}

	return 0;
}
