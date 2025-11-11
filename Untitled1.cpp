#include<stdio.h>
int main(){
	int arr[5]={10,45,65,78,41}
 int n = sizeof(arr) / sizeof(arr[0]);

	int max=arr[0];
	for(int i=0;i<=n;i++){
		if(max<arr[i])
		max=arr[i];
	}
	printf("the max value of array id\s %d",max);
	return 0;
	}
