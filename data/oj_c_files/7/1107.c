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

int main(int argc, char* argv[])
{
	char w[256],s[256],r[256];
	int len1,len2,len3,i,j,k;
	scanf("%s\n",w);
	scanf("%s\n",s);
	scanf("%s",r);
	len1=(int)strlen(s);
	len2=(int)strlen(w);
	len3=(int)strlen(r);
	for(i=0;i<len2;i++)
	{
		if(w[i]==s[0])
		{
			for(j=1;j<len1;j++)
			{
				if(s[j]!=w[i+j])
				{
					break;
				}
			}
		}
		if(j==len1)
		{
			for(k=0;k<len3;k++)
			{
				w[i+k]=r[k];
			}
			break;
		}

	}
	printf("%s",w);


	return 0;
}