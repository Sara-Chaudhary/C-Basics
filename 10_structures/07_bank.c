#include <stdio.h>

typedef struct customer {
    int acc_no, balance;
    char name[30];
} cust;

void print(cust *n, int a); // to print the data of those customres whose balance is gelow the 'int a' 
void Value(cust *n);        // to input data from the user 

int main() {
    cust mem[2];
    int bal;
    Value(&mem[0]);
    printf("\nYou want the name of people with balace less than: ");
    scanf("%d", &bal);
    print(&mem[0], bal);
    return 0;
}

void print(cust *n, int a) {
    for (int i = 0, j = 0; i < 2; i++)
    {
        if ((n->balance) < a)
        {
            printf("%d. name:%s\tacc_no: %d\tbalance: %d\n\n", j++, n->name, n->acc_no, n->balance);
            n++;
        }
        else
        {
            printf("None here !!\n\n");
        }
    }
}

void Value(cust *n) {
    for (int i = 0; i < 2; i++)
    {
        printf("\nEnter the Account no. : ");
        scanf("%d", &n->acc_no);
        printf("Enter the name : ");
        scanf("%s", n->name);
        printf("Enter the balance: ");
        scanf("%d", &n->balance);
        n++;
    }
}