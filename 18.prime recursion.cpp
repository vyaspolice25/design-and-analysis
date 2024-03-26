#include <stdio.h>
int isPrime(int n, int i) {
    if (n <= 2)
        return (n == 2) ? 1 : 0;
    if (n % i == 0)
        return 0;
    if (i * i > n)
        return 1;
    return isPrime(n, i + 1);
}
void printPrimes(int n, int i) {
    if (i <= n) {
        if (isPrime(i, 2))
            printf("%d ", i);
        printPrimes(n, i + 1);
    }
}
int main() {
    int n;
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("Prime numbers up to %d are: ", n);
    printPrimes(n, 2); 

    return 0;
}

