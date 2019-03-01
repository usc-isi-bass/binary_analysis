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
{char max,s1[100],s2[100];
int l,i,j;
	while (scanf("%s%s",s1,s2)!=EOF)
{
	l=strlen(s1);
	max='\0';
	for(i=0;i<=l-1;i++){
		if(s1[i]>max){j=i;max=s1[i];}}
	for(i=0;i<=j;i++)
		printf("%c",s1[i]);
	printf("%s",s2);
	for(i=j+1;i<=l-1;i++)printf("%c",s1[i]);
putchar('\n');	
}
}


