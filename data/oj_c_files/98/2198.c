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
	char word[40];
	int i,n,len,hang=0,shou=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
			{
			 scanf("%s",word);
			 len=strlen(word);
			 hang+=len;
			 hang+=1;
			 if(hang<=80)
						 { if(shou==1)
						   { printf("%s",word);hang-=1;}
							 else 	{ printf(" %s",word);}
						    shou=0;
						 }
			 else if(hang>80){printf("\n");printf("%s",word); shou=0;hang=len;}
			}

return 0;
}
