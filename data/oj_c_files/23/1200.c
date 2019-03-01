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
int i=0,n,j=0,k,sub,first=0;
char str[100],s[100]="",word[100],t[100]="";
gets(str);
n=strlen(str);
for(i=0;i<=n-1;i++) {
j=0;
while(str[i]!=' '&&str[i]!='\0') {
word[j]=str[i];
i++;
j++;
}

sub=strlen(s);
for (k=0;k<=j-1;k++) {
t[k]=word[k];
}
if (first!=0) t[j]=' ';
for (k=0;k<=sub-1;k++) {
t[j+k+1]=s[k];
}

for (k=0;k<=sub+j;k++) {
s[k]=t[k];
}
first=1;
}
puts(s);
}