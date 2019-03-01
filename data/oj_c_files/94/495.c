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

/*
 * ct.c
 *
 *  Created on: 2011-11-24
 *      Author: lin
 */

int mysort(void *a, void *b)
{
	return *(int *)a - *(int *)b;
}

int main()
{
	int in[100];
	int num;
	int tmp;
	scanf("%d", &num);
	int count = 0;
	while(num--)
	{
		scanf("%d",&tmp);
		if(tmp % 2)
		{
			in[count] = tmp;
			++count;
		}
	}
	qsort(in,count,sizeof(int),mysort);
	for(tmp = 0; tmp < count - 1; ++tmp)
	{
		printf("%d,", in[tmp]);
	} 	
	printf("%d", in[count - 1]);
	return 0;

}


