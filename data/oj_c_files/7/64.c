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
	char sz[100];
	scanf ("%s",sz);
	int i,j,m,n,len,len1,len2;

	char as[100],az[100];
	scanf ("%s%s",as,az);

	len=strlen(sz);
	len1=strlen(as);
	len2=strlen(as);
	for (i=0;i<len;i++){
		for (j=0;j<len2;j++,i++){
			if (sz[i]!=as[j]) break;
			if (j==len2-1) {
				for (m=i-len2+1,n=0;n<len2;n++,m++){
					sz[m]=az[n];
				}
			}
			if (j==len2-1){
				i=len;
			}
		}
	}
	printf("%s",sz);
	return 0;
}

