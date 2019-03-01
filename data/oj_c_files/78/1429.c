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
    char a[5]={"lqzs"};
    int b[4]={50,40,20,10};

    for(int i=0;i<4;i++)
        cout<<a[i]<<" "<<b[i]<<endl;
	return 0;
}