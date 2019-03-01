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
int num[26]={0};
char sen[300];
char aa;
scanf("%s",sen);
int i,len;
len=strlen(sen);
for(i=0;i<len;i++)
{
    for(aa='a';aa<='z';aa++)
    {
         if(sen[i]==aa)
         {
             num[aa-97]=num[aa-97]+1;
          }
     }
}
for(aa='a';aa<='z';aa++)
{
    if(num[aa-97]>0)
    {
         printf("%c=%d\n",aa,num[aa-97]);
     }
}
if(num[0]==0&&num[1]==0&&num[2]==0&&num[3]==0)
printf("No");
return 0;
}