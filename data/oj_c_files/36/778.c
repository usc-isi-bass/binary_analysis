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
	char a[100],b[100];
	int d[255]={0},c[255]={0},i,lena,lenb;
	scanf("%s %s",a,b);
	lena=strlen(a);
	lenb=strlen(b);
	for (i=0;i<lena;i++)
		c[a[i]]++;
	for (i=0;i<lenb;i++)
		d[b[i]]++;
	for (i=65;i<=122;i++)
		if (d[i]!=c[i])
		{
			printf("NO");
			return 0;
		}
	printf("YES");
	return 0;
}