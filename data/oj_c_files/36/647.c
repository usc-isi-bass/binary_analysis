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
	char a[100],b[100];
	int i,j,k=0,x;
	scanf("%s%s",a,b);

if(strlen(a)==strlen(b))
{
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;b[j]!='\0';j++)
			if(a[i]==b[j])
			{
				for(x=j;b[x]!='\0';x++)
					b[x]=b[x+1];
				k++;
				break;
			}
	}

	if(k==strlen(a))
		printf("YES");
	else
		printf("NO");
}

else
printf("NO");

}
