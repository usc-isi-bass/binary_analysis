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

void main()
{
	char s1[1000],s2[1000],n,n1,i,j,k;
	scanf("%s %s",&s1,&s2);
	n=strlen(s1);
	n1=strlen(s2);
	for(i=0;i<n;i++)
		for(j=0;j<n1;j++)
			if(s2[j]==s1[i]){s2[j]=0;s1[i]=0;}
	for(j=0,k=0;j<n1;j++)
		if(s2[j]!=0)k++;
    for(j=0;j<n;j++)
		if(s1[j]!=0)k++;
	if(k==0)printf("YES");
	else printf("NO");	
}

