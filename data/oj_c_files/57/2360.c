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
{   int n,i,j,l;
    char w[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%s",w);
	 l=strlen(w);
     if(w[l-1]=='y'&&w[l-2]=='l')
	    for(j=0;j<=l-3;j++)
	        printf("%c",w[j]);
     else if(w[l-1]=='r'&&w[l-2]=='e')
	    for(j=0;j<=l-3;j++)
	       printf("%c",w[j]);
	 else
         for(j=0;j<=l-4;j++)
	        printf("%c",w[j]);
	 printf("\n");
	}
	return 0;
}