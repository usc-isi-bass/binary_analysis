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
	int x;
	scanf("%d",&x);
	if(fmod(x,3)==0 && fmod(x,5)==0 && fmod(x,7)==0)
		printf("%d %d %d\n",3,5,7);
    if(fmod(x,3)==0 && fmod(x,5)==0 && fmod(x,7)!=0)
        printf("%d %d\n",3,5);
	if(fmod(x,5)==0 && fmod(x,7)==0 && fmod(x,3)!=0)
		printf("%d %d\n",5,7);
	if(fmod(x,3)==0 && fmod(x,7)==0 && fmod(x,5)!=0)
        printf("%d %d\n",3,7);
	if(fmod(x,3)==0 && fmod(x,5)!=0 && fmod(x,7)!=0)
        printf("%d\n",3);
    if(fmod(x,3)!=0 && fmod(x,5)==0 && fmod(x,7)!=0)
        printf("%d\n",5);
    if(fmod(x,3)!=0 && fmod(x,5)!=0 && fmod(x,7)==0)
		printf("%d\n",7);
	if(fmod(x,3)!=0 && fmod(x,5)!=0 && fmod(x,7)!=0)
		printf("%c\n",'n');
}