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

main()
{
int i,a,b,len,len2,x,de=0;
char str[1025],str2[1025];
scanf("%d%s%d",&a,str,&b);
len=strlen(str);

for(i=0;i<len;i++)
{
if(str[i]>=97) x=str[i]+10-'a';
else if(str[i]>='A'&&str[i]<='Z') x=str[i]+10-'A';
else x=str[i]-'0';
de=de*a+x;
}
for(i=0;i<1025;i++)
{
if(de%b>9) str2[i]=de%b+55;
else str2[i]=de%b+48;
de=de/b;
if(de==0) {str2[i+1]='\0';break;}
}

len2=strlen(str2);
for(i=0;i<len2;i++)
{
printf("%c",str2[len2-i-1]);
}
printf("\n");
}