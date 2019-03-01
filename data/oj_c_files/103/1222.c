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

main()
{
	char a[1002];
	scanf("%s",a);
	int i;
	for ( i=0;a[i]!='\0';i++){
		if(a[i]>'Z')
		a[i]=a[i]-'a'+'A';
	}
	int l=1;
	for (i=1;a[i]!='\0';i++){
		if(a[i]==a[i-1])
		l++;	
	else{
		printf("(%c,%d)",a[i-1],l);
		l=1;
	}}
	printf("(%c,%d)",a[i-1],l);
	
} 

 