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


int iflet (char a)
{
	int test=0;
	if ((a>='a' && a<='z') || (a>='A' && a<='Z'))
		test=1;
	return test;
}

void main ()
{
	char ori[100], out[100], in[100];
	char *pori=ori, *pout=out, *pin=in, temp[20];
	int k;

	gets(ori);
	gets(out);
	gets(in);

	for (;*pori!='\0';)
	{
		if (*pori==' ')
		{
			printf("%c",*pori);
			pori++;
		}

		else if ((iflet(*pori)==1 && *(pori-1)==' ') || (pori=ori))
		{

			for (k=0;*(pori+k)!=' ' && *(pori+k)!='\0';k++)
				temp[k]=*(pori+k);
			temp[k]='\0';

			if (strcmp(temp,out)==0)
				printf("%s",in);

			else
				printf("%s",temp);

			pori=pori+k;
		}
		
	}
}
