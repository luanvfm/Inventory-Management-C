#include <stdio.h>

typedef struct Produto {
  int id;
  float preco;

} Produto;

/* ---- Atividade 2 ----
 void aplicar_desconto(float *preco, float porcentDesconto) {
  float desconto = *preco * (porcentDesconto / 100);
  float precoNovo = *preco - desconto;
  *preco = precoNovo;
}*/

void aplicar_desconto(Produto *produto, float porcentDesconto) {
  float desconto = produto->preco * (porcentDesconto / 100);
  float precoNovo = produto->preco - desconto;
  produto->preco = precoNovo;
}

int main() {
  /* ---- Atividade 1 ----
    *pricePtr = *pricePtr * 1.40;
    printf("%.2f\n", price);
  */

  /* Parte da Atividade 2
  float preco = 100.0;
  float *precoPtr = &preco;
  */

  Produto produto;
  produto.id = 1;
  produto.preco = 100;

  aplicar_desconto(&produto, 10);

  printf("%.2f\n", produto.preco);
}