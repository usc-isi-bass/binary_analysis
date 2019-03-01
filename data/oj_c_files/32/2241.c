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
	int i,j,n,len1,len2;
	int t[101];  /*????*/
	char s1[30][101],s2[30][101];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",s1[i]);
		scanf("%s",s2[i]);
    	printf("\n");
	}                              /*??????*/

	for(i=1;i<=n;i++)
	{                          
		len1=strlen(s1[i]);
		len2=strlen(s2[i]);
			for(j=0;j<=len2-1;j++)
			{
				if(s1[i][len1-j-1]<s2[i][len2-j-1])   /*??????*/
				{
					s1[i][len1-j-2]=s1[i][len1-j-2]-'1'+48; /*s1??????*/
					t[j]=s1[i][len1-j-1]-s2[i][len2-j-1]+10;
				}
				else
				{
					t[j]=s1[i][len1-j-1]-s2[i][len2-j-1];
				}
			}
			for(j=len2;j<=len1-1;j++)
			{
				t[j]=s1[i][len1-j-1]-48;
			}
		for(j=(len1-1);j>=0;j--)   /*???????*/
		{
			printf("%d",t[j]);
		}
		printf("\n");
	}
}



