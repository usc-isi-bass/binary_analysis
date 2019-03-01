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
	int n,m,i,j,k,l=0;
	scanf("%d",&n);
	n=n-2;
	for(i=2;i<=n;i++)
	{
		j=0;
		for(m =2;m <i;m ++)  /*panduan i shifou sushu*/
		{
			if(i%m==0)
				j++;
		}
	    if(j==0)  /*i shisushu*/
	    {
		    k=i+2;
			for(m =2;m <k;m ++)  /*panduan k shifou sushu*/
		    {
			if(k%m==0)
				j++;
		    }
			if(j==0)  /*k shisushu*/ 
			    {
				   printf("%d %d\n",i,k);
				   l++;   /*l zhaodao de sushudui shu*/
				} 	
		}
	    
	}
	if(l==0)
	   printf("empty");
}