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

void main()
{
	int a;
	scanf("%d",&a);
	if(a/10==0)printf("%d",a);
	else if(a/100==0){a=a/10+(a-a/10*10)*10;printf("%d",a);}
	else if(a/1000==0){a=a/100+(a-a/100*100)/10*10+(a-a/10*10)*100;printf("%d",a);}
	else if(a/10000==0){a=a/1000+(a-a/1000*1000)/100*10+(a-a/100*100)/10*100+(a-a/10*10)*1000;printf("%d",a);}
	else {a=a/10000+(a-a/10000*10000)/1000*10+(a-a/1000*1000)/100*100+(a-a/100*100)/10*1000+(a-a/10*10)*10000;printf("%d",a);}
}
