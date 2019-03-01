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
	int n;char s[2][1000];
	scanf("%s%s",s[0],s[1]);
	void jg(char x[]);
	jg(s[0]);jg(s[1]);
	if(strcmp(s[0],s[1])) printf("NO");else printf("YES");
	return 0;
}
void jg(char x[])
{
	int i,j,l=strlen(x);char t;
	for(i=0;i<l-1;i++)
		for(j=i+1;j<l;j++)
			if(x[i]>x[j]) {t=x[i];x[i]=x[j];x[j]=t;}
}

