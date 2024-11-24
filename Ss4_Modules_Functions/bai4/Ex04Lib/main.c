 #include <stdio.h>


 int divisorsCount(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count += 1;
        }
    }
    if (count == 2) {
        return count;
    }
 }
 int isPrimeNumber(int n) {
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            count +=1;
        }
    }
    if (count > 0) {
        return count;
    }
    else
        return count;

 }
