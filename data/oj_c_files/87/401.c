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
	int t[6],i,j,s;
	for(i=0;i<=1000;i++){
		for(j=0;j<6;j++){
			scanf("%d",&t[j]);
		}
                  if(t[3]==0){
                     break;
                  }
		s=3600*(t[3]-t[0]+11)+60*(60-t[1]+t[4])-t[2]+t[5];
		printf("%d\n",s);
	}
	return 0;
}
		