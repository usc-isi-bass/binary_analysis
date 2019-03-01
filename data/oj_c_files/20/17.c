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
	int k,s,p=0,m=0;
	char str[10],substr[3],d;
	do
	{
		if (p) for (k=1;;k++) {str[k]=getchar();if (str[k]==' ') {str[k]='\0';break;}}
		else scanf("%s",str);
		scanf("%s",substr);d=getchar();			
		for (k=0;k<strlen(str);k++)	if ((int)str[k]>m) {s=k;m=(int)str[k];}
		for (k=0;k<=s;k++) printf("%c",str[k]);
		printf("%s",substr);
		for (k=s+1;k<strlen(str);k++) printf("%c",str[k]);
		printf("\n");
		m=0;p+=1;
	}while((str[0]=getchar())!=EOF);
}