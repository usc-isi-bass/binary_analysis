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
{char a[500],b[500];
 int i,n;
 float m,j=0;
 	scanf("%f",&m);
 	scanf("%s",a);
 	scanf("%s",b);
 	n=strlen(a);
 	if((strlen(a))!=(strlen(b)))
 	{	printf("error");
 		return 0;
	}
 	for(i=0;i<n;i++)
 	{	if((a[i]!='A')&&(a[i]!='T')&&(a[i]!='C')&&(a[i]!='G')||((b[i]!='A')&&(b[i]!='T')&&(b[i]!='C')&&(b[i]!='G')))
 		{	printf("error");
 			return 0;
    	}
    	else
    	{	if(a[i]==b[i])
    		j++;
		}
 	}
 	if(j/n>=m)
 	printf("yes");
 	else
 	printf("no");
 	return 0;
}