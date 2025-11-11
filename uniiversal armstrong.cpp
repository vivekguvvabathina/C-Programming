#include<stdio.h>
#include<math.h>
int main(){
	int n,r=0,sum=0,count=0,temp;
	scanf("%d",&n);
	count=(int)log10(n)+1;
	temp=n;
	while(n>0){
		r=n%10;
		sum=sum+pow(r,count);
		n=n/10;
	}
	if(temp==sum)
	printf("armstrong");
	else
	printf("not an armstrong");
	return 0;
}
