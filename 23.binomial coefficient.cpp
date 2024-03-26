#include <stdio.h>
unsigned long long binomialCoeff(int n, int k) {
    unsigned long long C[n + 1][k + 1];
    int i, j;

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= k && j <= i; j++) {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
    return C[n][k];
}
int main() {
    int n = 5, k = 2;
    printf("Binomial coefficient of (%d, %d) is %llu\n", n, k, binomialCoeff(n, k));
    return 0;
}

