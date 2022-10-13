/* #include <stdio.h>


int number = 0;


int main() {


    int digits = 0;
    printf("Enter any number: ");
    scanf("%d", &number);

    int temp = number;
    int last_number = 0;
    int sum = number;    long long num;
    int count = 0;

 
    printf("Enter any number: ");
scanf("%lld", &num);
    do
    {
        
        num /= 10;
    } while(num != 0);

    printf("Total digits: %d", count);
    int iterations = 0;
    
    do {
        digits++;
        temp /= 10;
    } while(temp != 0);

    while (1) {

        if (number == last_number) {
            printf("Palindrome achieved after %d iterations", iterations);
            break;
        } 
        
        int temp = number;
        while (digits > 0) {
            int units_place = temp%10;
            sum += units_place * (10*(digits-1));
            temp = temp/10;
    
            digits--;
        }
        printf("number: %d, LN: %d, sum: %d\n", number, last_number, sum);
        last_number = number;
        number = sum;
        iterations++;
    }
    
    

    printf("sum: %d", sum);

    return 0;
} */