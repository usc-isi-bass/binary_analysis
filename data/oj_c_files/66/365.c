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
 int a=0,b=0,c=0,y=0,n=0;
 scanf("%d %d %d",&a,&b,&c);
 a=a-1;
 b=b-1;
 y=a*1+a/4-a/100+a/400;
 a=a+1;
 if((a%100==0&&a%400!=0)||(a%4!=0))
 {
 if(b==0){
  b=0;
 } 
 if(b==1){
  b=31;
 }
 if(b==2){
  b=31+28;
 }
 if(b==3){
  b=31+28+31;
 }
 if(b==4){
  b=31+28+31+30;
 }
 if(b==5){
  b=31+28+31+30+31;
 }
 if(b==6){
  b=31+28+31+30+31+30;
 }
 if(b==7){
  b=31+28+31+30+31+30+31;
 }
 if(b==8){
  b=31+28+31+30+31+30+31+31;
 }
 if(b==9){
     b=31+28+31+30+31+30+31+31+30;
 }
 if(b==10){
     b=31+28+31+30+31+30+31+31+30+31;
 }
 if(b==11){
       b=31+28+31+30+31+30+31+31+30+31+30;
 }
 }
 if((a%400==0)||(a%4==0&&a%100!=0)){
  if(b==0){
  b=0;
 } 
  if(b==1){
  b=31;
 }
 if(b==2){
  b=31+29;
 }
 if(b==3){
  b=31+29+31;
 }
 if(b==4){
  b=31+29+31+30;
 }
 if(b==5){
  b=31+29+31+30+31;
 }
 if(b==6){
  b=31+29+31+30+31+30;
 }
 if(b==7){
  b=31+29+31+30+31+30+31;
 }
 if(b==8){
     b=31+29+31+30+31+30+31+31;
 }
 if(b==9){
     b=31+29+31+30+31+30+31+31+30;
 }
 if(b==10){
     b=31+29+31+30+31+30+31+31+30+31;
 }
 if(b==11){
       b=31+29+31+30+31+30+31+31+30+31+30;
 }
 }
 n=y+b+c;
    if(n%7==0){
 printf("Sun.");
 }
 if(n%7==1){
  printf("Mon.");
 }
 if(n%7==2){
  printf("Tue.");
 }
 if(n%7==3){
  printf("Wed.");
 }
 if(n%7==4){
  printf("Thr.");
 }
 if(n%7==5){
  printf("Fri.");
 }
 if(n%7==6){
  printf("Sat.");
 }
 return 0;
}

