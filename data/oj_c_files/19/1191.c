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

main()
{
  /*char a[100][100];
  int i;
  for(i=0;;i++)
  {
	  scanf("%s",a[i]);
	  if(getchar()=='\n')break;
  }*/
	char *p[100],*a,*b;
	int i,j;
	for(i=0;;i++)
	{
		p[i]=(char *)malloc(100);
		scanf("%s",p[i]);
		if(getchar()=='\n')break;
	}
	a=(char *)malloc(100);
	scanf("%s",a);
    b=(char *)malloc(100);
	scanf("%s",b);
	for(j=0;j<=i;j++)
		if(strcmp(p[j],a)==0)p[j]=b;
	for(j=0;j<i;j++)
		printf("%s ",p[j]);
    printf("%s",p[i]);
}