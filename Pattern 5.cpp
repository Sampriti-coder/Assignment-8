#include <stdio.h>
int main()
{
	int i,j,n=4;
    for(i=1;i<=n;i++)
    {
		for(j=1;j<n;j++)
		{
			printf(" ");
		}
	  for (j=1;j<=i;j++)
	  {
	  	printf("* ");
	  }
	  printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
    	for(j=n;j>1;j--)
    	{
    		printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
  return 0;
}
