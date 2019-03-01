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
	int a,b;
	void search(int,int);
	scanf("%d %d",&a,&b);
	search(a,b);
}
void search(int a,int b)
{
	if(a==b) printf("%d",a);
	else if(a>b)  search(a/2,b);
	else search(a,b/2);
}