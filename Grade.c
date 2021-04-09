#include <stdio.h>
#include<string.h>
int main()
{
    int sum,avg,phy,eng,math,cs;
    char grade[5];
    printf("Enter Marks: \n");
    scanf("%d %d %d %d",&phy,&eng,&math,&cs);
    sum=phy+eng+math+cs;
    avg=sum/4;
    if(avg<=100 && avg>=85)
    {
        strcpy(grade,"A");
    }
    else if(avg<=84 && avg>=70)
    {
        strcpy(grade,"B");
    }
    else if(avg<=69 && avg>=55)
    {
        strcpy(grade,"C");
    }
    else if(avg<=54 && avg>=40)
    {
        strcpy(grade,"D");
    }
    else
    {
        strcpy(grade,"F");
    }
    printf("Grade is: ");
    puts(grade);
    return 0;
}

