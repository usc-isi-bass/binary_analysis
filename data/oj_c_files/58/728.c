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
	int n,i,j,m,k;
	char q[100];
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		gets(q);                                 //??????????????????
	    m=strlen(q);
		if((q[0]<'A' || (q[0]>'Z'&& q[0]<'a')|| q[0]>'z')&&q[0]!=95) printf("0\n");
		else if(m==1) printf("1\n");
		else
		{
			for(k=1;k<=m-1;k++)
			 {
				 if((q[k]>=48 && q[k]<=57 )|| (q[k]>=65 && q[k]<=90)|| (q[k]>=97 && q[k]<=122)||q[k]==95) ;
				 else
				 {
					 printf("0\n");
					 break;
				  }
				 if (k==m-1) printf("1\n");
			 }
		}
	}
	return 0;
}
