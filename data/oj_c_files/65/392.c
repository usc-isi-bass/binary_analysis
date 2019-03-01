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
	int n,a=0,x,y,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&x,&y);
		switch(x-y)
		{
			case -1:
			case 2:  a+=1;break;
			case 1:
			case -2: a-=1;break;
		}
	}	
	if(a>0) printf("A");
	else if(a<0) printf("B");
	else printf("Tie");
	return 0;
}