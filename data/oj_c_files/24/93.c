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
	char word[50][20];
	int max,min,c,total,flag,i;
	flag=0;
	i=0;
	while ((c=scanf("%s",word[i]))==1) i++; //recite the usage of "scanf", see book p.376
	total=i;
	max=min=0;
	for (i=0;i<=total-1;i++)
	{
		if (strlen(word[i])>strlen(word[max])) max=i;
		if (strlen(word[i])<strlen(word[min])) min=i;
	}
	printf("%s\n%s",word[max],word[min]);
}