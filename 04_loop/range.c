#include<stdio.h>

int main(){
    int smallest = 0 , largest = 0 , number ;
    char x ;

   do {
        printf("Enter a number : ");
        scanf(" %d ", &number );
        printf("want to add another number (y/n) : ");
        scanf("%c", &x );        
        if(number > largest){
            largest = number ;
        }
        else if (number < smallest){
            smallest = number;
        }
    } while(x == 'y');
   printf("The largest number is %d \nThe smallest number is %d \nThe range is %d .\n " , largest , smallest , largest - smallest );
   return  0;

}