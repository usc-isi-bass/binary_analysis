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
char b[30],m1[30],m2[30];
int max=0,min=40;
for (int i=0;;i++)
{
scanf("%c",&b[i]);
if (b[i]=='\n'||b[i]==0) 
    {
    b[i]=0;
    if(i>max) {max=i;strcpy(m1,b);}
    if (i<min&&i>0) {min=i;strcpy(m2,b);}
    break;
    }

if (b[i]==' '||b[i]==',') 
    {
    b[i]=0;
    if(i>max) {max=i;strcpy(m1,b);}
    if (i<min&&i>0) {min=i;strcpy(m2,b);}
    i=-1;
    }
}
printf("%s",m1);
printf("\n");
printf("%s",m2);
}
