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
	char a[257],b[257],c[257],d[530]={'\0'},e[257]={'\0'};
	int i,m=0,j,t,len;
	scanf("%s%s%s",a,b,c);
	for(i=0;;i++)
	{
		if(a[i]=='\0'||b[m]=='\0') break;
		if(b[m]!=a[i]) 
		{
			m=0;
			continue;
		}
		m++;
	}
	if(m!=0)
	{
      	for(j=0,t=0;j<=i-m;j++,t++)
		{
		    if(j==i-m)
			{
			    d[t]='\0';
			}
		    else
			{
		        d[t]=a[j];
			}
		}
        len=strlen(a);
		if(i!=len)
		{
            for(j=i,t=0;j<len;j++,t++)
			{
		        e[t]=a[j];
			}
	        strcat(d,c);
         	strcat(d,e);
		}
		else
		{
			strcat(d,c);
		}
        printf("%s",d);
	}
	else
	{
	    printf("%s",a);
	}
 	return 0;
}
	
