#include <stdio.h>

void aplicar_desconto(float *preco, float porcentDesconto) {
  float desconto = *preco * (porcentDesconto / 100);
  float precoNovo = *preco - desconto;
  *preco = precoNovo;
}

int main() {
  // Atividade 1
  //  *pricePtr = *pricePtr * 1.40;
  //  printf("%.2f\n", price);
  float preco = 100.0;
  float *precoPtr = &preco;
  aplicar_desconto(&preco, 10);

  printf("%.2f\n", preco);
}