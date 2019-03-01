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
	int n,i,x,t=0;
	int a[1000]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	   {scanf("%d",&x);
	    a[x]++;
	   }
	for(i=1;i<=1000;i++)
		if(a[i]!=0&&i%2!=0&&t==0){t++;printf("%d",i);}
		else if(a[i]!=0&&i%2!=0)printf(",%d",i);
	//getchar();
	//getchar();
    return 0;
}
