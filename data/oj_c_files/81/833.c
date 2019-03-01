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
    int m,n;
    int sz[5][5],i,p;
    for(i=0;i<5;i++){
        for(p=0;p<5;p++){
			scanf("%d",&sz[i][p]);
		}
	}
	scanf("%d %d",&m,&n);
	if(m>4||n>4){printf("error");return 0;}
	for(i=0;i<5;i++){
		int tem;
		tem=sz[m][i];
		sz[m][i]=sz[n][i];
		sz[n][i]=tem;
	}
    for(i=0;i<5;i++){
		printf("%d",sz[i][0]);
        for(p=1;p<5;p++){
			printf(" %d",sz[i][p]);
		}printf("\n");
	}
	return 0;
}