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

int num1[1000]={0},num2[1000]={0},a,b;

void shuru()
{int i;
 cin>>a;
 cin>>b;
 for(i=0;i<a;i++) cin>>num1[i];
 for(i=0;i<b;i++) cin>>num2[i];
     }

void sequence()
{int i,j,temp;
 for(i=0;i<a;i++) for(j=i+1;j<a;j++) if(num1[i]>num1[j]) {temp=num1[i];num1[i]=num1[j];num1[j]=temp;}
 for(i=0;i<a;i++) for(j=i+1;j<b;j++) if(num2[i]>num2[j]) {temp=num2[i];num2[i]=num2[j];num2[j]=temp;}
     }

void shuchu()
{int i;
 for(i=0;i<a;i++) cout<<num1[i]<<' ';
 for(i=0;i<b-1;i++) cout<<num2[i]<<' ';
 cout<<num2[b-1]<<endl;
     }

int main()
{shuru();
 sequence();
 shuchu();
 return 0;
    }
