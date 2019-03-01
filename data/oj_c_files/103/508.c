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

char before[1050]={0},after[1050]={0};  //??????????? 
int record[1050]={0};  //?????????????? 

int main()
{int i,j,k;
 cin>>before;
 i=j=0; 
 while(before[i]!='\0')  //????????? 
   {after[j]=before[i]; //???? 
    for(;(before[i]==before[i+1])||(before[i]==before[i+1]+'A'-'a')||(before[i]==before[i+1]-'A'+'a');i++) record[j]++;  //????????? 
    record[j]++;
    i++; 
    j++; //??????????? 
    } 
 for(i=0;after[i]!='\0';i++) //????
  {if(after[i]>='a'&&after[i]<='z') after[i]=after[i]-'a'+'A';  //?????
   cout<<'('<<after[i]<<','<<record[i]<<')'; 
   } 
return 0;
 } 