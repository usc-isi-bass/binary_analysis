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
	int n,i,j,x;
	char a[100][20];

	scanf("%d",&n);

	for(i=0;i<n;i++){
		x=0;
		
        
		scanf("%s",&a[i]);
		
		
		x=strlen(a[i]);
		if(a[i][x-2]=='n'){
			a[i][x-3]='\0';
			a[i][x-2]='\0';
			a[i][x-1]='\0';
		}
		else{
			a[i][x-2]='\0';
			a[i][x-1]='\0';
			
		}
		
	}

	for(i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
	return 0;
}

