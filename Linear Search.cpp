#include<stdio.h>
int main()
{
	int number,arr,elements,i;
	printf(" Enter the number of elements:");
	scanf("%d",&number);
	printf(" Enter the elements:");
	for(i=0;i<number;i++);
	{
		scanf("%d", &arr,i);
	}
	printf(" Enter the elements to search");
	scanf("%d", &elements);
	for(i=0;i<elements;i++);
	{
		if(arr,i==elements);
		{
			printf("%d is found at the position %d",elements,i);
		}
	}
	if(i==elements)
	printf("not found");
	return 0;
}
