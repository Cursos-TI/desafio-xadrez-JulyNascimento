#include <stdio.h>

int main (){
    //variáveis
    int movimento1 = 1;
    int movimento2 = 1;
    int movimento3 = 1;
    char peca1[10] = "Torre";
    char peca2[10] = "Bispo";
    char peca3[10] = "Rainha";

    //chamada para inicialização do jogo.
    printf("### QUE VENÇA O MELHOR! ###\n");
    printf("Jogo de Xadres!!\n");

    //Movimento da rainha 8 vezes para a esquerda.
    
for (movimento3 = 1; movimento3 <= 16; movimento3++)
{   
    if (movimento3 % 2 == 0){
    printf("%s moveu-se para a esquerda!\n", peca3);
    movimento3++;}
}
    //movimentos da Torre cinco vezes para direita
while (movimento1 <= 5)
    {
    printf("%s moveu-se para direita!\n",peca1);
    movimento1++;
    }
    //Movimentos do Bispo cinco vezes na diagonal.
do
{
    printf("%s moveu-se para cima e à direita!\n", peca2);
    movimento2++;
} while (movimento2 <= 5);

        //Fim de Jogo
    return 0;
}
