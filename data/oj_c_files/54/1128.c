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

int key(int rest,int monkey,int count,int k)
{
	if(count==1)
        return (rest>k&&(rest-k)%monkey==0)?1:0;
	else
		return (rest>k&&(rest-k)%monkey==0)?key((rest-k)*(monkey-1)/monkey,monkey,count-1,k):0;
}
void main()
{
	int i,n,k;
	scanf("%d %d",&n,&k);
	for(i=1;;i++)
		if(key(i,n,n,k)==1)
		{
			printf("%d\n",i);
		    break;
		}
}
		
