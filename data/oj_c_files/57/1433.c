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
	char a[50][100],b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
		b=strlen(a[i])-1;
		if(a[i][b]=='r'||a[i][b]=='y'){
			a[i][b-1]='\0';
		}
		if(a[i][b]=='g'){
			a[i][b-2]='\0';
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
	return 0;
}
