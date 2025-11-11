#include<stdio.h>
int main(){
	int n,sum=0;
	int arr[]={2,3,4,5,6};
	n=sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	printf("%d",sum);
	return 0;
}
