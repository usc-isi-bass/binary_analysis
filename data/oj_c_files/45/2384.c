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
	char a[50],b[50];
	int i,j,n1,n2;
	scanf("%s",&a);
	scanf("%s",&b);
	n1=strlen(a);
	n2=strlen(b);
	for(i=0;i<n2;i++)
	{
		if(b[i]==a[0])
		{
			for(j=0;j<n1;j++)
			{
				if(b[i+j]!=a[j])
					break;
			}
			if(j==n1&&b[i+j-1]==a[j-1])
			{
				printf("%d\n",i);
				break;
			}
		}
	}

	return 0;
}
