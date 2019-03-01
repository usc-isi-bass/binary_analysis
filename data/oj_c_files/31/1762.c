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

struct student 
{  
       char ID[10];   
       char name[20],s;   
       int age;
       char score[10];   
       char ad[20];   
       struct student *next;
}; 
int main()
{   
    struct student *head;   
    int n,i,j;   
    n=0;
    head = NULL;  
    struct student *p1 ;
    while (1)   
    {     
          p1 = (struct student *)malloc(len);
          scanf("%s" , p1 -> ID);
          if (p1 -> ID[0] == 'e' && p1 -> ID[1] == 'n' && p1 -> ID[2] == 'd' ) break;
          scanf(" %s %c %d %s %s",p1->name,&p1->s,&p1->age,p1->score,p1->ad);  
          n++;     
          p1 -> next = head;
          head = p1; 
    }   
    p1 = head; 
    while (p1 != NULL)  
    {
        printf("%s %s %c %d %s %s\n",p1->ID,p1->name,p1->s,p1->age,p1->score,p1->ad);    
        p1 = p1 -> next;  
    }    

}  
