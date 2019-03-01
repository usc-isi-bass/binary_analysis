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
    int i=0, j;
    char str[500], a[100], min[100], max[100];
	
    gets(str);
	for (i=0;str[i]!=' ';i++) {
		a[i]=str[i];	
	}
	a[i]='\0';

    strcpy(max,a);
    strcpy(min,a);
	i++;

    for(; str[i];i++) {
		for (j=0;str[i]!=' '&& str[i]!='\0';i++,j++) {
			a[j]=str[i];
		}
		a[j]='\0';
		if (strlen(max)<strlen(a))
			strcpy(max,a);
		if (strlen(min)>strlen(a))
			strcpy(min,a);
		if (str[i]=='\0') break;
	}
	printf("%s\n", max);
	printf("%s\n", min);
	return 0;
}
