#include <stdio.h>
float Average(int m1 ,int m2 ,int m3);
float Percent(float a);
int main()
{
    int a , b , c ; float avg , per;
    printf("\nEnter tour marks in 3 subjects: \n");
    scanf(" %d %d %d",&a , &b , &c );
    avg = Average(a,b,c);
    printf("The average is : %.1f\n", avg);
    per = Percent(avg);
    printf("The percentage is :%.1f\n\n", per);

}
float Average(int m1 ,int m2 ,int m3){
    float avg = (m1 + m2 + m3 )/3;
    return avg ;
}
float Percent(float a){
    float per = ((a * 3)/300*100);
    return per;
}