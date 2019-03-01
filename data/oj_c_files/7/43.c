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
	char s1[100],s2[100],s3[100];
	int i,j,k,n,m,f,q;
	scanf ("%s",s1);
	scanf ("%s",s2);
	scanf ("%s",s3);
	m=strlen(s2);
	n=strlen(s1);
	for (i=0;i<strlen(s1);i++)
	{
		f=0;
		for (j=0;j<strlen(s2);j++)
			if(s2[j]!=s1[i+j])
			{
				f=1;
				break;
			}
		if(f==0)
			{
				q=i;
				break;
			}
	}
   if (f==1)
       printf("%s\n",s1);
   else 
   {
       for (k=0;k<q;k++)
           printf("%c",s1[k]);
       printf("%s",s3);
       for (k=q+m;k<n;k++)
       printf("%c",s1[k]);
       printf("\n");
	}

   return 0;
}