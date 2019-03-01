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
 int year,mon,day;
 cin>>year>>mon>>day;
int days=0;
 int ar[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 int br[12]={31,29,31,30,31,30,31,31,30,31,30,31};
 if(year%4==0&&year%100!=0||year%400==0)
 {
 for(int i=0;i<mon-1;i++)
 days+=br[i];
}
else
{
 for(int i=0;i<mon-1;i++)
 days+=ar[i];
}
days+=day;
cout<<days<<endl;
return 0;
}