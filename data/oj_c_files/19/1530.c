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

const long maxw=100;
const long maxL=100;

long n;
char word[maxw+1][maxL+1];

char s[maxL+1],t[maxL+1];

main(){
    long i;
    n=-1;
    do{
	scanf("%s",word[++n]);
    }while(getchar()!='\n');
    scanf("%s",s);
    scanf("%s",t);
    for(i=0;i<=n;i++){
	if(strcmp(s,word[i])==0)
	    printf("%s",t);
	else
	    printf("%s",word[i]);
	if(i==n)
	    printf("\n");
	else
	    printf(" ");
    }
    return 0;
}
