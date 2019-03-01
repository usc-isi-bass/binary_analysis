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

void f(int t){
char c[100];
if(scanf("%s",c)!=EOF){f(0);

cout<<c;if(!t)cout<<' ';}
}
int main(){
f(1);

return 0;
}
