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
{int m,n,i,j,sig=0,k,kk;
char s[502];
char *p=s;
scanf("%s",s);
n=strlen(s);
for(i=2;i<=n;i++)
    {for(k=0;k<=n-i;k++)
        {
            for(j=0;j<=i-1;j++)
               {if(*(p+j)!=*(p+i-j-1))
                       {sig=1;break;}
				 }
		if(sig==0)	
		     {for(kk=0;kk<=i-1;kk++)
		     {printf("%c",*(p+kk));
				}
	  printf("\n");
			}
			sig=0;
		p=p+1;
		}
		p=s;
    }
return 0;
}