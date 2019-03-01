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
	char str[501];
	int i , j , k ;
	int lenth , l , flag;
	l = 2; flag = 1;
	gets(str);
	lenth = strlen(str);
	for(l = 2 ; l <= lenth - 1 ; l++)
		for(i = 0 ; i <=  lenth - l ; i ++)
		{
			if(str[i] == str[i + l - 1])
			{
				for(j = i,k = i + l - 1; j < k ; j ++, k--)
				{	
					if(str[j] != str[k])
					{
						flag = 0;
						break;
					}
				}
				if(flag == 1)
				{
					for(j = i ; j <= i + l - 1; j ++)
					printf("%c",str[j]);
					printf("\n");
				}
				flag = 1;
			}
		}
	return 0;
}
	
