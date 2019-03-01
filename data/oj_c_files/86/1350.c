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
int n,i,j,m;
static int x[100];
scanf("%d",&n);
for(i=1;i<=n;i++)
 {
  scanf("%d",&m);
  for(j=1;j<=m;j++)
     scanf("%d",&x[j]);
  for(j=m; ;j--)
    {if((x[j]+j*3)<=60)
       {printf("%d\n",60-j*3);
        break;}
     if((x[j]+j*3)>60&&(x[j]+(j-1)*3)<=60)
       {printf("%d\n",x[j]);
        break;} }
 }
}
