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
int a[3]={0},b[12]={31,28,31,30,31,30,31,31,30,31,30,31},sum=0,i;
cin>>a[0]>>a[1]>>a[2];
if (a[0] % 4 == 0 && a[0] %100 !=0 || a[0]%400 ==0) b[1]=29;
for (i=0;i<a[1]-1;i++) sum+=b[i];
sum+=a[2];
cout<<sum;



}