/* 		* * * *
    		 * * *
     		  * *
      		   *
     		  * *
    		 * * *
   		* * * *				*/


#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter sequence :");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(k=i;k<n;k++)
		{
			printf(" *");
		}
	printf("\n");
	}
	for(i=1;i<n-1;i++){
		for(j=n-1;j>i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i+1;k++)
		{
			printf("* ");
		}
	printf("\n");
	}
	
}