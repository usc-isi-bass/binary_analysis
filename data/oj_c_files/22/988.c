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

int main(void)
{
    int x=0,y=0,z=0;
    scanf("%d",&x);
    int k=0;
    while(scanf(",%d",&z))
    {
    	k++;
    	if(z>x) {y=x;x=z;}
    	if(z<x&&z>y) y=z; 
    }
    if(k==0||y==0)printf("No");
    else printf("%d",y);
    return 0;
}