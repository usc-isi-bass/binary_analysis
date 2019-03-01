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
	char a[22],b[4],c[11],d[11];
	int s1,s2,i,j;	
    scanf("%s%s",a,b);
    do
	{
        
		s1=strlen(a);
		s2=strlen(b);
		for(i=0;i<s1;i++)
		{   int num=0;
			for(j=0;j<s1;j++)
			{
				if((int)a[j]<=(int)a[i])
					num++;
			}
			if(num==s1)
			{
				for(j=0;j<=i;j++)
				{
					c[j]=a[j];
				}
				c[i+1]='\0';
				for(j=i+1;j<s1;j++)
				{
					d[j-i-1]=a[j];
				}
				d[s1-i-1]='\0';
                strcat(c,b);
				strcat(c,d);
			    printf("%s\n",c);	
				break;
			}
		}

	}
    while(scanf("%s%s",a,b)!=EOF); 
}