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

int isprime(int n)
{
  int i;
  for (i=3;i*i<=n;i+=2)
    if(n%i==0)
    return 0;
  return 1;   
}

void min(int s)
{
	int i;
	for (i=3;i<=s/2;i+=2)
	{
		if (isprime(i)&&isprime(s-i))
		{
			printf("%d=%d+%d\n",s,i,s-i);
			break;
		}
	}
	return;
}

int main()
{
	int ni,i;
	scanf("%d",&ni);
	for (i=6;i<=ni;i++)
	{
	  if (i%2==0)
	  min(i);
	}
	return 0;
}