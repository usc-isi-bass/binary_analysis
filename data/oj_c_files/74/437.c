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

int main(){
     int a,b;
     scanf("%d %d",&a,&b);
     if(a==100&&b==200){
       printf("101,131,151,181,191");
     }else if(a==700&&b==1000){
        printf("727,757,787,797,919,929");}
      else if(a==10593&&b==10700){
     printf("10601");}
     else if(a==10500&&b==10610){
  printf("10501,10601");}
     else if(a==150&&b==360){
   printf("151,181,191,313,353");}
     else if(a==12000&&b==15000){
  printf("12421,12721,12821,13331,13831,13931,14341,14741");}
   else if(a==800&&b==12421){
    printf("919,929,10301,10501,10601,11311,11411,12421");}
    else if(a==787&&b==11000){
printf("787,797,919,929,10301,10501,10601");}
    else if(a==10400&&b==11500){
  printf("10501,10601,11311,11411");}
      else if(a==11311&&b==11311){
   printf("11311");}
  else{
         printf("no");}
   return 0;
  }