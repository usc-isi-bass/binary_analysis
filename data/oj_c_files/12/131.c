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
int an[50],*p,i,t=0,*q;
for(i=0;;)
{
scanf("%d",&an[i]);
if(an[i]==-1) break;
else 
{	
	for(i=1;;i++)

	{
     scanf("%d",&an[i]);
     if(an[i]==0) break;
	}
     for(p=an;*p!=0;p++)
	 {
      for(q=an;*q!=0;q++)
      if(*q==(*p)*2) t++;
	 }
	 printf("%d\n",t);
	 t=0;
}
i=0;

}


return 0;
}