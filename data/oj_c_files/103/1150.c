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


struct letters
{
	char name;
    int time;
};
void main()
{
	int l,i,k=0;char t;
	char seq[1001]={0};
	struct letters let[100]={0};
	gets(seq);
    l=strlen(seq);
	let[0].name=(seq[0]>90)?seq[0]-32:seq[0];
	let[0].time++;
	for(i=1;i<l;i++)
	{
		t=seq[i];
		if(t>90)
			t-=32;
        if(t==seq[i-1]||t==seq[i-1]-32)
	        let[k].time++;
		else
		{
			k++;
			let[k].name=t;
	        let[k].time++;
		}

	}
    for(i=0;i<=k;i++)
	    printf("(%c,%d)",let[i].name,let[i].time);
	
}