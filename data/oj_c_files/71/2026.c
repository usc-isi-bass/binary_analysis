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
    int n,i,y,m1,m2,M1,M2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
	{
	   scanf("%d%d%d",&y,&m1,&m2);
	   if((y%4==0&&y%100!=0)||y%400==0)
	   {
	       if(m1==1)
		   {M1=0;};
		   if(m1==2)
		   {M1=31;};
		   if(m1==3)
		   {M1=60;};
		   if(m1==4)
		   {M1=91;};
		   if(m1==5)
		   {M1=121;};
           if(m1==6)
		   {M1=152;};
		   if(m1==7)
		   {M1=182;};
		   if(m1==8)
		   {M1=213;};
		   if(m1==9)
		   {M1=244;};
           if(m1==10)
		   {M1=274;};
		   if(m1==11)
		   {M1=305;};
		   if(m1==12)
		   {M1=335;};

           if(m2==1)
		   {M2=0;};
		   if(m2==2)
		   {M2=31;};
		   if(m2==3)
		   {M2=60;};
		   if(m2==4)
		   {M2=91;};
		   if(m2==5)
		   {M2=121;};
           if(m2==6)
		   {M2=152;};
		   if(m2==7)
		   {M2=182;};
		   if(m2==8)
		   {M2=213;};
		   if(m2==9)
		   {M2=244;};
           if(m2==10)
		   {M2=274;};
		   if(m2==11)
		   {M2=305;};
		   if(m2==12)
		   {M2=335;};
	   }
       else
	   {
	       if(m1==1)
		   {M1=0;};
		   if(m1==2)
		   {M1=31;};
		   if(m1==3)
		   {M1=59;};
		   if(m1==4)
		   {M1=90;};
		   if(m1==5)
		   {M1=120;};
           if(m1==6)
		   {M1=151;};
		   if(m1==7)
		   {M1=181;};
		   if(m1==8)
		   {M1=212;};
		   if(m1==9)
		   {M1=243;};
           if(m1==10)
		   {M1=273;};
		   if(m1==11)
		   {M1=304;};
		   if(m1==12)
		   {M1=334;};

           if(m2==1)
		   {M2=0;};
		   if(m2==2)
		   {M2=31;};
		   if(m2==3)
		   {M2=59;};
		   if(m2==4)
		   {M2=90;};
		   if(m2==5)
		   {M2=120;};
           if(m2==6)
		   {M2=151;};
		   if(m2==7)
		   {M2=181;};
		   if(m2==8)
		   {M2=212;};
		   if(m2==9)
		   {M2=243;};
           if(m2==10)
		   {M2=273;};
		   if(m2==11)
		   {M2=304;};
		   if(m2==12)
		   {M2=334;};
	   }

       if((M1-M2)%7==0)
	   {printf("YES\n");}
	   else
	   {printf("NO\n");}
	}
    return 0;
}