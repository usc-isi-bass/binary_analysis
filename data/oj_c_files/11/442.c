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
         int a,b,c,d;
		 scanf("%d%d%d",&a,&b,&c);
		 if(a%4==0&&a%100!=0||a%400==0)
		 {   switch(b)
		 {   case 1:
		 {d=c;
		 break;}
			 case 2:
				 {d=31+c;
				 break;}
			 case 3:
				 {d=31+29+c;
				 break;}
			 case 4:
				 {d=31+29+31+c;
				 break;}
			 case 5:
				 {d=31+29+31+30+c;
				 break;}
			 case 6:
				 {d=31+29+31+30+31+c;
				 break;}
			 case 7:
				 {d=31+29+31+30+31+30+c;
				 break;}
			 case 8:
				 {d=31+29+31+30+31+30+31+c;
				 break;}
             case 9:
				 {d=31+29+31+30+31+30+31+31+c;
				 break;}
			case 10:
				{d=31+29+31+30+31+30+31+31+30+c;
				break;}
			case 11:
				{d=31+29+31+30+31+30+31+31+30+31+c;
				break;}
			case 12:
				{d=31+29+31+30+31+30+31+31+30+31+30+c;
				break;}
		 }
         printf("%d",d);
		 }
		 else
		 { switch(b)
		 {   case 1:
		 {d=c;
		 break;}
			 case 2:
				 {d=31+c;
				 break;}
			 case 3:
				 {d=31+28+c;
				 break;}
			 case 4:
				 {d=31+28+31+c;
				 break;}
			 case 5:
				 {d=31+28+31+30+c;
				 break;}
			 case 6:
				 {d=31+28+31+30+31+c;
				 break;}
			 case 7:
				 {d=31+28+31+30+31+30+c;
				 break;}
			 case 8:
				 {d=31+28+31+30+31+30+31+c;
				 break;}
             case 9:
				 {d=31+28+31+30+31+30+31+31+c;
				 break;}
			case 10:
				{d=31+28+31+30+31+30+31+31+30+c;
				break;}
			case 11:
				{d=31+28+31+30+31+30+31+31+30+31+c;
				break;}
			case 12:
				{d=31+28+31+30+31+30+31+31+30+31+30+c;
				break;}
		 }
             printf("%d",d);
		 }
return 0;
}
