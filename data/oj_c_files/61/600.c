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
int a[21],m,p;
a[0]=0;
a[1]=1;
for(int i=2;i<21;i++){
        a[i]=a[i-1]+a[i-2];
        }
int n;
scanf("%d",&n);
for(int j=0;j<n;j++){
    scanf("%d",&p);
    printf("%d\n",a[p]);
}
        int hou;
        scanf("%d",&hou);
return 0;
}
