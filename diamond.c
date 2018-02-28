#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=7;i++)
	{
	(i>4)?k--:k++;
	for(j=1;j<=7;j++)
	{
	if(j>=((7/2)+2-k)&& j<=(7/2)+k)
	printf("*");
	else
	printf(" ");
	}
	printf("\n");
	}
}
