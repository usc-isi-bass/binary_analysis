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
	int i,j,k,n1,n2;
	char s1[257],s2[257],s3[257];
	gets(s1);
	gets(s2);
	gets(s3);
	n1=strlen(s1);
	n2=strlen(s2);
	for(i=0;i<n1;i++)
		if(s1[i]==s2[0])
		{
			j=0;
			while(s1[i+j]==s2[j]&&j<n2)j++;
			if(j==n2)
			{
				for(k=i;k<i+n2;k++)
					s1[k]=s3[k-i];
				break;
			}
		}
		for(i=0;i<n1;i++)
		printf("%c",s1[i]);
		return 0;
}