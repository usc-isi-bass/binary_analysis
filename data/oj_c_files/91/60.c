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



int main(int argc, char* argv[])
{
	char input[101],output[101],*p1;
	int i=0,count=0;

	gets(input);
	p1=input;

	for(p1=input;*(p1+1)!='\0';p1++)
	{
		output[i]=*p1+*(p1+1);
		i++;
		count++;
	}
	if(*(p1+1)=='\0')
		output[count]=*p1+input[0];

	for(i=0;i<=count;i++)
		printf("%c",output[i]);
	
	return 0;
}

