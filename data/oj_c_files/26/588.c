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
	char str1[100],str2[100],c;
	int i=0,j=0,k=0;
	gets(str1);
	while((c=str1[i])!='\0')
		i++;
	do{
		str2[j++]=str1[k++];
		while((str1[k-1]==' ')&&(str1[k]==' '))
			k++;
	}
	while(k<i);
	for(i=0;i<j;i++)
		printf("%c",str2[i]);
	return 0;
}