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
    char str1[250],str2[250],str3[250],str4[250],str5[251];
    int a,b,c,i,j,k,p,q,r,s,t,u,v,w,x,y;
    scanf("%s\n",str1);
    scanf("%s",str2);
    a=strlen(str1);
    b=strlen(str2);
    if(a<b)
    {for(i=0;i<=249;i++)
    {str3[i]=str1[i];
    str1[i]=str2[i];
    str2[i]=str3[i];}}//?????????????????1????2 
    a=strlen(str1);
    b=strlen(str2);
    c=a-b;
    if(c>0)
    {
    for(j=0;j<=c-1;j++)
    str4[j]='0';
    for(k=c;k<=249;k++)
    str4[k]=str2[k-c];}
    else
    {
    for(p=0;p<=249;p++)
    str4[p]=str2[p];}//???????????????0 
    for(u=0;u<=250;u++)
    str5[u]='0';
    for(q=a-1;q>=0;q--)
    {
    r=str1[q]+str4[q]+str5[q+1]-144;
    if(r>9)
    {str5[q+1]=r-10+'0';
     str5[q]=str5[q]+1;}
    else
    str5[q+1]=r+'0';
    }//????? 
    for(v=0;v<=a;v++)
    {w=str5[v]-48;
    if(w!=0)
    {x=v;
    break;}
    else
    x=251;
    }
    if(251==x)
    printf("%d",0);
    else    
    {for(y=x;y<=a;y++)
    printf("%c",str5[y]);}//???????0?????? 
    //printf("%s",str5);
        }
