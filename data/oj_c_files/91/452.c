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
	char st[104]={"\0"},str[104]={"\0"};
	gets(st);
	for(i=103;i>=0;i--)
	{
		if(*(st+i)!='\0')
			break;
	}
    for(j=0;j<i;j++)
		*(str+j)=*(st+j)+*(st+j+1);
	*(str+i)=*(st+i)+*(st+0);
	for(k=0;k<=i;k++)
		printf("%c",*(str+k));
	return 0;
}
