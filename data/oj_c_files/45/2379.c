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
	char s1[50],s2[50],s3[50];
	int i,m,j,n,k=0;
	scanf("%s %s",&s1,&s2);
	n=strlen(s1);
	m=strlen(s2);
	for(i=0;i<m-n+1;i++)
	{
		for(j=0;j<n;j++)
		s3[j]=s2[j+i];
		s3[n]='\0';
		if(strcmp(s1,s3)==0)
		{
			k=i;
			break;
		}
	
	}
	printf("%d",k);
}