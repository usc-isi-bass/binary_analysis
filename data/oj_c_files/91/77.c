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
int m,n,i,j,k;
char a[123],b[123];
gets(a);
m=strlen(a);
  for(i=0;i<m-1;i++)
  {
  b[i]=((int)(a[i])+(int)(a[i+1]));
  }
  b[m-1]=((int)(a[m-1])+(int)(a[0]));
for(j=0;j<m;j++)
		printf("%c",b[j]);
	return 0;



}
 
