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
	int i,j;
	char *p,s[100][100],c;
	c=' ';
	i=0;
	p=*s;
	while (c==' ') 
	{
		scanf("%s",p);
		c=getchar();
		i++;
        p=*(s+i);
	}
    for (j=i-1;j>0;j--)
	{
		p=*(s+j);
		printf("%s ",p); 
	}
	p=*s;
    printf("%s\n",p);
}