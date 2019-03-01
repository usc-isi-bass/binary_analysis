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
	int n,i,j,len;
	char a[33];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a);
		len=strlen(a);
		if(len>3){
		if(a[len-1]=='r'&&a[len-2]=='e')
			a[len-2]='\0';
		if(a[len-1]=='y'&&a[len-2]=='l')
			a[len-2]='\0';
		if(a[len-1]=='g'&&a[len-2]=='n'&&a[len-3]=='i')
			a[len-3]='\0';
		}
		printf("%s\n",a);
		if(len<=3){
			printf("%s\n",a);
		}
	}
	return 0;
}