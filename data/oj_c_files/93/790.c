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
int x;
int flag=0;
scanf("%d",&x);
if(x%3==0){
if(flag==0)
{printf("3");flag=1;}
else{printf(" 3");}
}
if(x%5==0){
if(flag==0)
{printf("5");flag=1;}
else{printf(" 5");}
}
if(x%7==0){
if(flag==0)
{printf("7");flag=1;}
else{printf(" 7");}
}
if(x%3!=0 && x%5!=0 && x%7!=0)
{printf("n");}
return 0;
}