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
	int i ,j;
   char num[5];
   for(i=0;i<5;i++)
   
   scanf("%c",&num[i]);
   for(j=4;j>=0;j--)
  	if (num[j]!=0)
	printf("%c",num[j]);
   return 0;
  
}