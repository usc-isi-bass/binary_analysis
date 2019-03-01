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
    int a[20]={0};
    int j,k,i=0,n=0,m=0;



        while((scanf("%d",&a[i]))&&(a[i]>=0))
        {
        
          if(a[i]==0)
		{
			for(j=0;j<i-1;j++)
			{
				for(k=j+1;k<i;k++)
				if(a[j]==2*a[k]||a[k]==2*a[j])
				m++;
			}
			printf("%d\n",m);
			m=0;
			i=0;
			for(j=0;j<20;j++)
			a[j]=0;
		}
    i++;


        }



    return 0;
}