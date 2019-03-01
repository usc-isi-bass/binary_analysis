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

int main(){ int m,i,j,k,c=0;scanf("%d",&m);
for(i=3;2*i<=m;i++){
	for(j=2;j*j<=i;j++)
	{if(i%j==0){c=1;break;}
	}for(j=2;j*j<=m-i;j++){if((m-i)%j==0){c=1;break;}}
    k=m-i;if(c==0)printf("%d %d\n",i,k);c=0;
}return 0;}