// C Program To Add Two Numbers
#include <stdio.h>
int main(){
    int a, b, sum;
    // Display Message Asking for Input
    printf("Enter Two Numbers: \n");

    // Asking for Input
    scanf("%d%d", &a, &b);

    sum = a + b;

    // Displays Output
    printf("The Sum of Two Numbers is: %d", sum);
    return 0;
}
