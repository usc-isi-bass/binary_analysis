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

int main(){   
	char a[50][33];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		gets(a[i]);
	}
	for(i=0;i<=n;i++){
		for(j=0;j<strlen(a[i]);j++){
			if(a[i][j]=='e'&&a[i][j+1]=='r'&&j==strlen(a[i])-2||a[i][j]=='i'&&a[i][j+1]=='n'&&a[i][j+2]=='g'||a[i][j]=='l'&&a[i][j+1]=='y'){
				a[i][j]='\0';
			}
		}
	}
	for(i=0;i<=n;i++){
		puts(a[i]);
	}
	return 0;
}