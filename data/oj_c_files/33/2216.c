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
	int n;
	scanf("%d",&n);
	char a,b;
	scanf("%c", &a);
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;;j++)
		{
			scanf("%c",&a);
			 if(a=='A')
			 {
				 b='T';
				printf("%c",b);
			 }
			 if(a=='T')
			 {
				 b='A';
				printf("%c",b);
			 }
			 if(a=='G')
			 {
				 b='C';
				printf("%c",b);
			 }
			 if(a=='C')
			 {
				 b='G';
				printf("%c",b);
			 }
			 if(a=='\n')
			 {
				 printf("\n");
				 break;
			 }
		}
	}
	return 0;
}