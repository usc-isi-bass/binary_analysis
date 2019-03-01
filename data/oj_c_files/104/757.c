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

int s(int x,int y);
int main(int argc)
{  int x,y;
    cin>>x>>y;
	cout<<s(x,y);          //??????
	return 0;

}
int s(int x,int y)
{
 if(x==y)
 {return x;}        //?????????????
 else if(x>y)
 {return s(x/2,y);}              //?????????????2????
 else
 {return s(x,y/2);}
};