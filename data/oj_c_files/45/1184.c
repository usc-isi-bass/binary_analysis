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
	char s[100];
	int i,j,m,k;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		m=i;
	}
	for(j=m+1;j<100;j++)
	{
	     if(s[j]==s[0])
              {
                 for(k=1;k<m;k++)
                 {
                     if(s[j+k]!=s[k])
                     {
                          break;
                      }
                 }
               }
               if(k==m)
               {
                   printf("%d",j-m-1);
                   break;
                }
          }
				return 0;
}

