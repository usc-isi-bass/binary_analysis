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
	int n,i,a,b,j;
	char zfc[100][21],num[100];
	gets(num);
	n=atoi(num);
	for(i=0;i<n;i++){
		gets(zfc[i]);
	}
	for(i=0;i<n;i++){
		a=strlen(zfc[i]);
		b=0;
		for(j=0;j<a;j++){
			if(zfc[i][j]=='_'||zfc[i][j]>='a'&&zfc[i][j]<='z'||zfc[i][j]>='A'&&zfc[i][j]<='Z'||zfc[i][j]>='0'&&zfc[i][j]<='9') b++;
			if(j==0&&zfc[i][j]>='0'&&zfc[i][j]<='9') b--;
		}
		if(b==a) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}