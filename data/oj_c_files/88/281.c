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
	int i,j=0;
	char sz[30];
	gets(sz);  /*????*/

	for(i=0;i<30;i++)
	{
		if((sz[i]=='0')||(sz[i]=='1')||(sz[i]=='2')||(sz[i]=='3')||(sz[i]=='4')||(sz[i]=='5')||(sz[i]=='6')||(sz[i]=='7')||(sz[i]=='8')||(sz[i]=='9'))
		{
			printf("%c",sz[i]);
			j=0; /*???????????????????*/
		}
		else
		{
			j++;
			if(j==1)
			{
				printf("\n");
			}  /*????????????????*/
		}
	}

	return 0;
}

