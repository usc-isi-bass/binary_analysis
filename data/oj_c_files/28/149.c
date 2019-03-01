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
int n[301];
int j,i=0,f=0;
for(j=0;j<301;j++) n[j]=0;

char c;
scanf("%c",&c);
while(c!='\n')
{if(c!=' ') {n[i]++;f=1;}
else if(c==' '&&f) {i++;f=0;}
scanf("%c",&c);}
printf("%d",n[0]);
for(j=1;j<=i;j++) printf(",%d",n[j]);
printf("\n");
}