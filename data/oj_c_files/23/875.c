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
	char a[100][100];char (*ipa)[100]=a;
	int i; char c='\n';
	for(i=0;;i++)
	{
		scanf("%s",*ipa++);
		if(c==getchar()) 
			break;
	}
	ipa--;
	for(;i>=1;i--)
	{
		printf("%s ",*ipa--);
	}
	printf("%s",*ipa);

}