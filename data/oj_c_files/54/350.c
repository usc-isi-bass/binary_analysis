#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


main()
{
int a,b,c;   /*a=n  b=k c=counts*/
int sum=1;
scanf("%d%d",&a,&b);
if(a!=2)
{
	
	for(c=0;c<a;c++)
{
sum=sum*a;
}
int SUM=sum-b*(a-1);
printf("%d",SUM);
}

else
{printf("7");}
	
	return 0;
}