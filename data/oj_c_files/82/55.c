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

int main (){
	int	c,n,i,j,k,h,max;
	int l[100];
	h=0;
	max=0;
	for (i=0;i<100;i++)
	{l[i]=0;
	}
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{scanf("%d %d",&j,&k);
	   if (j>=90 && j<=140 && k>=60 && k<=90)
	   {h++;
	   l[i]=h;
	   }else
	   {h=0;
	   }
	}
	for(i=0;i<100;i++){
		if(l[i]>l[max]){
			max=i;
		}
	}
	printf("%d",l[max]);
	return 0;
}
