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
int lai[1001]={0},zou[1001]={0};
int tongji[1001]={0};
int count=1,renshu=0;
char meiyong=0;
int shijianbiao[1001]={0};
cin>>lai[1];                    //??????????????????????????????????cin.get()?????????????
while(meiyong=cin.get()==',')
{
count++;
cin>>lai[count];
}
renshu=count;
count=1;
cin>>zou[1];                    //??????????????
while(meiyong=cin.get()==',')
{
count++;
cin>>zou[count];
}
int i=0;                        //????????
for(count=1;count<=renshu;count++)
for(i=lai[count];i<zou[count];i++)
{shijianbiao[i]++;}
int max=shijianbiao[0];
for(count=1;count<=1000;count++)
if(shijianbiao[count]>max)max=shijianbiao[count];
cout<<renshu<<" "<<max<<endl;
return 0;

}