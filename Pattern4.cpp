#include <stdio.h>
int main()
{
	int a,i,j;
	int num=1;
    for(i=1;i<=4;i++)
    {
		for(j=1;j<=4-i;j++)
		{
			printf(" ");
		}
	  for (a=1;a<=i;a++)
	  {
	  	printf("* ");
	  	num++;
	  }
	  printf("\n");
    }
  return 0;
}
