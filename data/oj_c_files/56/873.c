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
	int i,k;
	char list[5],list1[5];
	
	gets(list);
	for(k=0;k<5;k++)
		if(list[k]=='\0')
			break;

	for(i=0;i<k;i++)
		list1[i]=list[k-i-1];
	for(i=0;i<k;i++)
	{
		printf("%c",list1[i]);
	}



	
	return 0;
}

