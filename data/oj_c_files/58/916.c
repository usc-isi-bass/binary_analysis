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
{char a[100][82]={0};
 int n,i=0,j=0,k=0,l;
 cin>>n;
cin.get();
 for(i=0;i<n;i++)
{cin.getline(a[i],81);

 if(a[i][0]=='_'||(a[i][0]>='a'&&a[i][0]<='z')||(a[i][0]>='A'&&a[i][0]<='Z'))
  {l=strlen(a[i]);k=0;
    for(j=0;j<l;j++)
     {
      if(a[i][j]=='_'||(a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]>='A'&&a[i][j]<='Z')||(a[i][j]>='0'&&a[i][j]<='9'))
     k++;
}
if(k==l)
 cout<<"1"<<endl;
else cout<<"0"<<endl;}
else cout<<"0"<<endl;}
return 0;
}
