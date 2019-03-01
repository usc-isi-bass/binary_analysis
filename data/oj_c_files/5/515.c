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

int main(){int i,j=0;float x;char m[501],n[501];
scanf("%f",&x);
scanf("%s",m);scanf("%s",n);if(strlen(m)!=strlen(n)){printf("error");return 0;}
for(i=0;n[i];i++){if(m[i]!='A' && m[i]!='T' && m[i]!='C' && m[i]!='G' || (n[i]!='A' && n[i]!='T' && n[i]!='C' && n[i]!='G')){printf("error");return 0;}if(m[i]==n[i])j++;}
if(1.0*j/i>x)printf("yes");
if(1.0*j/i<x)printf("no");scanf("%d",&i);return 0;}
