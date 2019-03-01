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
	int n,i,len=0;
	char word[20];
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	   scanf("%s", word);
	   len=len+1+strlen(word);
	   if(i==0)
	   {
		   printf("%s",word);
	   
	   }
	   else 
	   {
		   if(len<=81)
		   printf(" %s",word);
	        else
			{
		   printf("\n");
		   printf("%s",word);
		   len=strlen(word)+1;
			}
	  }
	}
	return 0;
}