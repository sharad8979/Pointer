#include<stdio.h>
int main(){
	int arr[5]={10,20,30,40,50},i;
	int n=sizeof(arr)/sizeof(int);
	for(i=0;i<n;i++){
		printf(" %d",*(arr+i));
	}
	
	
	return 0;
}
