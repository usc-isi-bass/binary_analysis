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
	
int i,j,k=0,l,m,n;
	
char word[40];
	
scanf("%d",&n);
	
scanf("%s",word);
	
k=k+strlen(word)+1;
	
printf("%s",word);
	
for(i=2;i<=n;i++)
	
{
	
	
scanf("%s",word);
	
	
k=k+strlen(word)+1;
	
	
if(k<=81) 
	
	
{
	
	
	
printf(" ");
	
	
	
printf("%s",word);
	
	
}
	
	
else
	
	
{
	
	
	
printf("\n%s",word);
	
	
   k=strlen(word)+1;
	
	
}
	
}
	
return 0;
}
