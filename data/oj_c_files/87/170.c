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

int main(){
int a,b,c,d,e,f,g,h,i,k,z,s=0;
for(k=0;k<10;k++){
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);if(d==0&&e==0&&f==0&&a==0&&b==0&&c==0){break;}
g=b*60+c;
h=e*60+f;
i=(d-a+12)*3600;
z=i+h-g;
printf("%d\n",z);

}

return 0;
}
