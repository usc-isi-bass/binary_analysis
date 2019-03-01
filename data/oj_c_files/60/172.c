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

void main()
{
	int n,i,j,k,flag,t,z=0;
	
	scanf("%d",&n);
    for(i=3,flag=0,t=0;i<n-1;i++)
	
	{	for(j=2;j<i;j++)
		{	if(i%j==0)
			{	flag=0;break;}
			else flag++;
		}
	  if(flag!=0)
	  {
		  for(k=2;k<i+2;k++)
		    if((i+2)%k!=0)
			t++;
			else {t=0;break;}
	  }
	  if(flag!=0&&t!=0)
	  {  printf("%d %d\n",i,i+2);z++;}
	}
   if(z==0)
	   printf("empty");
}
