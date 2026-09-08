#include <stdio.h>
#include <math.h>

void addition() {
    printf("\nThis is addition function..\n");

    int n;
    printf("How many numbers you want: ");
    scanf("%d", &n);

    int a[n], i;
    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += a[i];
    }

    printf("Total sum is: %d\n", sum);
}

void subtraction() {
    printf("\nThis is subtraction function..\n");

    int n;
    printf("How many numbers you want: ");
    scanf("%d", &n);

    int a[n], i;
    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sub = a[0];
    for (i = 1; i < n; i++) {
        sub -= a[i];
    }

    printf("Total sub is: %d\n", sub);
}

void multiplication() {
    printf("\nThis is multiplication function..\n");

    int n;
    printf("How many numbers you want: ");
    scanf("%d", &n);

    int a[n], i;
    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int mul = 1;
    for (i = 0; i < n; i++) {
        mul *= a[i];
    }

    printf("Total multiplication is: %d\n", mul);
}

void division() {
    printf("\nThis is division function..\n");

    float a, b;
    printf("Enter number of A: ");
    scanf("%f", &a);
    printf("Enter number of B: ");
    scanf("%f", &b);

    if (b == 0) {
        printf("Math error: Division by zero!\n");
    } else {
        float div = a / b;
        printf("Total division is: %.2f\n", div);
    }
}

void modulus() {
    printf("\nThis is modulus function..\n");

    int a, b;
    printf("Enter number of A: ");
    scanf("%d", &a);
    printf("Enter number of B: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Math error: Modulus by zero!\n");
        return;
    } else {
        int mod = a % b;
        printf("Total modulus is: %d\n", mod);
    }
}

void square() {
    printf("\nThis is square function..\n");

    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    int sqr = a * a;
    printf("Total square is: %d\n", sqr);
}

void power() {
    printf("\nThis is power function..\n");

    double a, b;
    printf("Enter number: ");
    scanf("%lf", &a);
    printf("Enter the power number: ");
    scanf("%lf", &b);

    double ans = pow(a, b);
    printf("Total power is: %.2lf\n", ans);
}

void factorial() {
    printf("\nThis is factorial function..\n");

    int n, i;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not possible for negative numbers!\n");
        return;
    }

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of %d is: %llu\n", n, fact);
}

void fibonacci() {
    printf("\nThis is Fibonacci function..\n");

    int n, i;
    int a = 0, b = 1, next;

    printf("How many Fibonacci numbers you want: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return;
    }

    printf("Fibonacci series: ");

    for (i = 1; i <= n; i++) {
        printf("%d", a);

        if (i < n) {
            printf(", ");
        }

        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
}

void trigonometric() {
    printf("\nThis is trigonometric function..\n");

    double degree, radian, ans;
    int choice;

    printf("\nTrigonometric Operations:\n");
    printf("1. Sin\n");
    printf("2. Cos\n");
    printf("3. Tan\n");
    printf("4. Back\n");

    printf("Enter your option: ");
    scanf("%d", &choice);

    if (choice == 4) {
        return;
    }

    printf("Enter angle in degree: ");
    scanf("%lf", &degree);

    radian = degree * (M_PI / 180.0);

    switch (choice) {
        case 1:
            ans = sin(radian);
            printf("Sin(%.2lf) = %.2lf\n", degree, ans);
            break;

        case 2:
            ans = cos(radian);
            printf("Cos(%.2lf) = %.2lf\n", degree, ans);
            break;

        case 3:
            ans = tan(radian);
            printf("Tan(%.2lf) = %.2lf\n", degree, ans);
            break;

        default:
            printf("Enter the right menu....\n");
    }
}

void leapYear() {
    printf("\nThis is Leap Year function..\n");

    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is not a Leap Year.\n", year);
    }
}

void palindrome() {
    printf("\nThis is Palindrome function..\n");

    int n, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    if (original == reverse) {
        printf("%d is a Palindrome number.\n", original);
    } else {
        printf("%d is not a Palindrome number.\n", original);
    }
}

void strongNumber() {
    printf("\nThis is Strong Number function..\n");

    int n, original, digit, i;
    unsigned long long fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        digit = n % 10;
        fact = 1;

        for (i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        n /= 10;
    }

    if (sum == original) {
        printf("%d is a Strong number.\n", original);
    } else {
        printf("%d is not a Strong number.\n", original);
    }
}

void armstrongNumber() {
    printf("\nThis is Armstrong Number function..\n");

    int n, original, temp, digit, count = 0;
    double sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    while (temp != 0) {
        count++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if ((int)sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }
}

void perfectNumber() {
    printf("\nThis is Perfect Number function..\n");

    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        printf("%d is a Perfect number.\n", n);
    } else {
        printf("%d is not a Perfect number.\n", n);
    }
}

void magicNumber() {
    printf("\nThis is Magic Number function..\n");

    int n, digit, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 9) {
        sum = 0;

        while (n != 0) {
            digit = n % 10;
            sum += digit;
            n /= 10;
        }

        n = sum;
    }

    if (n == 1) {
        printf("It is a Magic number.\n");
    } else {
        printf("It is not a Magic number.\n");
    }
}


void more() {
    int choice;

    while (1) {
        printf("\nMore Operations:\n");
        printf("1. Leap Year\n");
        printf("2. Palindrome\n");
        printf("3. Strong Number\n");
        printf("4. Armstrong Number\n");
        printf("5. Perfect Number\n");
        printf("6. Magic Number\n");
        printf("7. Back\n");

        printf("Enter your option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                leapYear();
                break;

            case 2:
                palindrome();
                break;

            case 3:
                strongNumber();
                break;

            case 4:
                armstrongNumber();
                break;

            case 5:
                perfectNumber();
                break;

            case 6:
                magicNumber();
                break;

            case 7:
                return;

            default:
                printf("Enter the right menu....\n");
        }
    }
}

int main() {
    while (1) {
        printf("\nWhat do you want:\n");
        printf("1. Addition (array)\n");
        printf("2. Subtraction(array)\n");
        printf("3. Multiplication(array)\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Square\n");
        printf("7. Power\n");
        printf("8. Factorial\n");
        printf("9. Fibonacci\n");
        printf("10. Trigonometric Operations\n");
        printf("11. More\n");
        printf("12. Exit\n");

        int t;
        printf("Enter your option: ");
        scanf("%d", &t);

        switch (t) {
            case 1:
                addition();
                break;

            case 2:
                subtraction();
                break;

            case 3:
                multiplication();
                break;

            case 4:
                division();
                break;

            case 5:
                modulus();
                break;

            case 6:
                square();
                break;

            case 7:
                power();
                break;

            case 8:
                factorial();
                break;

            case 9:
                fibonacci();
                break;

            case 10:
                trigonometric();
                break;

            case 11:
                more();
                break;

            case 12:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Enter the right menu....\n");
        }
    }

    return 0;
}
