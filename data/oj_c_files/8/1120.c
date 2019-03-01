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

int na,nb;
int *a,*b;
void input()
{	
scanf("%d %d",&na,&nb);	
a=(int*)malloc(na*sizeof(int));	
b=(int*)malloc(nb*sizeof(int));	
for(int i=0;i<na;i++)		
scanf("%d",&a[i]);	
for(int i=0;i<nb;i++)	
scanf("%d",&b[i]);
} 

int pfC(const void *x ,const void *y)
{
    int t;
    t=*((int*)x)-*((int*)y); 
    return t;
}
void order()
{	
qsort(a,na,sizeof(int),pfC); 	
qsort(b,nb,sizeof(int),pfC); 
}

void print()
{	
printf("%d",a[0]);
for(int i=1;i<na;i++)
printf(" %d",a[i]);	
for(int i=0;i<nb;i++)	
printf(" %d",b[i]);
}

main()
{	
input();
order();	
print();
}