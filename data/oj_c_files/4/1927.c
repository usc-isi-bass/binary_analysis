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
int r,s,sz[100][100],R,C;
scanf("%d%d",&R,&C);
for(s=0;s<R;s++)
{
printf("\n");
for(r=0;r<C;r++)
{
scanf("%d",&sz[s][r]);
}
}
for(s=0;s<C+R-1;s++)
{
for(r=0;r<=s;r++)
{
if(s-r>=C)
continue;
if(r>=R)
break;
printf("%d\n",sz[r][s-r]);
}
}
return 0;
}