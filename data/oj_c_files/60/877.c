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
	int n,i,sz[1000],s=0,m,l,j,k;
	scanf("%d",&n);
	k=0;
	for(i=2;i<=n-2;i++)
    {
        s=0;
		for(j=1;j<=i;j++)
		{   
			if(i%j==0)
				s=s+1;
		}  
        m=0;
		
		for(j=1;j<=i+2;j++)
		{
			if((i+2)%j==0)
				m=m+1;
		}
		
		
		
		if((m==2)&&(s==2))
		{  k=k+1;
		printf("%d %d\n",i,i+2);}
	}   
	
	if(k==0)
		printf("empty");
	
	return 0;
}