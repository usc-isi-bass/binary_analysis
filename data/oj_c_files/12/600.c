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
int b,d=0,s[15],i,j;

while(1)
{
scanf("%d",&s[0]);
if(s[0]==-1)   break;


for(i=1;s[i-1]!=0;i++)
scanf("%d",&s[i]);


for(i=0;s[i]!=0;i++)
for(j=0;s[j]!=0;j++)
{if((s[i]==s[j]*2)&&(s[i]!=0)&&(s[j]!=0))
    d++;
}
printf("%d\n",d);
   d=0;

}
return 0;
}

