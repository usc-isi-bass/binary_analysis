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

void main(){
char s[101],a[101],b[101],word[101];
int i=0,j,flag,n=0;
gets(s);
gets(a);
gets(b);
while(s[i-1]!=0||i==0){
while(s[i]!=' '&&s[i]!=0){
word[i-n]=s[i];
i++;
}
word[i-n]=0;
flag=1;
for(j=0;j<=strlen(a);j++)
if(a[j]!=word[j])
flag=0;
if(flag)
printf("%s",b);
else printf("%s",word);
if(s[i]!=0)printf("%c",s[i]);
i++;
n=i;
}
}