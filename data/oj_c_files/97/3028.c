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
    int i,er=0,ws=0,sh=0,wu=0,b=0,money;
    cin>>money;
    for(;;)
    {if(money/100>=1) {money=money-100;b=b+1;}
    else break;}//?????100??? 
    for(;;)
    {if(money/50>=1) {money=money-50;ws=ws+1;}
    else break;}//?????50??? 
    for(;;)
    {if(money/20>=1) {money=money-20;er=er+1;}
    else break;}
    for(;;)
    {if(money/10>=1) {money=money-10;sh=sh+1;}
    else break;}
    for(;;)
    {if(money/5>=1) {money=money-5;wu=wu+1;}
    else break;}
    cout<<b<<endl<<ws<<endl<<er<<endl<<sh<<endl<<wu<<endl<<money<<endl;
    return 0;
}
