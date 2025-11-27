
#include <stdio.h>


long long fact_recursive(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact_recursive(n - 1);
}


long long fact_nonrecursive(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++)
        f = f * i;
    return f;
}


long long binomial(int n, int r) {
    long long fn = fact_nonrecursive(n);
    long long fr = fact_nonrecursive(r);
    long long fnr = fact_nonrecursive(n - r);

    return fn / (fr * fnr);
}

int main() {
    int n, r;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter r: ");
    scanf("%d", &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input! r must be <= n and both must be >= 0.\n");
        return 0;
    }

    
    printf("\nRecursive FACT(%d) = %lld\n", n, fact_recursive(n));
    printf("Non-recursive FACT(%d) = %lld\n", n, fact_nonrecursive(n));

    
    printf("\nC(%d, %d) = %lld\n", n, r, binomial(n, r));

    
    printf("\nValues of C(%d, r):\n", n);
    for (int i = 0; i <= n; i++) {
        printf("r = %d  -->  %lld\n", i, binomial(n, i));
    }

    return 0;
}