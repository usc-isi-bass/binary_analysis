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
	int m,N,i;
	int *s;
	scanf("%d%d",&N,&m);
		
	s=(int*)malloc(sizeof(int)*N);
	for(i=m;i<N;i++){
		scanf("%d",&s[i]);
	}
	for(i=0;i<m;i++){
		scanf("%d",&s[i]);
	}
	for(i=0;i<N;i++){
if(i<N-1){printf("%d ",s[i]);}
else{printf("%d",s[i]);}
	}
	return 0;
}