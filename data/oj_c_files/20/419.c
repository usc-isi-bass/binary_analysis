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

main()
{
    int l,i,k,j;
	char s1[11],s2[4],s3[15];
	while(scanf("%s %s",s1,s2)!=EOF)
    {
	    l=strlen(s1);
		k=0;
	    for(j=1;j<l;j++)
			if(s1[k]<s1[j])  k=j;
		for(i=0;i<=k;i++)
		  s3[i]=s1[i];
		for(i=1;i<4;i++)
			s3[k+i]=s2[i-1];
		for(i=0;i<=l-k;i++)
			s3[k+4+i]=s1[k+i+1];
		printf("%s\n",s3);
	}
}