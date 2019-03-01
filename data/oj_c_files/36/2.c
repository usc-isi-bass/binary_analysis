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

extern int hash1[500]={0},hash2[500]={0};
void count(char *p,int *t)
{
	int i,l=strlen(p);
	for(i=0;i<l;i++)
		t[p[i]]++;
}
void main()
{
	int i,f=0;
	char s1[100],s2[100];
	scanf("%s %s",s1,s2);
	count(s1,hash1);
	count(s2,hash2);
	for(i=0;i<500;i++)
		if (hash1[i]!=hash2[i]) 
		{
			f=1;break;
		}
	if (f) printf("NO");
	else printf("YES");
}