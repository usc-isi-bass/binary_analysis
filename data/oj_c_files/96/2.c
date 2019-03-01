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

const long maxL=100;

char a[maxL+1];

long ans[maxL+1];

main(){
    long i,l,rest;
    scanf("%s",a);
    l=strlen(a);
    rest=0;
    for(i=0;i<l;i++){
	rest=rest*10+a[i]-'0';
	ans[i]=rest/13;
	rest%=13;
    }
    i=0;
    while((ans[i]==0) && (i<l-1))
	i++;
    for(;i<l;i++)
	printf("%ld",ans[i]);
    printf("\n%ld\n",rest);
    return 0;
}
