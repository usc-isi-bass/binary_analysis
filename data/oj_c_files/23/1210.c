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
	int len,i,j,k,label;
	char ss[101];
	gets(ss);
	len=strlen(ss);
	for (i=0;i<len;i++)
	{
		if (ss[i]==' ')
		{
			label=i;
			break;
		}
		if (i=len-1)
			label=len;
	}
	i=len-1;
	while(i>=0)
	{
		for (j=i;j>=0;j--)
			if (ss[j]==' ')
				break;
		for (k=j+1;k<=i;k++)
			printf("%c",ss[k]);
		//if (i!=label-1 && label!=len)
		//	printf(" ");
		if (j>=0)
        printf("%c",ss[j]);
		i=j-1;
	}
}
