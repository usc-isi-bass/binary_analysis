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
	char s1[256],s2[256],s3[256];
	int i,j,a=1,n,m,k;
	scanf("%s",s1);
	scanf("%s",s2);
	scanf("%s",s3);
	n=strlen(s1);
	m=strlen(s2);
	for(i=0;i<n;i++)
		if(s1[i]==s2[0])
		{
			for(j=1;j<m;j++)
			{
				if(s1[j+i]==s2[j])
					a++;
			}
			if(a==m)
			{
				for(k=0;k<i;k++)
					printf("%c",s1[k]);
				for(k=0;k<m;k++)
					printf("%c",s3[k]);
				for(k=i+m;k<n;k++)
					printf("%c",s1[k]);
				printf("\n");
				break;
			}	
		}
	if(a!=m) printf("%s\n",s1);
	return 0;
}
