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
int sz[6];
int az[6];
int bz[7];
sz[1]=100;
sz[2]=50;
sz[3]=20;
sz[4]=10;
sz[5]=5;
sz[6]=0.5;
int a;
scanf("%d",&a);
bz[1]=a;
for(int i=1;i<7;i++)
{az[i]=bz[i]/sz[i];
bz[i+1]=bz[i]-az[i]*sz[i];}
az[6]=bz[7];
for(int j=1;j<7;j++)
printf("%d\n",az[j]);
return 0;
}

