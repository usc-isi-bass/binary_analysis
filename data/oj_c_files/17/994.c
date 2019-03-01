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
	int i,j,k;
	char a[150]={'0'},b[150]={'0'};
	for(;~scanf("%s",&a);)
{
	i=strlen(a);
	for(j=0;j<i;j++) {
	if(a[j]=='(') b[j]='$';
	else if(a[j]==')') b[j]='?';
	else b[j]=' ';
	}
	for(j=0;j<i;j++)
	for(k=j-1;k>=0;k--){
		if(b[k]=='$'&&b[j]=='?') 
		{b[k]=' ';b[j]=' ';}
	}
    for(k=0;k<i;k++)
    printf("%c",a[k]);
    printf("\n");
    for(k=0;k<i;k++)
    printf("%c",b[k]);
    printf("\n");
  
}
  return 0;
}