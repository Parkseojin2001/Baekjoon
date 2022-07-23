#pragma warning(disable:4996)

#include <stdio.h>

int gcd(int a, int b, int n);
int lcm(int a, int b, int n);

int main() {
    int n1, n2;
    int GCD, LCM;
    scanf("%d %d", &n1, &n2);
    if (n1 > n2) {
        GCD = gcd(n1, n2, n2);
        LCM = lcm(n1, n2, n1);
    }
    else {
        GCD = gcd(n1, n2, n1);
        LCM = lcm(n1, n2, n2);
    }
    printf("%d\n%d", GCD, LCM);
    return 0;
}

int gcd(int a, int b, int n) {
    if (a % n == 0 && b % n == 0) {
        return n;
    }
    else {
        return gcd(a, b, n-1);
    }
}

int lcm(int a, int b, int n) {
    if (n % a == 0 && n % b == 0) {
        return n;
    }
    else {
        return lcm(a, b, n+1);
    }
}