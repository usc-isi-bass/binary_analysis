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
	int n,i;
	char zfc[1000][256],*a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",zfc[i]);
	
		for(a=zfc[i];*a!='\0';a++){
			if(*a=='A'){
			 *a='T';	
			}else if(*a=='T'){
               	            *a='A';
			}else if(*a=='C'){
               	 *a='G';
			}else if(*a=='G'){
               	 *a='C';
			}

		}
printf("%s\n",zfc[i]);		
		
		
	}
	return 0;
}

