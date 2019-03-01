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


void complement(char chain[])
{
	int j;
	for(j=0;j<strlen(chain);j++){
		if(chain[j]=='A'){
			chain[j]='T';
		}else if(chain[j]=='T'){
			chain[j]='A';
		}else if(chain[j]=='C'){
			chain[j]='G';
		}else if(chain[j]=='G'){
			chain[j]='C';
		}
	}
}

int main()
{
	int n;
	char chain[256];
	int i,j;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",chain);
		complement(chain);
		printf("%s\n",chain);
	}

	return 0;
}
