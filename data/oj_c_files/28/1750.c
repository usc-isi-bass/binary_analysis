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
char s[1000],a[100][100];
int i,j=0,n=0,len;
gets(s);
len=strlen(s);
for(i=0;i<len;i++)
{
if(s[i]!=' '){
a[n][j]=s[i];
j++;
}else{
a[n][j]='\0';
n++;
j=0;
}
}
a[n][j]='\0';
for(i=0;i<n;i++)
{
if(strlen(a[i])!=0){
printf("%d,",strlen(a[i]));
}
}
printf("%d",strlen(a[n]));
return 0;
} 
