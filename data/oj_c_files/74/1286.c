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
{int i,j,m,n,b,c,t,k;

scanf("%d%d",&m,&n); 
         
    for(i=m,t=0;i<=n;i++)
     {  c=i;b=0;
	   while(c>0)
	   {b=b*10+(c%10);
	   c=c/10;
	   }
	   if(b==i)
	     {k=(int)sqrt(i);
          for(j=2;j<=k;j=j+1)
		  {if(i%j==0) break;}
	        
	         if(j>k) 
		       {t=1+t;
                if(t==1)  printf("%d",i);
				if(t>1)  printf(",%d",i);
			   }

	      }
      }
	if(t==0)  printf("no");
        printf("\n");
		return 0;
}