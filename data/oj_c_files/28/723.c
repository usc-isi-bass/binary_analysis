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
{	char s[1000];
	char ss[200][50];
	int sz[200];
	gets(s);
	int i,n=0,k=0;
	for(i=0;s[i]!=0;i++){
		if(s[i]==' '){
			s[i]='\0';
			strcpy(ss[n],(s+k));
			sz[n]=strlen(ss[n]);
			n++;
			k=i+1;
		}
	}
	strcpy(ss[n],(s+k));
	sz[n]=strlen(ss[n]);
	n++;
	for(i=0;i<n-1;i++){
		if(sz[i]==0)
			continue;
		else 
			printf("%d,",sz[i]);
	}
	printf("%d",sz[n-1]);
	return 0;
}