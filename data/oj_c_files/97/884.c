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
    int n,s100,s50,s20,s10,s5,s1;
    scanf("%d",&n);
    s100=n/100;
    int m=n-s100*100;
    if(m>=90){
    s50=1;
    s20=2;
    s10=0;
    if(m-90>=5){
    s5=1;
    s1=m-95;
    }
    else if(m-90<5){
    s5=0;
    s1=m-90;
    }
    }
    if(m<90&&m>=80){
    s50=1;
    s20=1;
    s10=1;
    if(m>=85){
    s5=1;
    s1=m-85;}
    else if(m<85){
    s5=0;
    s1=m-80;}
    }
    if(m<80&&m>=70){
    s50=1;
    s20=1;
    s10=0;
    if(m>=75){
    s5=1;
    s1=m-75;}
    if(m<75){
    s5=0;s1=m-70;}
    }
    if(m<70&&m>=60){
    s50=1;
    s20=0;
    s10=1;
    if(m>=65){
    s5=1;
    s1=m-65;}
    if(m<65){
    s5=0;
    s1=m-60;}
    }
     if(m<60&&m>=50){
    s50=1;
    s20=0;
    s10=0;
    if(m>=55){
    s5=1;
    s1=m-55;}
    if(m<55){
    s5=0;
    s1=m-50;}
    }
     if(m<50&&m>=40){
    s50=0;
    s20=2;
    s10=0;
    if(m>=45){
    s5=1;
    s1=m-45;}
    if(m<65){
    s5=0;
    s1=m-40;}
    }
      if(m<40&&m>=30){
    s50=0;
    s20=1;
    s10=1;
    if(m>=35){
    s5=1;
    s1=m-35;}
    if(m<35){
    s5=0;
    s1=m-30;}
    }
    if(m<30&&m>=20){
    s50=0;
    s20=1;
    s10=0;
    if(m>=25){
    s5=1;
    s1=m-25;}
    if(m<25){
    s5=0;
    s1=m-20;}
    }
    if(m<20&&m>=10){
    s50=0;
    s20=0;
    s10=1;
    if(m>=15){
    s5=1;
    s1=m-15;}
    if(m<15){
    s5=0;
    s1=m-10;}
    }
     if(m<10&&m>=0){
    s50=0;
    s20=0;
    s10=0;
    if(m>=5){
    s5=1;
    s1=m-5;}
    if(m<5){
    s5=0;
    s1=m;}
    }
    printf("%d\n%d\n%d\n%d\n%d\n%d\n",s100,s50,s20,s10,s5,s1);
    return 0;
}





