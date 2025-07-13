// convert binary to decimal

#include <stdio.h>
#include <math.h>
int main() {
  int dec = 0, i = 0, rem;
  long long n;
  printf("Enter a binary number: ");
  scanf("%lld", &n);
  printf("\nYour Binary Number is: %lld",n);
   while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  printf("\nYour Decimal Number is: %d",dec);
  return 0;
}
