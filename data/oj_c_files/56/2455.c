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

//????????
int main()
{int k,i,a[5];cin>>k;//k???????i??????a[5]?k?????????
for(a[0]=0;a[0]<10;a[0]++)
for(a[1]=0;a[1]<10;a[1]++)
for(a[2]=0;a[2]<10;a[2]++)
for(a[3]=0;a[3]<10;a[3]++)
for(a[4]=0;a[4]<10;a[4]++)
if(a[0]+10*a[1]+100*a[2]+1000*a[3]+10000*a[4]==k)
{for(i=0;i<5;i++){if(a[i]!=0)cout<<a[i];};}
return 0;}