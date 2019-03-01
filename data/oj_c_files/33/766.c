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
 * c.c
 *
 *  Created on: 2011-10-8
 *      Author: lin
 */





int main()
{
	int t;
	scanf("%d", &t);
	char in[256];
	while(t--)
	{
		scanf("%s", in);
		char *pnt = in;
		while(*pnt)
		{
			switch(*pnt)
			{
			case 'A':
				printf("T");
				break;
			case 'T':
				printf("A");
				break;
			case 'C':
				printf("G");
				break;
			case 'G':
				printf("C");
				break;
			default:
				break;
			}
			pnt++;
		}
		printf("\n");
	}
	return 0;
}
