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

char com(char ch);
char com(char ch)
{
	if(ch=='A')
		return 'T';
	else if(ch=='T')
		return 'A';
	else if(ch=='G')
		return 'C';
	else if(ch=='C')
		return 'G';
}
int main(){
	int n,i,j;
	char chain[1000][256];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",chain[i]);
		for(j=0;j<strlen(chain[i]);j++)
			chain[i][j]=com(chain[i][j]);
	}
	for(i=0;i<n;i++)
		printf("%s\n",chain[i]);
	return 0;
}

