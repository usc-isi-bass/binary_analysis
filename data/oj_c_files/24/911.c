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
    char str[100];
    int s, _s,mas,min, num,i;// ?s??????????mas??????????	
    //num???????????	
    gets(str);//???????	//?????????????	
    s=0;
    _s=0;
    num=0;	
    mas=0;
    min=50;	
    for(i=0;str[i]!='\0';i++)	
    {		
         if(str[i]==' ')		
         {			//????????????????			
         if(mas<num) 
         {
                     mas=num;
                     s=i;
         }//???????s	
         if (min>num)
         {
                     min=num;
                     _s=i;
         }		
         num=0;//??? ????????		
         }		
         else			
         num++;	
    }	//??????????????????????	
    if(mas<num) {mas=num;s=i;}	//?????????
    if(min>num) {min=num;_s=i;}	
    for(i=s-mas;i<s;i++) 
    printf("%c",str[i]);	
    printf("\n");
    for(i=_s-min;i<_s;i++) 
    printf("%c",str[i]);
	
    return 0;
    }