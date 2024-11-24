#include <stdio.h>

long long F(int n) {
    return n < 2 ? n: F(n - 2) * F(n - 1);
}
