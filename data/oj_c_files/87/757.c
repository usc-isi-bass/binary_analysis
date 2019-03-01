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

int main(){
	int a,b,c,d,e,f,i=0,g[1000];
    while(1){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a!=0&&d!=0){
		    g[i]=(d+12-a)*3600+(e*60+f)-(b*60+c);
			i++;
		}
		else
			break;
	}
	for(a=0;a<i;a++)
	printf("%d\n",g[a]);
	return 0;
}
