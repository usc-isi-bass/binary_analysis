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
int n,i,j,s[1500][1500],inside=0,total=0;
cin>>n;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
cin>>s[i][j];
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
if((s[i][j]==0)&&(s[i][j+1]==0))
do
{
j++;
}while((j<n)&&(s[i][j]==0));
else if((s[i][j]==0)&&(s[i][j+1]!=0))
{
do
{
j++;
if(s[i][j]>0)
inside++;
}while((j<n)&&(s[i][j]!=0));
}
}
cout<<inside<<endl;

return 0;
}

