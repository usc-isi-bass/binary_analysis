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
	char a[100000];
	int i,c=0,m=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
		m++;
	for(i=0;i<m+1;i++)
	{
		if(a[i]!=' '&&a[i]!='\0')c++;
		if(a[i]==' '&&a[i-1]!=' '){printf("%d,",c);c=0;}
		if(a[i]=='\0'){printf("%d",c);c=0;}
	}
}