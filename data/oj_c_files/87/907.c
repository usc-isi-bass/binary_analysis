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
	int a,b,c,d,e,f,sz[10000],i=0,j;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	sz[i]=(d+12-a)*3600+e*60+f-b*60-c;
	while(a!=0){
        scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		i++;
		sz[i]=(d+12-a)*3600+e*60+f-b*60-c;
	}
	for(j=0;j<i;j++){
		printf("%d\n",sz[j]);
	}
return 0;
}