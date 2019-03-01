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

void friend1(char p[],int n);
int main()
{
	char letter[100];
	int i,j,k;
	gets(letter);
	friend1(letter,strlen(letter));
	puts(letter);
}
void friend1(char p[],int n)
{
	char c;
	int j;
	c=*p;
	for(j=0;j<=n-2;j++)
	{
		*(p+j)=*(p+j)+*(p+j+1);
	}
	*(p+n-1)=*(p+n-1)+c;

}
