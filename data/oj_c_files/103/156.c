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

//??(12-5) ??????

 int main(void)
 {
    int i=0,n=1;
	char k[1001];                       //??????????????
	scanf("%s",k); 
	for(i=0;k[i]!='\0';i++)
	{
		if ((k[i]>='a')&&(k[i]<='z'))
			k[i]=k[i]-'a'+'A';         //??????????????
	}

	for(i=1;k[i]!='\0';i++)
	{
	  if (k[i]==k[i-1])
		  n++;
	  else
	  {
		  printf("(%c,%d)",k[i-1],n);
		  n=1;
	  }
	 
	}
     printf("(%c,%d)",k[i-1],n);
	return 0;
 }