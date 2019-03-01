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
	int i,n,t,l,j;
	char a[35];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a);
		l=strlen(a);
		if((a[l-1]=='y'&&a[l-2]=='l')||(a[l-1]=='r'&&a[l-2]=='e')){
		for(j=0;j<=l-3;j++){
			if(j<l-3)
				printf("%c",a[j]);
			if(j==l-3)
				printf("%c\n",a[j]);
			}
		}
		else if((a[l-1]=='g'&&a[l-2]=='n'&&a[l-3]=='i')){
			for(j=0;j<l-3;j++){
				if(j<l-4)
				printf("%c",a[j]);
			if(j==l-4)
				printf("%c\n",a[j]);
			}
		}
	}


		

	return 0;
}



