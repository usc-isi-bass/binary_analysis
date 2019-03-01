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
	int k=0,i,t;
	char num[6],rum[6];
	scanf("%s",num);
	for (i=0;num[i]!='\0';i++)
	{
      k=k+1;	
	}
    for (i=0;num[i]!='\0';i++)
	{
		t=k-i-1;
		rum[t]=num[i];
	}
	rum[k]='\0';

	
	
		printf("%s\n",rum);

	return 0;
}