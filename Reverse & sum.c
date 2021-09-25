/* A program to reverse the digits and calculate the sum of the digits  */


#include <stdio.h>
int main() {
    int n, rev = 0,sum =0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        sum = sum + remainder;
        n /= 10;
    }
    printf("Reversed number = %d", rev);
    
    printf("\nSum of digits = %d", sum);
    
    return 0;
}
