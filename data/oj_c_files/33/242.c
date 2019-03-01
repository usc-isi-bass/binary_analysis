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
	char a[N],b[N][N];
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a);
		k=strlen(a);
		for(j=0;j<k;j++){
			if(a[j]=='A'){
				a[j]='T';
			}
			else if(a[j]=='T'){
				a[j]='A';
			}
			else if(a[j]=='C'){
				a[j]='G';
			}
			else if(a[j]=='G'){
				a[j]='C';
			}
		}
		strcpy(b[i],a);
	}
	for(i=0;i<n;i++){
		printf("%s\n",b[i]);
	}
	return 0;
}