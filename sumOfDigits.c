#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    //Write your code here
    int temp, sum;
    while(num>0){
    temp = num%10;
    sum = sum+temp;
    num = num/10;
        
    }
    printf("%d\n",sum);
    return 0;
}
