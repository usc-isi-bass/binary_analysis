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
	int m,n,i,b,r,q=0,l=0,j,p;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{q=0;
        p=i;
		for(j=2;j<=i;j++)
		{
			if(i%j==0){
				b=j;
				break;}	
		}
		
    while(p!=0)
	{
    r = p % 10;
    q *= 10;
    q +=r;
    p /= 10;
	}
	if(q==i&&b==i)
	{
		if(l==0) {
		  printf("%d",i);l++;}
	 else 
	 {
		 printf(",%d",i);
            
	 }
		
	}
	

	}	
	if(l==0) 
		printf("no");

return 0;
}
