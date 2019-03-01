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

int s(int x);
int main()
{int i;
	int n;
	scanf("%d",&n);if(n<5){printf("empty");return 0;}
	for(i=2;i<n;i++){if(s(i)==1 && s(i+2)==1){printf("%d %d\n",i,i+2);}
		
	}
    
}
int s(int x){int k;
	for(k=2;x%k!=0;k++){}
	if(k==x){return 1;}
	else{}return 0;}