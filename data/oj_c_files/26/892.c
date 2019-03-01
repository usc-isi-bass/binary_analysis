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

int main(int argc, char* argv[])
{ 
int q=0,i,j;
char tra[1000],yaode[1000];
gets(tra);
for(i=0,j=0;i<1000;i++)	
if(tra[i]!=' ')
{
		yaode[j]=tra[i];
	    j++;
		q=0;
	}
	else
		if(tra[i]==' '&&q==0){
			yaode[j]=tra[i];
			q++;
			j++;
		}
		else 
			if(tra[i]=='.'){
				yaode[j]=tra[i];
				break;
			}
			printf("%s",yaode);

	return 0;
}



