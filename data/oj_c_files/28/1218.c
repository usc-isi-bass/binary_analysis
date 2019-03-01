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
	int i,k=-1;
	char zjy[30000];
         gets(zjy);
	while(k==-1||zjy[k]!='\0')
		{
			k++;
			for(i=0;zjy[k]!=' '&&zjy[k]!='\0';k++)i++ ;
			if(i!=0)
                            {if(zjy[k]==' ')printf("%d,",i);
			 else printf("%d\n",i);}
		}
}