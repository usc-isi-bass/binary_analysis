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
int m,i,sz[300],tag=0;
char zf[303];
char bz[54]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
gets(zf);
 for(i=0;i<52;i++)
     {
        sz[i]=0;
		m=0;
			while(zf[m]!='\0')
            {
            if(zf[m]==bz[i])
			{  
                   sz[i]++;
                   tag=1;
			}
			m++;
			}
          
		if(sz[i]!=0)
		{
			printf("%c=%d\n",bz[i],sz[i]);
		}
      }
if(tag==0)
{
printf("No");
}
return 0;
}

