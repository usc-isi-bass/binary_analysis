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


int main(){
    char a[32]={0},b[32]={0},x,i;
	int flag=0;
	do
	{
		scanf("%c",&x);
		if(x>='A'&&x<='Z')
		{
			a[(int)(x-'A')]++;
		}
		if(x>='a'&&x<='z')
		{
			b[(int)(x-'a')]++;
		}
	}while(x!='\n');
    for(i=0;i<26;i++)
	{
		if(a[i]!=0)
		{
			printf("%c=%d\n",'A'+i,a[i]);
			flag=1;
		}
	}
    for(i=0;i<26;i++)
	{
		if(b[i]!=0)
		{
			printf("%c=%d\n",'a'+i,b[i]);
            flag=1;
		}
	}
    if(flag!=1)
	{
		printf("No\n");
	}
	return 0;
}