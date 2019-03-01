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
	char *p[100],str[100][100],c;
	int i,j;
	for(i=0;i<100;i++)
		*(p+i)=*(str+i);
	for(i=0;;i++)
	{
		scanf("%s",*(p+i));
	    if(c=getchar()=='\n')break;
	}
	
	printf("%s",*(p+i));
	for(j=i-1;j>=0;j--)
	    printf(" %s",*(p+j));

	


}