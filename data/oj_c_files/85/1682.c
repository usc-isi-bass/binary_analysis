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
	int n,m,i,j,a[2000];
	char b[21];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",b);
		m=strlen(b);
		for(j=0;j<m;j++){
			if(j==0&&((b[j]>=65&&b[j]<=90)||(b[j]>=97&&b[j]<=122)||b[j]=='_'))
				a[i]=1;
			else if(j!=0&&((b[j]>=65&&b[j]<=90)||(b[j]>=97&&b[j]<=122)||(b[j]>=48&&b[j]<=57)||b[j]=='_'))
				a[i]=1;
			else{
				a[i]=0;
				break;
			}
		}
	}
	for(i=0;i<n;i++){
		if(a[i])
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}