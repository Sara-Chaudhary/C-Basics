#include <stdio.h>
void Print(int *arr);               // to print the array after every move
void Move(int *n , char x);         // to move the zero block
char Check(int *arr1 , int *arr2);  // To check if the puzzle is solved
int* Zero_finder(int * p);           // To get the new address of zero block
int main(){
    char key ;
    int i , j , n ,array2[4][4] , array1[4][4] = {
                                    1, 4, 5, 6,
                                    8, 3, 2, 11,
                                    14, 10, 7, 13,
                                    12, 9, 15, 0};
    for( i=0 , n=0; i<4 ; i++){     // To input values in final checker array
        for( j=0; j<4 ; j++){
           array2[i][j] = n++;
        }
    }
    printf("The Rules of the game are simple:\n");
    printf("You have to arrange the puzzle in ascending order like this:\n");
    Print(&array2[0][0]);
    printf("\nYour puzzle is: \n");
    Print(&array1[0][0]);
    printf("\nYou can use 'a' 's' 'd' 'w' from the keyboard to move the '0' block only .\nGood Luck.\n");
    do{
        printf("\nEnter your move: ");
        scanf(" %c", &key );
        Move( Zero_finder(&array1[0][0]) ,key);
        printf("Table changed to:\n");
        Print(&array1[0][0]);
    }while( Check(&array1[0][0] , &array2[0][0]) != 'y');
    printf("You did it .\nGood Job.\n\n");
    return 0;
}
void Move(int *n , char x){
    int temp , new = *n ;
    switch(x){
        case 'a':       //left shift
            temp = new;
            *n = *(n-1);
            *(n-1) = temp;
            break;
        case 's':       //down shift
            temp = new;
            *n = *(n + 4);
            *(n +4) = temp;
            break;
        case 'w':       //up shift
            temp = new;
            *n =*(n-4);
            *(n-4)=temp;
            break;
        case 'd':       //right shift
            temp = new;
            *n = *(n+1);
            *(n+1)=temp;
            break;
    }       
}
int* Zero_finder(int *p){
    for(int i=0 ; i<4 ; i++){
        for(int j=0; j<4 ; j++){
           if(*p == 0){
            return p;
           } else{
            p++;
           }
        }
    }
}
char Check(int *arr1 , int *arr2){
    for(int i=0 ; i<4 ; i++){
        for(int j=0; j<4 ; j++){
            if(arr1[i] != arr2[i] || arr1[j] != arr2[j]){
                return'n';
                continue;
            } else {
                return'y';
            }
        }
    }
}
void Print(int *arr){
    for(int i=0 ; i<4 ; i++){
        for(int j=0; j<4 ; j++){
            printf("| %2d ", *arr );
            arr++;
        }
        printf("|\n");
    }
}