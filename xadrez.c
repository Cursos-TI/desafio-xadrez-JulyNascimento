#include <stdio.h>

int main (){
    //variáveis
    int movimentoT = 1;
    int movimentoB = 1;
    int movimentoR = 1;
    char peca1[10] = "Torre";
    char peca2[10] = "Bispo";
    char peca3[10] = "Rainha";

    //chamada para inicialização do jogo.
    printf("### QUE VENÇA O MELHOR! ###\n");
    printf("Jogo de Xadres!!\n");

    //Movimento da rainha 8 vezes para a esquerda.
    //movimentos da Torre cinco vezes para direita.
    //Movimentos do Bispo cinco vezes na diagonal.
    
for (movimentoT = 1; movimentoT <= 5; movimentoT++)
{   
    printf("%s moveu-se para a Direita!\n", peca1);
}
while (movimentoB <= 5)
    {
    printf("%s moveu-se para cima e à direita!\n", peca2);
    movimentoB++;
    }
do
{
    printf("%s moveu-se para Esquerda!\n", peca3);
    movimentoR++;
} while (movimentoR <= 8);
        //Fim de Jogo
    return 0;
}