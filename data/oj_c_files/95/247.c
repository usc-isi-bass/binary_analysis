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
	
	char str[2][80];
	int i,j;
	for(i=0;i<2;i++)
	{
		gets(str[i]);
		for(j=0;j<80;j++)
			if((str[i][j])>='a'&&(str[i][j])<='z')
			(str[i][j])=(str[i][j])-32;
		else (str[i][j])=(str[i][j]);
	}
	if(strcmp(str[0],str[1])>0)
		printf(">");
	else if(strcmp(str[0],str[1])<0)
		printf("<");
	else if(strcmp(str[0],str[1])==0)
		printf("=");
	
}

	