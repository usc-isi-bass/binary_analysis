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
{int a[100],n,i,j,k;
 scanf("%d",&n);
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
 for(i=0;i<n;i++)
   {for(j=0;j<i,a[i]!=a[j];j++);
	if(j==i)
	 {if(i==0)
		printf("%d",a[i]);
	  else
		printf(",%d",a[i]);
	 }
	}


}