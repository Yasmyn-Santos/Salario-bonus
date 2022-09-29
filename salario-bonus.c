#include <stdio.h>

/*  Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). 
Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.

Entrada
O arquivo de entrada contém um texto (primeiro nome do vendedor) e 2 valores de dupla precisão (double) com duas casas decimais, representando o 
salário fixo do vendedor e montante total das vendas efetuadas por este vendedor, respectivamente.

Saída
Imprima o total que o funcionário deverá receber, conforme exemplo fornecido. */

 
int main() {
    
    int cd_pc1, num_pc1, cd_pc2, num_pc2;
    double val1, val2;
    scanf("%d %d %lf %d %d %lf", &cd_pc1, &num_pc1, &val1, &cd_pc2, &num_pc2, &val2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", (num_pc1*val1)+(num_pc2*val2));
    return 0;
}

