#include <stdio.h>

float price = 100.0;
float *pricePtr = &price;

int main() {
  *pricePtr = *pricePtr * 1.40;
  printf("%.2f\n", price);
}