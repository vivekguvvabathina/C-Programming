#include<stdio.h>
int main()
{
	char op ;
	double first , second ;
	printf("enter operator (+,-,*,/)");
	scanf ("%c",&op);
	printf(" enter two values ");
	scanf ("%lf %lf",&first,&second);
	
	switch(op)
	{
		case'+':
			printf("%lf + %lf = %lf ",first , second ,first + second);
			break;
			case '-':
				printf ("%lf - %lf = %lf ",first ,second,first-second );
				break;
				
			case '*':
			    printf("%lf * %lf =%lf",first ,second,first* second);
			    break ;
			case '/':
		     	printf(" %lf / %lf = %lf",first , second , first /second );
			    break;
	        
			    default :
			    	printf ("wrong choice ");
            
	}
	return 0;
}
