#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=5;k>=i;k--)
		printf(" ");
		for(j=1;j<=i;j++)
		{
			printf(" %d ",i);
		}
		printf("\n");
	}
}
