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
	char a[1000][256];
	int n,i,j,b[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++){
		b[i]=strlen(a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<b[i];j++){
			switch(a[i][j])
			{
			    case 'A':
					a[i][j]='T';
					break;
				case 'G':
					a[i][j]='C';
					break;
				case 'C':
					a[i][j]='G';
					break;
				case 'T':
					a[i][j]='A';
					break;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
	return 0;
}

