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
int n1=0,n=0,a[100005],del=0;//n??????  n1??????????? del?????? a??? 
cin>>n1;n=n1;
for (int i=1;i<=n;i++)
cin>>a[i];
cin>>del;
int h=1;//h ????????? 
do 
{
    if (a[h]==del)
    {
     for (int i=h+1;i<=n;i++){a[i-1]=a[i];}//????????? ???????????????????
     n--;h--;
    }
    h++;
}
while(h<=n);
for (int j=1;j<=n-1;j++) cout<<a[j]<<' ';cout<<a[n];
return 0;}


