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
	int n,i,j;
	char zfcsz[N][256];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&(zfcsz[i]));
	}
	for(i=0;i<n;i++){
		for(j=0;zfcsz[i][j]!='\0';j++){
			if(zfcsz[i][j]=='A'){
				zfcsz[i][j]='T';
			}else if(zfcsz[i][j]=='T'){
				zfcsz[i][j]=zfcsz[i][j]+'A'-'T';
			}else if(zfcsz[i][j]=='C'){
				zfcsz[i][j]=zfcsz[i][j]+'G'-'C';
			}else if(zfcsz[i][j]=='G'){
				zfcsz[i][j]=zfcsz[i][j]+'C'-'G';
			}
		}
}
	for(i=0;i<n;i++){
		printf("%s\n",zfcsz[i]);
	}
	return 0;
}