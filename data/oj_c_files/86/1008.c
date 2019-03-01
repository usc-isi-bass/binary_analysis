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
int n,m,c;

scanf("%d",&n);
for(int x=1;x<=n;x++)
{
scanf("%d",&m);
int*shuzu=(int*)malloc(sizeof(int)*m);
c=0;
for(int i=0;i<m;i++)
{
scanf("%d",&shuzu[i]);
if(c+shuzu[i]<60)
if(c+shuzu[i]+3<60)
c+=3;
else
c=60-shuzu[i];
}
free(shuzu);
printf("%d\n",60-c);
}
return 0; 
}
