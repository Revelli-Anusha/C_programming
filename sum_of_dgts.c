/*************
 * If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits. 
    HINT: Use the modulus operator ‘%’
*************/


int main() {
    int n=1, rev = 0, rem=0,sum=0;
    printf("Enter a num: ");
    scanf("%d", &n);
    while (n != 0) {
        rem = n % 10;
        rev = rev + rem;
        n /= 10;
    }
    printf("Reversed number = %d\n", rev);
    
    return 0;
}