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
	char a[100]={0},b[100]={0},t;
	int i,j,l;
	scanf("%s",a);
	scanf("%s",b);
	if (strlen(a)!=strlen(b)) 
		printf("NO");
	else 
		{
			l=strlen(a);
			for (i=0;i<l;i++)
				for (j=i;j<l;j++)
					if (a[i]==b[j])
					{
						t=b[i];
						b[i]=b[j];
						b[j]=t;
					}
			if (strcmp(a,b)==0) printf("YES");
			else printf("NO");
		}
	return 0;
}