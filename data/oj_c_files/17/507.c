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

int main()                      //???????????????????? 
{
    char a[110]={'\0'};
    while(cin.getline(a,110,'\n'))          //??n??? 
    {
    int left=0,right=0,tema=0;
    int b[110]={0};
    char d[110]={'\0'};
    for(int i=1;a[i-1]!='\0';i++)
    {cout<<a[i-1];}
    cout<<endl;
    for(int i=1;a[i-1]!='\0';i++)
    {
    d[i-1]=' ';
    if(a[i-1]=='(')              //????????left+1???????? 
    {left++;
    b[tema++]=i-1;
    }
    else if(a[i-1]==')')              //???????????? 
    {
    if(left<=right)             //????????????????? 
    {d[i-1]='?';}  
    if(left>right)                         //?????????? 
    {right++;tema--;}                      //?????1?????1 
    } 
    }
    for(int k=1;k<=tema;k++)     //?????????? 
    {
    d[b[k-1]]='$';
    }
    for(int i=1;a[i-1]!='\0';i++)//???? 
    {
    cout<<d[i-1];
    }
    cout<<endl;
    for(int i=1;i<=100;i++)
    {a[i-1]=='\0';}
    }                           //????? 
    return 0;
}
    
    
