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
int i,j,k,n,m,s,ans;
int a,b,c,d;
int h[30];
scanf("%d\n",&n);
for(i=1;i<=n;i++)
{
                 s=0;
                 scanf("%d",&m);
                 for(j=0;j<m;j++)
                 scanf("%d",&h[j]);
                 for(j=0;j<m;j++)
                 {s=0;
                 k=h[j];
                 if((k+3*j)>=57)
                 {if((k+3*j-57)<3)
                 {s=3-(k+3*j-57);
                 break;}
                 else
                 break;
                }
                }
                ans=60-3*j-s;
                printf("%d\n",ans);                 
                 }

}