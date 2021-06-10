#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
 }

		for(i=n-1;i>0;i--)
		{
			printf("\n");
			for(j=i;j>0;j--)
			{
				printf("%d",i);
			}
		}
	
}

