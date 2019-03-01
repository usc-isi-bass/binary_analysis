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


int main()
{
int n,i,c=0,s[3]={3,5,7};
scanf("%d",&n);
for (i=0;i<3;i++)
	if (n%s[i]==0)
		c++;

if (c==3) printf("3 5 7");
else if (c==0)
		printf("n");
else if (c==1)
		for (i=0;i<3;i++)
		{
			if (n%s[i]==0)
				printf("%d",s[i]);
		}
else if (c==2)
		{
			if (n%3!=0)printf("5 7");
			if (n%5!=0)printf("3 7");
			if (n%7!=0)printf("3 5");
		}
			

return 0;
}