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

PutMethod(int apple,int plate)
{int k,k1=0,k2=0;
 if(plate==1)k=1;
 else 
	{if(apple<plate)k2=0;
	 if(apple==plate)k2=1; 
	 if(apple>plate)
		k2=PutMethod(apple-plate,plate);
		k1=PutMethod(apple,plate-1);
	 k=k2+k1;
	}
 
 return k;
}
main()
{int t, apple, plate,i,k;
 scanf("%d",&t);
 for(i=0;i<t;i++)
	{scanf("%d %d",&apple,&plate);
	 k=PutMethod(apple,plate);
	 printf("%d\n",k);
	}
}