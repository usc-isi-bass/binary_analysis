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
	char s[20],sub[10];
	int i,j,k,ls,lsub;
	while(scanf("%s%s",s,sub)!=EOF)
	{
		ls=strlen(s);
		lsub=strlen(sub);
		k=0;
		for(i=1;i<ls;i++)
			if(s[i]>s[k])
				k=i;
		for(i=ls;i>k;i--)
			s[i+lsub]=s[i];
		for(i=k+1,j=0;j<lsub;i++,j++)
			s[i]=sub[j];
	printf("%s\n",s);
	}
}