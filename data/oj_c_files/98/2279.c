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
	int n,i,len=0,m;
	char w[41];
	scanf("%d",&n);
	scanf("%s",w);
	m=strlen(w);
	len=m;
         printf("%s",w);
	for(i=1;i<n;i++){
		scanf("%s",w);
		m=strlen(w);
		len+=m+1;
		if(len>80){
			printf("\n%s",w);
			len=m;
		}
		else{
			printf(" %s",w);
		}
		}
	return 0;
}



