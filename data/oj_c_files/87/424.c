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
	int m1,m2,m3,n1,n2,n3,i,j;
	while(1){
		scanf("%d",&m1);
		if(m1!=0){
			scanf("%d %d %d %d %d",&m2,&m3,&n1,&n2,&n3);
			i=(n1-m1+12)*3600+(n2-m2)*60+n3-m3;
			printf("%d\n",i);
		}else {
			break;
		}
	}
	return 0;
}