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

void main()
{
	char a[100],b[100];
	int s,i,k,n,m;
	scanf("%d",&n);
	for(m=0;m<=n-1;m++)
	{
	 scanf("%s",a);
	 s=strlen(a);
	 for(i=0;i<=s-1;i++)
  	  b[i]=a[s-1-i];
	  k=s-3;
	  if((b[2]=='i')&&(b[1]=='n'))
	  k=s-4;
	  for(i=0;i<=k;i++)
	  printf("%c",a[i]);
	  printf("\n");
	}
}