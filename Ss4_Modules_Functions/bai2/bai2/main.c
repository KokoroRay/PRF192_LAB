#include <stdio.h>
#include <stdlib.h>
#include "Ex02Lib.h"

int main() {
printf("All Amstrong numbers are: ");
  for (int i = 2; i <= 1000; i++) {
    if (isAmstrong(i)) {
      printf("%d ", i);
    }
  }

  return 0;
}
