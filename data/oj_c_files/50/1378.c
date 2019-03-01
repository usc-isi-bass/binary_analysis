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

int main() {
int w;
scanf("%d",&w);
if (w==6) {
   w=-1;
}
if (w==7) {
   w=0;
}
int s=12;
if (s%7==(5-w)) {
   printf("1\n");
}
for (int i=2;i<=12;i++) {
    if (i==2||i==4||i==6||i==8||i==9||i==11) {
       s=s+31;
    }
    if (i==3) {
       s=s+28;
    }
    if (i==5||i==7||i==10||i==12) {
       s=s+30;
    }
    if (s%7==(5-w)) {
       printf("%d\n",i);
    }
}
return 0;
} 
