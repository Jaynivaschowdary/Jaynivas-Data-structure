#include<stdio.h>
int main()
{
	int fact=1,i,n;
	printf(" Enter the number: \n");
	scanf("%d", &n);
	{
	    for(i=0;i<n;i++)
	    fact=fact*1;
    }
    printf("factorial of%d is %d:",n,fact);
    return 0;
}
