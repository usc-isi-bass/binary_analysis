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
{for(;;){
	char s1[19],s2[4],s3[20];
	if(scanf("%s%s",s1,s2)==EOF) break;
	int l;
	l=strlen(s1);
	int i,j,max=0;
	for(i=0;i<l;i++)
		if(s1[i]>s1[max]) max=i;
	for(i=0;i<=max;i++)
		s3[i]=s1[i];
	for(i=0,j=max+1;i<3;i++,j++)
		s3[j]=s2[i];
	for(i=max+1,j=max+4;i<l;i++,j++)
		s3[j]=s1[i];
	s3[l+3]='\0';
	puts(s3);
}}

