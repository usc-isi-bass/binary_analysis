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
    int n;
	scanf("%d",&n);
    void move(int n);
	move(n);
}
void move(int n)
{
	while(n!=0)
	{
	printf("%d",n%10);
	n=n/10;
	}
}
