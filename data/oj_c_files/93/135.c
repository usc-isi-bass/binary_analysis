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

int main(int argc, char* argv[])
{
    int d,m=0;
	scanf("%d",&d);
    if(d%3==0){
	printf("3");
	m++;}
if(d%5==0){
	if(m==1) printf(" ");
	printf("5");
	m++;}
if(d%7==0){
    if(m!=0) printf(" ");
	printf("7");
	m++;}
if(m==0){
  printf("n");
}
	return 0;
}