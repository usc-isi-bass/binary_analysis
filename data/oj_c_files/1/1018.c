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

int t;
int f(int a,int b){
	int i;
    for(i=a;i*i<=b;i++){
        if(b%i==0){
            t++;
            f(i,b/i);
        }
    }
return t;
}
void main()
{
    int n,i,result[1000],a[1000];
    scanf("%d",&n);
	
    for(i=0;i<n;i++){
		t=1;
        scanf("%d",&a[i]);
        result[i]=f(2,a[i]);
       
    }
 for(i=0;i<n;i++)
	printf("%d\n",result[i]);
}

