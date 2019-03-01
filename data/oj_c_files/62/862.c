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
	char zifu[300],tihuan[300];
	int k,i=0;
	gets(zifu);
	for(k=0;k<strlen(zifu);k++)
	{
		if((zifu[k]!=' ')||(zifu[k]==' '&&zifu[k+1]!=' '))
		{
		   tihuan[i]=zifu[k];
		   i++;
		}
        else
		{
		   continue;
		}
	}
	for(k=0;k<i;k++)
	{
	printf("%c",tihuan[k]);
    }
	return 0;
}