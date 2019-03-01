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
int n,i,a,b;
int s[200];
int p[200];
a=0;
b=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&s[i],&p[i]);
if(s[i]==0&&p[i]==1||s[i]==1&&p[i]==2||s[i]==2&&p[i]==0){
a++;
}
else if(p[i]==0&&s[i]==1||p[i]==1&&s[i]==2||p[i]==2&&s[i]==0){
b++;
}
else if(p[i]==0&&s[i]==0||p[i]==1&&s[i]==1||p[i]==2&&s[i]==2){
a=a;
b=b;
}
}
if(a>b){
printf("A");
}
if(a<b){
printf("B");
}
if(a==b){
printf("Tie");
}
return 0;
}