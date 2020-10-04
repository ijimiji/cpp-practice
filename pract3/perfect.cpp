#include <iostream>
#include <stdio.h>

int main() {
  unsigned long long int i;
  int j, s, l, n, k;
  std::cin >> k;

  if (k >= 8) {
    k = 7;
    std::cout << "Max possible n can only be 7" << std::endl;
  }

  n = 0;
  for (i = 2; n != k; i++) {
    s = 0;
    for (j = 1; j < i; j++)
      if (i % j == 0)
        s += j;
    if (s == i) {
      std::cout << i << std::endl;
      n++;
    }
  }
  return 0;
}
