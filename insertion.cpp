#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50},index_value,new_value,i,n;
	printf("\nOriginal Array");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\nSelect one index position from (0 to4)");
	scanf("%d",&index_value);
	printf("\nEnter new value");
	scanf("%d",&new_value);
	a[index_value]=new_value;
	printf("after replaced");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}

