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

char line[1000000];
int ccount[26];
int main()
{
int n;
cin>>n;
while(n--)
{
cin>>line;
memset((char *)ccount,0,26*sizeof(int));
int len=strlen(line);
int i;
for(i=0;i<len;i++)
ccount[line[i]-'a']++;
for(i=0;i<len;i++)
if(ccount[line[i]-'a']==1)
{
cout<<line[i]<<endl;
break;
}
if(i==len)
cout<<"no"<<endl;
}
return 0;
}