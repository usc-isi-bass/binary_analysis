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
	int s1,s2,s3,s4,s5;
	int f1,f2,f3,f4,f5;
	for (f1=1;f1<=6;f1++)
	{	for (f2=1;f2<6;f2++)
	{	for (f3=1;f3<6;f3++)
			{	for (f4=1;f4<6;f4++)
				{	f5=15-f1-f2-f3-f4;
				s1=(f5==1);
				s2=(f2==2);
				s3=(f1==5);
				s4=(f3!=1);
				s5=(f4!=1);
				if (f5>0&&f5!=2&&f5!=3&&f1!=f2&&f1!=f3&&f1!=f4&&(s2+s3)==2&&s1==0&&s4==0&&f1!=f5&&f2!=f3&&f2!=f4&&f2!=f5&&f3!=f4&&f3!=f5&&f4!=f5)
					cout<<f1<<" "<<f2<<" "<<f3<<" "<<f4<<" "<<f5<<endl;}}}}
				return 0;
}
		
	