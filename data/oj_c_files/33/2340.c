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
int n, i, j,m;
char a[1000],b[1000];
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
    for(j=0;1;j++)
    {
		a[j]=getchar();
		if(a[j]=='\n'){
			m=j;
			break;
		}
	}
	for(j=0;j<=m-1;j++){
		 switch(a[j])
        {
        case 'A':b[j]='T';break;
        case 'T':b[j]='A';break;
        case 'G':b[j]='C';break;
        case 'C':b[j]='G';break;
        }
    }
	for(j=0;j<=m-1;j++){
		printf("%c",b[j]);
	}
	putchar('\n');
	
}
return 0;
}