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

int main ()
{
	int n,x,y,z,w,p;
	scanf("%d",&n);
	if(n==10000)
		printf("00001");
    else
		if(n>999) p=4;
	    else 
			if(n>99) p=3;
	    else 
			if(n>9) p=2;
			else p=1;
	x=n/1000;y=(n-x*1000)/100;z=(n-x*1000-y*100)/10;w=n-x*1000-y*100-z*10;
    switch(p)
	{	
	case 4: printf("%d%d%d%d",w,z,y,x);break;
	case 3: printf("%d%d%d",w,z,y);break;
	case 2: printf("%d%d",w,z);break;
	case 1: printf("%d",w);break;
	}
}
