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

int indent(char zfc[81]);
int main(int argc, char* argv[])
{   int n,s,i;
    char zfc[81];
    scanf("%d\n",&n);
	for(i=0;i<n;i++){
	gets(zfc);
    s=indent(zfc);
	printf("%d\n",s);
	}
	return 0;
}
int indent(char zfc[81]){
	int i,s=0,sum=0;
	char *p=zfc;
	if((*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z')||(*p=='_')){
		for(i=1;i<strlen(zfc);i++){
			if((*(p+i)>='a'&&*(p+i)<='z')||(*(p+i)>='A'&&*(p+i)<='Z')||(*(p+i)=='_')||(*(p+i)>='0'&&*(p+i)<='9'))
		    sum++;
		}
	}
	if(sum==strlen(zfc)-1){
	s=1;
	}
    return s;
}