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
	char s1[100][11],m[100]={0},n[100]={0},s2[100][11];
	int i,j,lenth1[100],lenth2[100];
	i=0;
	for (j=0;j<=99;j++)
	{
		if 	(scanf("%s%s",s1[j],s2[j])!=EOF)
		{
			lenth1[j]=strlen(s1[j]);
			for (i=0;i<lenth1[j];i++)
			{
				if (((int) s1[j][i])>((int) m[j]))
				{
					m[j]=s1[j][i];
					n[j]=i;
				}
			}
			for (i=0;i<lenth1[j];i++)
			{
				printf("%c",s1[j][i]);
				if (i==n[j])
				{
					printf("%s",s2[j]);
				}
			}
			printf("\n");
		}
	}
}
			
		

	