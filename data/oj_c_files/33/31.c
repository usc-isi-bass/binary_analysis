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

struct DNA{
	char zfc[255];
}a[1000];
int main()
{
	int n,i,j,t;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	gets(a[i].zfc);   
		t=strlen(a[i].zfc);
		for(j=0;j<t;j++){
			if(a[i].zfc[j]=='A')
				a[i].zfc[j]='T';
	        else if(a[i].zfc[j]=='T')
		        a[i].zfc[j]='A';
	        else if(a[i].zfc[j]=='C')
		        a[i].zfc[j]='G';
	        else if(a[i].zfc[j]=='G')
		        a[i].zfc[j]='C';
		}
		puts(a[i].zfc);   
	}
    return 0;
}