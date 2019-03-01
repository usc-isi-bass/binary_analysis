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
    int n,i,j,k,z,x;
    scanf("%d",&n);
    struct Student
    {
       int num;
       int yuwen;
       int shuxue;
       int zongfen;       
    }stu[n];
    
    
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&stu[i].num,&stu[i].yuwen,&stu[i].shuxue);
        stu[i].zongfen=stu[i].yuwen+stu[i].shuxue;                
    }
    
    for(j=0;j<3;j++)
    {
        for(k=0;k<n-1;k++)               
        {
            if(stu[k].zongfen>stu[k+1].zongfen)
            {
               z=stu[k+1].zongfen;
               stu[k+1].zongfen=stu[k].zongfen;
               stu[k].zongfen=z; 
               x=stu[k+1].num;
               stu[k+1].num=stu[k].num;
               stu[k].num=x;                               
            }   
            else if(stu[k].zongfen==stu[k+1].zongfen&&stu[k].num<stu[k+1].num)
            {
               z=stu[k+1].zongfen;
               stu[k+1].zongfen=stu[k].zongfen;
               stu[k].zongfen=z; 
               x=stu[k+1].num;
               stu[k+1].num=stu[k].num;
               stu[k].num=x;                               
            }   
            else;                              
        }
    }
    
    for(j=0;j<3;j++)
    {
        printf("%d %d\n",stu[n-1-j].num,stu[n-1-j].zongfen);            
    }
    
    
    getchar();
    getchar();
    
    
    
        

}
