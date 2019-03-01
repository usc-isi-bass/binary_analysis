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
int n;
cin>>n;
int w[100];int t=0;
for(int i=0;i<n;i++){int c;cin>>c;if(c%2){w[t]=c;t++;}}
sort(&w[0],&w[t]);
cout<<w[0];
for(int j=1;j<t;j++)cout<<','<<w[j];
return 0;
}
