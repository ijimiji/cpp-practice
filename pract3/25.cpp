#include <iostream>
#include <vector>

unsigned int sum(std::vector<unsigned int> xss) {
  unsigned int sum = 0;
  for (unsigned int x : xss)
    sum += x;
  return sum;
}

std::vector<unsigned int> split(unsigned int n) {
  std::vector<unsigned int> ds;
  while (n > 0) {
    ds.push_back(n % 10);
    n /= 10;
  }
  return ds;
}

bool isPrime(int n) {
  if (n <= 1)
    return false;

  for (int i = 2; i < n; i++)
    if (n % i == 0)
      return false;

  return true;
}

int main() {
  unsigned int n;
  std::cin >> n;
  if (isPrime(sum(split(n))))
    std::cout << ((isPrime(n)) ? "Given number is prime"
                               : "Given number is not prime")
              << std::endl;
  else std::cout << "Given number is not prime" << std::endl;
  return 0;
}
