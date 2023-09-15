// A menu based programme
#include<stdio.h>

int main(){
    int option , n , fun , i;
    char ch ;
    do{
        printf("Hello and Welcome .\nWhat can we help you with .\nYou can choose from .\n1.Factorial \n2.Prime Check \n3.Odd/Even \n4.Nothing , Exit."\n);
        scanf(" %d", &option);

        switch(option)
        {
            case 1:
                printf("Enter a number ");
                scanf("%d", &n);
                for(int i=1 ;i<=n;i++){
                    fun=fun* i;
                }
                printf("The factorial if %d is %d .\n", n,fun);
                break;
            case 2:
                printf("Enter the number : ");
                scanf("%d", &n);
                for(i = 2 ; i< n ; i++){
                    fun = n%i;
                    if(fun == 0){
                    printf("The number %d is not a prime number . \n", n);
                    break;
                } else {
                    continue;}           
                }
                if ( i = n && fun != 0){
                printf("The number %d is a prime number . \n", n);
                } 
                break;
            case 3:
                printf("Enter a number : ");
                scanf("%d", &n);
                if(n%2==0){
                    printf("The number %d is even.", n);
                } else {
                    printf("The number %d is odd .", n);
                }
                break;
            case 4:
                printf("Hope to see you later .\nGoodbye .\n");               
        }
        printf("Do you want to Continue (y/n): ");
        scanf(" %c", ch );

    }while(ch == 'y');
    return 0;
}