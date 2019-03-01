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

int main(){
	int n,j,i,l;
	char z[256];scanf("%d",&n);
	for(j=0;j<n;j++)
		
	
	{scanf("%s",z);l=strlen(z);
	for(i=0;i<l;i++){if(z[i]=='A')z[i]='T';else{if(z[i]=='T'){z[i]='A';}else{if(z[i]=='C'){z[i]='G';} else{ z[i]='C';};};};}

	printf("%s\n",z);}
return 0;
}