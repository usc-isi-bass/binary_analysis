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
	int n,i;
	scanf("%d",&n);
	char d[1000][260],r[1000][260];
    for(i=0;i<n;i++){
		scanf("%s",d[i]);
	}
	int len;
	for(i=0;i<n;i++){
		len=strlen(d[i]);
		for(int j=0;j<len;j++){
			if(d[i][j]=='A')
				r[i][j]='T';
			else if(d[i][j]=='T')
				r[i][j]='A';
			else if(d[i][j]=='C')
				r[i][j]='G';
			else if(d[i][j]=='G')
				r[i][j]='C';
		}
	}
	for(i=0;i<n;i++){
		len=strlen(d[i]);
		for(int j=0;j<len;j++){
		    printf("%c",r[i][j]);
		}	printf("\n");
	}
	return 0;
}

