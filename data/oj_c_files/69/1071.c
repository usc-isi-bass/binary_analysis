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

  /***********************************************************************
     
     ??:?????
     ??: ???????? 
     ??:
         ?1????????????????????????????????????????????????????
         ?2???????????????????????????????????????
         ?3??????????????????? 
         ?3?????????? 
     ????? 2012.03.09    ??? 
     ***********************************************************************/


struct stu
{
  int num;
    struct stu *next;   
};
main()
{
    int i,j,n,y,q,m,t;
    n=1000;   // ??printf("?????????????????\n");  scanf("%d ",&n)
   // printf("????????????????\n");
    struct stu *head,*p,*p1,*p2;     //???P1????? 
    struct stu *head0,*p0,*p3,*p4;   //???P2????? 
    struct stu *p5,*p6,*p7,*p8;      //???P5????? 
    char a[n],b[n];
     
    gets(a);
    i=strlen(a);
    gets(b);
    j=strlen(b);
      //i?j??????? a?b??? 
    if(i>j){t=i;}       
    else {t=j;}      
   // ??????????????+1??????????e[t]???   ??????a?b???? 
    t=t+1;
    int e[t];
    
    p1=p2=(struct stu*)malloc(LEN); //????p1??? ?p2????? 
    p1->num=a[i-1]-'0';
    head=p1;
    p3=p4=(struct stu*)malloc(LEN); //????p3??? ?p4????? 
    p3->num=b[j-1]-'0';
    head0=p3; 
    i=i-1;j=j-1;         //?while???? 
    p=head;            //????P?P0. 
    p0=head0; 
    
    //????????P5   
    int  c1=0,c2;       //C2????????C1??C2???C1???0     
    c2=p->num+p0->num;
    p5=p6=(struct stu*)malloc(LEN);//?????? 
     y=c2+c1/10;      //Y??????? 
    p5->num=y%10;    //???????????P5??? 
    c1=c2; 
    p7=p5; 
    
     while(i>0||j>0)     //????????????? 
    {    
        p2=p1;
        p1=(struct stu*)malloc(LEN);
        p1->num=(i>0)?a[--i]-'0':0;      //??????0 
        p2->next=p1;
        
        p4=p3;
        p3=(struct stu*)malloc(LEN);
        p3->num=(j>0)?b[--j]-'0':0;        //??????0      
        p4->next=p3;
         
        p0=p0->next; 
        p=p->next; 
      
        c2=p->num+p0->num; 
        
        p6=p5;
        p5=(struct stu*)malloc(LEN);
        y=c2+y/10;                   //Y??????? 
        p5->num=y%10;    //???????????P5??? 
        c1=c2;
        p6->next=p5;
    }
     p1->next=NULL;          
     p3->next=NULL;
     p6=p5;
     p5=(struct stu*)malloc(LEN);
     p5->num=y/10;        //???????  
     p6->next=p5;            
     p5->next=NULL; 
     
     
      //?????????  
     p=head;
     p0=head0;
     p8=p7;
    for(m=t-1;p8!=NULL;m--)
    {
     e[m]=p8->num;
      p8=p8->next;
    }
   
    m=0;
    if(p5->num==0&&t==2)   //?????????0? 
    {m=1;}                 //?????0 
    else                   //?????????????0?
    {
     while(e[m]==0&&m<t)    //???????0   
    {m++;}
    }
    for(y=m;y<t;y++)        //????
    {
      printf("%d",e[y]);              
    } 
    struct stu *pt;
      while(p!=NULL)
    {
      pt=p;
      p=p->next; 
      free(pt);                    
    }
     while(p8!=NULL)
    {
      pt=p8;
      p8=p8->next; 
      free(pt);    
    }
     while(p0!=NULL)
    {
      pt=p0;
      p0=p0->next; 
      free(pt);     
    }      
getchar();
getchar();
getchar(); 
}
