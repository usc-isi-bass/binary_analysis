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

int tag(char x);
void main()
{
	char a[30];
	int n,i=1,j,l;
	scanf("%d\n",&n);
	while(i<=n)
	{
		gets(a);
		j=0;
		l=strlen(a);
		while(a[j])
		{
			if(tag(a[j])==2) break;
			j++;
		}
		if(j==l&&tag(a[0])==1) printf("yes\n");
		else printf("no\n");
		i++;
	}
}
int tag(char x)
{
	if(x>='0'&&x<='9') return(0);
	else if(x>='A'&&x<='Z') return(1);
	else if(x>='a'&&x<='z') return(1);
	else if(x=='_') return(1);
	else return(2);
}