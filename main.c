#include <stdio.h>
int main() {
    int n = 100;
    while (n >= 2) {
        if (n % 2 == 0) {
            printf("%d ", n);
        }
        n--;
    }

    return 0;
}