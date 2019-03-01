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
    char s1[100],s2[100];
	int l1,l2,i,n=0,j;
    scanf("%s%s",s1,s2);
	l1=strlen(s1);
	l2=strlen(s2);
	for(i=0;i<l1;i++)
		for(j=0;j<12;j++)
			if(s1[i]==s2[j])
			{
			   n++;
			   s2[j]='\0';
			   break;
			
			}
    if(l1==l2&&n==l1)
		printf("YES\n");
	else printf("NO\n");



}
