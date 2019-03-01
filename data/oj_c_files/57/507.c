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
	int n,i,k;
	char c[32]="\0";
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	{   
		
		scanf("%s",c);
		char o[32]="\0";
		k=strlen(c);char v[32]="\0";
		strncpy(v,c,k-3); strcat(v,"ing"); 
		if(strcmp(v,c)==0) {strncpy(o,c,k-3);printf("%s\n",o);}
		else {strncpy(o,c,k-2);printf("%s\n",o);}
    }
}


 
 
 
