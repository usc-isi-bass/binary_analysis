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
         int i;
	char name[4]={'l','q','z','s'};        //???????
         int a[4]={50,40,20,10};                //????????
	for(i=0;i<4;i++)                       //???????
		cout<<name[i]<<' '<<a[i]<<endl;
	return 0;
}

