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

int check(int i, char s[50],char w[50],int m)
{
	int n=0,j;
	for(j=0;j<m;j++)
	{
		if(s[j]==w[i+j]){
			n++;
		}
	}

	if(n==m){
		return 0;
	}else{
		return 1;
	}
}

int main()
{
	char s[50],w[50];
	scanf("%s %s",s,w);
	int i,m,n,j=0;
	m=strlen(s);
	n=strlen(w);
	for(i=0;i<n;i++)
	{
		if(check(i,s,w,m)==0){
			break;
		}
	}

	printf("%d",i);
	return 0;
}
