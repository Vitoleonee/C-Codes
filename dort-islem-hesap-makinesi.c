#include <stdio.h>

int main() {
    char operator;
    double sayi1, sayi2;

    puts("islemi girin (+, -, *, /): ");
    scanf("%c", &operator);

    puts("iki sayi girin: ");
    scanf("%lf %lf", &sayi1, &sayi2);

    switch(operator) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", sayi1, sayi2, sayi1 + sayi2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", sayi1, sayi2, sayi1 - sayi2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", sayi1, sayi2, sayi1 * sayi2);
            break;
        case '/':
            if (sayi2 != 0)
                printf("%.1lf / %.1lf = %.1lf\n", sayi1, sayi2, sayi1 / sayi2);
            else
                printf("Hata! Bolen sıfır olamaz.\n");
            break;
        default:
            printf("Gecersiz islem!\n");
    }

    return 0;
}
