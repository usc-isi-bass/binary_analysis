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

main()
{
	char str[101],a[101],b[101];
	int i=0,j,t;
	gets(str);
	scanf("%s",a);
	scanf("%s",b);
    do
	{
		j=0;
		t=i;
		while (str[i]==a[j]&&j<strlen(a))
		{
			i++;
			j++;
		}
		if (j==strlen(a)) 
		{
			printf(str[i]=='\0'?"%s":"%s ",b);
			i++;
		}
		else 
		{
			do
			{
			    printf("%c",str[t]);
				t++;
			}
		    while (str[t]!=' '&&str[t]!='\0');
			if (str[t]==' ') printf(" ");
		    i=t+1;
		}
	}
	while (str[i-1]!='\0');
	printf("\n");
	return 0;
}