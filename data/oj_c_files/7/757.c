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
	int i,j=0,m;
	char zfc[1000],zfc_1[100],zfc_2[100];
	scanf("%s%s%s",zfc,zfc_1,zfc_2);
	for(i=0;zfc[i]!='\0';i++)
	{
		if(j==(int)strlen(zfc_1))
			break;
		if(zfc[i]==zfc_1[j])
			j++;
		else
			j=0;
	}
	if(j==(int)strlen(zfc_1))
	{for(m=0;m<i-j;m++)
		printf("%c",zfc[m]);
	printf("%s",zfc_2);
	for(m=i;m<(int)strlen(zfc);m++)
		printf("%c",zfc[m]);
	}
	else printf("%s",zfc);
	return 0;
}
