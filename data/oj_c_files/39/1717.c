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


int main(int argc, char* argv[])
{
    int N,i,sch,msch=0,ssch=0;
	char mname[21];
		char name[21];
		int aver;
		int ping;
        char lead;
		char west;
		int essay;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
        sch=0;
		scanf("%s%d%d %c %c%d",name,&aver,&ping,&lead,&west,&essay);
        if((aver>80)&&(essay>=1))sch=sch+8000;
        if((aver>85)&&(ping>80))sch=sch+4000;
		if(aver>90)sch=sch+2000;
		if((aver>85)&&(west=='Y'))sch=sch+1000;
		if((ping>80)&&(lead=='Y'))sch=sch+850;
		ssch=ssch+sch;
		if(sch>msch)
		{
			msch=sch;
			strcpy(mname,name);
		}
	}
    printf("%s\n%d\n%d\n",mname,msch,ssch);
	return 0;
}
