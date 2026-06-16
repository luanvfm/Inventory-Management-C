#include <asm-generic/errno.h>
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

void imprimir_produtos(Produto *produto, int quantidadeItems) {
  for (int i = 0; i < quantidadeItems; i++) {
    printf("Produto %d \n", (produto + i)->id);
    printf("Preço: %.2f \n", (produto + i)->preco);
  }
}

int main() {
  /* ---- Atividade 1 ----
    *pricePtr = *pricePtr * 1.40;B
    printf("%.2f\n", price);
  */

  /* Parte da Atividade 2
  float preco = 100.0;
  float *precoPtr = &preco;
  */

  /* Parte da atividade 3
  Produto produto;
  produto.id = 1;
  produto.preco = 100;

  aplicar_desconto(&produto, 10);

  printf("%.2f\n", produto.preco);
  */

  Produto estoque[3];
  // Inicializar estoque
  for (int i = 0; i < 3; i++) {
    if (i == 0) {
      estoque[i].id = i + 1;
      estoque[i].preco = 100;
    } else {
      estoque[i].id = i + 1;
      estoque[i].preco = estoque[i - 1].preco + 10;
    }
  }

  imprimir_produtos(estoque, 3);
}