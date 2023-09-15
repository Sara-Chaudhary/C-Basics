#include <stdio.h>

int main (){

int year,days,d;

printf("year?");
scanf("%d",&year);

days = 365*year + (year-1)/4 - (year-1)/100 + (year-1)/400 ;

d=days%7;//to find which day of week

if(d==1)
printf("monday");

else if(d==2)
printf("tuesday");

else if(d==3)
printf("wednesday");

else if(d==4)
printf("thursday");

else if(d==5)
printf("friday");

else if(d==6)
printf("saturday");

else if(d==0)
printf("sunday");

return(0);

}