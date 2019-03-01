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
{	int i,j,n;
	scanf("%d",&n);
	int s[100];
	for(i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(s[j]==s[i]){
				s[j]=0;
			}
		}
	}
	int a=0;
	for(i=0;i<n;i++){
		if(s[i]==0)
			continue;
		if(s[i]!=0){
			printf("%d",s[i]);
			for(j=i;j<n-1;j++){
			a=a+s[j+1];
			}
			if(a==0)continue;
			else printf(",");
		}
		a=0;
	}
	return 0;
}