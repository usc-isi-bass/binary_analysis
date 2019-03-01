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

int main ()
{
	char a[100],b[100];
	int i=0,n,j=0;
	gets(a);
	n=strlen(a);
	while (i<n){
		b[j]=a[i];
	    if(a[i]!=' '){
			j++;
		}
		else if(a[i]==' '){
			if(a[i+1]!=' '&&a[i-1]!=' '){
                b[j]=' ';
				j++;
			
			}
		     else if(a[i+1]!=' '&&a[i-1]==' '){
				b[j]=' ';
				j++;
				
			}
		}



		i++;
	}
	for(i=0;i<j;i++){
		printf("%c",b[i]);
	}
 
	return 0;
		
	
}