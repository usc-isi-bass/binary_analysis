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

int binTree(int a, int b) 
{
	if(a == b)
         {
		return a;
	}
	if(a > b) 
         {
		binTree(a / 2, b);
	} 
         else 
         {
		binTree(a, b / 2);
	}
}

int main() 
{
	int n, m;
	scanf("%d%d", &n, &m);
	printf("%d", binTree(n, m));
}
