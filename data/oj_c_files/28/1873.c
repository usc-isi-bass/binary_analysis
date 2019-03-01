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
	int i=0,num=0,l=0,temp=0;
	char words[LEN];
	gets(words);
	l=strlen(words);
	for(i=0;i<l;i++)
	{
	  if(words[i]!=' ')
	  {
	    num++;
		if(i==l-1)
		{
		  printf("%d",num);
		}
	  }
	  if(words[i]==' ')
	  {
		if(num!=0)
		{
	      printf("%d",num);
		  printf(",");
		}
		num=0;
	  }
	}
	return 0;
}

