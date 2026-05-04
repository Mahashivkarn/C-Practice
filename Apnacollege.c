#include <stdio.h>
int main() {
  // Fibonacci Series
    int n=10, a=0, b=1, c;
    printf("%d %d ", a, b);
    for(int i=2; i<n; i++){
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}