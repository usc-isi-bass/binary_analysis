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
	int i,j,k=1,t;
	char s1[256],s2[256],s3[256];
	gets(s1);
	gets(s2);
	gets(s3);
	for(i=0;s1[i]!='\0';i++)
		if(s1[i]==s2[0])
		{
			for(j=1;s2[j]!='\0';j++)
				if(s2[j]==s1[i+j]) k++;
			if(s2[k]=='\0')
			{
				for(t=0;t<i;t++) printf("%c",s1[t]);
				for(t=0;t<k;t++) printf("%c",s3[t]);
				for(t=i+k;s1[t]!='\0';t++) printf("%c",s1[t]);
				printf("\n");
				break;
			}
		}
	if(s2[k]!='\0') printf("%s\n",s1);
	return 0;
}

