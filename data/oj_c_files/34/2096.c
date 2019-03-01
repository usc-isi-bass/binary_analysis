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
{   int ji(int x);
    int ou(int y);
	int n;
    scanf("%d",&n);
	while(1){
		if(n!=1){
			if(n%2==0){
				n=ou(n);
			}
			else{
				n=ji(n);
			}
		}
		else{
			printf("End");
			break;
		}
	}
	return 0;
}
int ji(int x)
{
	int z;
	z=x*3+1;
	printf("%d*3+1=%d\n",x,z);
	return(z);
}
int ou(int x)
{
	int z;
	z=x/2;
	printf("%d/2=%d\n",x,z);
	return(z);
}