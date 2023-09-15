#include <stdio.h>
#include <string.h>
void main()
{
    char masterlist[6][12] = {
        "akshay",
        "parag",
        "raman",
        "srinivas",
        "gopal",
        "rajesh"};
    int i, check, a;
    char yourname[10];
    printf("\nEnter your name :");
    scanf("%s", yourname);
    check = 0;
    for (i = 0; i <= 5; i++)
    {
        a = strcmp(&masterlist[i], yourname);
        if (a == 0)
        {
            printf("Welcome, you can enter the palace\n");
            check = 1;
            break;
        }
    }
    if (check == 0)
        printf("Sorry, you are a trespasser\n");
}
