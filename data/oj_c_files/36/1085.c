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
	char s[100],w[100];
	int n,m,i,j,count=0;
	scanf("%s%s",s,w);
	n=strlen(w);
	m=strlen(s);
	if(n!=m){
		printf("NO");
		return 0;
	}
	else{
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(s[i]==w[j]){
					count++;
					w[j]=' ';
					break;}
			}
		}
		if(count==n)
			printf("YES");
		else printf("NO");
		return 0;
	}
}