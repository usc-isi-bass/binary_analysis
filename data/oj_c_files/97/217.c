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
	int i, a[6]={0}, m;
	scanf("%d", &m);
	while(m/100>0)
	{
		a[0]++;
		m -= 100;
	}
	while(m/50>0)
	{
		a[1]++;
		m -= 50;
	}
	while(m/20>0)
	{
		a[2]++;
		m -= 20;
	}
	while(m/10>0)
	{
		a[3]++;
		m -= 10;
	}
	while(m/5>0)
	{
		a[4]++;
		m -= 5;
	}
	a[5] = m;
	for(i=0;i<6;i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}