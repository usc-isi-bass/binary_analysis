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
	char s,l[1000][256];
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%s", l[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;(s=l[i][j])!='\0';j++)
		{
			if(l[i][j]=='A') {l[i][j]='T';}
			else if(l[i][j]=='T') {l[i][j]='A';}
			if(l[i][j]=='C') {l[i][j]='G';}
			else if(l[i][j]=='G') {l[i][j]='C';}
		}
	}
	for(i=0;i<n;i++)
        printf("%s\n", l[i]);
	return 0;
}