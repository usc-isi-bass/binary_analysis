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

void getword(char a[3001],int *b)
{
	int i,l;
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]!=' ')
		{
			(*b)++;
			if(a[i+1]==' ') b++;
		}
	}
}
void main()
{
	char a[3001];
	int b[300]={0},*pb,i;
	gets(a);
	pb=&b[0];
	getword(a,pb);
	for(i=0;b[i]!=0;i++) { printf("%d",*(pb+i)); if(b[i+1]!=0) putchar(','); }
}