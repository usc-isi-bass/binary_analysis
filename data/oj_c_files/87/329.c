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
    int a,b,c,d,e,f,s,x,sz[1000],i,t;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	i=0;
	while(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
        s=a*3600+b*60+c;	
		x=43200+d*3600+e*60+f;
		sz[i]=x-s;
		i++;
        scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	}
    for(t=0;t<i;t++){
		printf("%d\n",sz[t]);
	}
	return 0;
}