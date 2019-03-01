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
	int n,i,k,p;
	int m=0;
	int sz[1000];
    scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
    {
        scanf("%d",&sz[i]);
	}
     for(i=0;i<n;i++)
	 {
       for(p=1;p<n-i;p++)
	   {
	     if(sz[i]==k-sz[i+p])
		 {
			 printf("yes");
			 break;
		 }
		 else
			 m++;
	   }
	 if(sz[i]==k-sz[i+p])
		 {
			
			 break;
	 }
	 }

    if(m==n*(n-1)/2)	
		printf("no");
    return 0;
}