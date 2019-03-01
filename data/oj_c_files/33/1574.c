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
	int n;
	char lian[1000][260];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%s", lian[i]);
		int m=0;
		while(lian[i][m]!='\0'){
			if(lian[i][m]=='A'){
				lian[i][m]='T';
			}
			else if(lian[i][m]=='T'){
				lian[i][m]='A';
			}
			else if(lian[i][m]=='G'){
				lian[i][m]='C';
			}
			else if(lian[i][m]=='C'){
				lian[i][m]='G';
			}
			m++;
		}
		printf("%s\n", lian[i]);
	}
	return 0;
}