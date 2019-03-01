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
int a;
char zfc[6],exc[6];
scanf("%s",zfc);
a=strlen(zfc);
for(int i=0;i<a/2;i++){
exc[i]=zfc[i];
zfc[i]=zfc[a-i-1];
zfc[a-i-1]=exc[i];}
printf("%s\n",zfc);
return 0;
}