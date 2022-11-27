#include <stdio.h>
int main()
{
 int i,Sum,n, fix=9;
 printf("Enter Nuber : ");
 scanf("%d",&n);
 printf("Series = ",fix);
 for(i = 1; i <= n; i++)
{
 	Sum = Sum+fix;
 	if(i <= n - 1)
{
	printf("%d + ",fix);
}
    else
    {
	printf("%d",fix);
	}
	fix = fix*10+9;
}
	printf("\nSum = %d",Sum);
}
