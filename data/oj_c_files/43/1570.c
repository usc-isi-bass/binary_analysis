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
	int m,k=0,i1,i2,x,y;
	scanf("%d",&m);
	for(i1=3;i1<=(m/2);i1=i1+2)
	{
	
		i2=m-i1;
        for(x=3;x<i1;x++)
			if((i1%x)==0) 
			{                         
				k=1;

			    break;
			}

		if(k!=1)
		{
			for(y=3;y<i2;y++)
			if((i2%y)==0) 
			{
				k=1;

			    break;
			}

		}
		if(k!=1) printf("%d %d\n",i1,i2);
		k=0;
	}
	return 0;
}