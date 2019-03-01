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
	int n,len,j,i;
	char a[1000][256]={'\0'};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
		len=strlen(a[i]);
		for(j=0;j<len;j++){
			if(a[i][j]=='A')
                a[i][j]='T';
			else if(a[i][j]=='C')
                a[i][j]='G';
			else if(a[i][j]=='G')
                a[i][j]='C';
			else if(a[i][j]=='T')
                a[i][j]='A';
		}
		printf("%s\n",a[i]);
	}
	return 0;
}