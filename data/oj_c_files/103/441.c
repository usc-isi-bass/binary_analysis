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

int  main()
{

	char yy[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

char stri[1001],s;
cin>>stri;
int len,i=0,sum=0;
len=strlen(stri);
while(i<len)
{
s=stri[i];
while(stri[i]-'a'==s-'a'||stri[i]-'a'==s-'A'||stri[i]-'A'==s-'a'||stri[i]-'A'==s-'A')
{sum++;
i++;}
if((s-'A')>=0&&(s-'A')<=26)
cout<<"("<<yy[s-'A']<<","<<sum<<")";
else
cout<<"("<<yy[s-'a']<<","<<sum<<")";

 sum=0;
}

return 0;
}
