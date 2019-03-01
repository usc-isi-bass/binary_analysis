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
{int a[16],i,j,t,k;

for(i=0;;i++)

{  for(j=0;j<=15;j++) 
{scanf("%d",&a[j]);if(a[j]==0) break;
if(a[0]==-1)  {printf("\n");return 0;}  
 }
   
    for(j=0,t=0;j<=14;j++)
	{ for(k=j+1;k<=15;k++)
	   { 
		if(a[k]!=0&&a[j]!=0&&(2*a[j]==a[k]||2*a[k]==a[j]))
	    t=t+1;
	}
	  a[j]=0;
	}
	printf("%d\n",t);
    

} 
    printf("\n");

 
  return 0;
}