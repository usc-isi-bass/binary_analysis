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

int main ()
{
    char zs[max+1];
    int n,i,j,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",zs);
		c = 0;

        if(((zs[0]>='a')&&(zs[0]<='z'))||((zs[0]>='A')&&(zs[0]<='Z'))||zs[0]=='_')
            {
				for(j=1;zs[j]!='\0';j++)
				{

				  if(((zs[j]>='a')&&(zs[j]<='z'))||((zs[j]>='A')&&(zs[j]<='Z'))||(zs[j]=='_')||((zs[j]>='0')&&(zs[j]<='9')))
					   c++;
				}
				 if(c==strlen(zs)-1)
					printf("yes\n");
				 else
					printf("no\n");
            
            }
        else	
        {
            printf("no\n");
        }

    }

    return 0;
}
