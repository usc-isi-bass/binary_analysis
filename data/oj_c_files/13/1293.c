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

int main() {
	int n;
	scanf("%d", &n);
	int number[NUMBER];
	int i;
	i=0;
	while(i<n)
	{
		scanf("%d", &number[i]);
		i++;
	}
	i=1;
	int j=0;
	printf("%d", number[0]);
	while(i<n)
	{
		while(j<i)
		{
		   if(number[i]==number[j])
		   {
			    break;
		   }
		   else
		   {
			   j++;
		   }
		   if(j==i)
		   {
			   printf(" %d", number[i]);
		   }
		}
		j=0;
		i++;
	}
	return 0;
}