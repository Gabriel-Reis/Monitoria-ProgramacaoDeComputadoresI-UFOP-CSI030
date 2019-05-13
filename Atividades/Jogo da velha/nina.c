#include <stdio.h>
#include <stdlib.h>



int tamanho = 0; // variaveis globais para saber o tamanho da matriz NxN e para armazenar a vez de quem esta jogando
int vez;


// cabecalho das funções
int menu();
void preenche_nome(char jogador1[100], char jogador2[100]);
void zeraTabuleiro(int tabuleiro[tamanho][tamanho], int tamanho);
void exibeTabuleiro(int tabuleiro[tamanho][tamanho], int tamanho);
void start(int tabuleiro[tamanho][tamanho], char nome1[100], char nome2[100], int tamanho);
int checaLocal(int tabuleiro[tamanho][tamanho], int i, int j, int tamanho);
int checaLinha(int tabuleiro[tamanho][tamanho], int tamanho);
int checaColuna(int tabuleiro[tamanho][tamanho], int tamanho);
int checaDiagonal(int tabuleiro[tamanho][tamanho], int tamanho);
int checaEmpate(int tabuleiro[tamanho][tamanho], int tamanho);
int checaTermino(int tabuleiro[tamanho][tamanho], char nome1[100], char nome2[100], int tamanho);
void jogada(int tabuleiro[tamanho][tamanho], int tamanho);


int main (){



    int opcao, jogo[3][3];// variavel para a opção de jogo e a matriz 3x3
    char jogador1[100], jogador2[100];// variavel para o nome dos jogadores


    opcao = menu();// chama funcao menu e atribui o retorno em opção
    vez = 1;// inicializa vez com 1

    switch(opcao){// case das opções de jogo
    case 1:// case para jogos 3x3
        zeraTabuleiro(jogo, 3);//zera o tabuleiro 3x3
        preenche_nome(jogador1, jogador2); // preenche as variaveis nome1 e nome 2
        tamanho = 3; // atribui 3 ao tamanho da matriz
        start(jogo, jogador1, jogador2, tamanho); // inicializa o jogo

        break;

    case 2: // case para jogos NxN
        printf("\n Jogo estendido\n");
        do // usado para forçar o usuario a digitar um numero maior que 3
        {
            printf("Digite o tamanho da matrix NxN: ");
            scanf("%d", &tamanho); // captura o tamanho da matriz desejada
            if(tamanho < 3) // caso o tamanho seja invalido mostra uma msg
            {
                printf("\nvalor pequeno de mais\n\n");
            }
        }
        while(tamanho < 3);
        system("cls");//  limpa tela

        int jogo[tamanho][tamanho]; // cria a matriz com o tamanho escolhido
        preenche_nome(jogador1, jogador2); // preenche os nomes
        zeraTabuleiro(jogo, tamanho); // zera o tabuleiro N x N

        start(jogo, jogador1, jogador2, tamanho);  //inicializa o jogo

        break;

    }

    return 0;
}

int menu()//*********************************
{ // função que exibe o menu
    int x; // variavel que armazena a opção desejada
    system("cls");

    printf("Jogo da Velha\n"); //opções do menu
    printf("\n 1 --> 3x3\n");
    printf(" 2 --> NxN (Estendido)\n");
    printf(" 3 --> Sair\n");
    do{
        printf("\n--> ");
        scanf("%d", &x);

        if(x > 4||x < 1)// caso a opção seja invalida
        {// mensagem de erro exibida
            printf("\nDigite o modo que sedeja jogar: \n");
        }
    }
    while(x < 1 || x > 3);
    return x;// retorna a opção desejada valida
}

void preenche_nome(char jogador1[100], char jogador2[100])//*********************************
{// captura o primeiro e o segundo nome dos jogadores com tamanho de ate 100 caracteres contando com barra 0
    printf("\n\nDigite o nome do primeiro jogador :\n");
    fflush(stdin);
    fgets(jogador1, 100, stdin);
    printf("Digite o nome do segundo jogador :\n");
    fflush(stdin);
    fgets(jogador2, 100, stdin);
}

void zeraTabuleiro(int tabuleiro[tamanho][tamanho], int tamanho)//*********************************
{// zera todas posições do tabuleiro
    int i, j;
    for(i = 0 ; i < tamanho ; i++)
        for(j = 0 ; j < tamanho ; j++){
            tabuleiro[i][j] = 0;
        }

}

void exibeTabuleiro(int tabuleiro[tamanho][tamanho], int tamanho)//*********************************
{// exibe o tabuleiro e oq esta em suas respectivas posições
    int i, j;
    printf("\n");

    for(i = 0 ; i < tamanho ; i++)
    {
        for(j = 0 ; j < tamanho ; j++)
        {
            if(tabuleiro[i][j] == 0)// caso tenha 0 ele exibe espaços
                printf("    ");
            else if(tabuleiro[i][j] == 1) //caso tenha 1 ele exibe X
                printf("  X ");
            else
                printf("  O "); // caso tenha 0 ele exiba O

            if(j != (tamanho-1)) // utiliza para dividir o tabuleiro
                printf("|");
        }
        printf("\n");
    }
    printf("\n");
}
void start(int tabuleiro[tamanho][tamanho], char nome1[100], char nome2[100], int tamanho)//*********************************
{ // inicializa o jogo


    zeraTabuleiro(tabuleiro, tamanho);// zera o tabuleiro

    do//repete ate o jogo nao terminar
    {
        system("cls");
        exibeTabuleiro(tabuleiro, tamanho);
        jogada(tabuleiro, tamanho);// pede jogadas dos jogadores

    }
    while(checaTermino(tabuleiro, nome1, nome2, tamanho) != 1);// funcao q checa se o jogo terminou
}

int checaLocal(int tabuleiro[tamanho][tamanho], int i, int j, int tamanho)//*********************************
{// confere se a linha e coluna escolhida são validas
    if(i < 0 || i > (tamanho-1) || j < 0 || j > (tamanho-1) || tabuleiro[i][j] != 0)
        return 0;
    else
        return 1;
}

int checaLinha(int tabuleiro[tamanho][tamanho], int tamanho)//*********************************
{//percorre a linha vendo se a repetição 3 vezes de X ou O se tiver retorna 1
    int i, j,
        soma = 0;

    if((vez%2) + 1 == 1)
    {

        for(i = 0 ; i < tamanho ; i++)
        {
            soma=0;

            for(j = 0 ; j < tamanho ; j++)
            {

                if(tabuleiro[i][j] != 1)
                {
                    soma = 0;
                }
                else
                {
                    soma ++;
                }

                if(soma > 2)
                {
                    return 1;
                }
            }
        }
    }
    else
    {
        for(i = 0 ; i < tamanho ; i++)
        {
            soma=0;

            for(j = 0 ; j < tamanho ; j++)
            {

                if(tabuleiro[i][j] == 1 || tabuleiro[i][j] == 0)
                {

                    soma = 0;
                }
                else
                {
                    soma ++;
                }


                if(soma > 2)
                {
                    return 1;
                }
            }
        }

    }
    return 0;
}

int checaColuna(int tabuleiro[tamanho][tamanho], int tamanho)//*********************************
{// percorre as colunas somando as repetições caso seja igual a 3 retorna1
    int i, j,soma = 0;

    if((vez%2) + 1 == 1)
    {

        for(j = 0 ; j < tamanho ; j++)
        {
            soma=0;

            for(i = 0 ; i < tamanho ; i++)
            {

                if(tabuleiro[i][j] != 1)
                {

                    soma = 0;
                }
                else
                {
                    soma ++;
                }

                if(soma > 2)
                {
                    return 1;
                }
            }
        }
    }
    else
    {
        for(j = 0 ; j < tamanho ; j++)
        {
            soma=0;

            for(i = 0 ; i < tamanho ; i++)
            {

                if(tabuleiro[i][j] == 1 || tabuleiro[i][j] == 0)
                {
                    soma = 0;
                }
                else
                {
                    soma ++;
                }

                if(soma > 2)
                {
                    return 1;
                }
            }
        }

    }
    return 0;
}

int checaDiagonal(int tabuleiro[tamanho][tamanho], int tamanho)//*********************************
{// a cada X ou O ele eprcorre tanto a diagonal para esquerda quanto para direita
    // caso repita 3 vezes seguidas X ou O ele retorna 1
    int i, j, iaux, jaux, soma = 0;


    for(i = 0 ; i < tamanho ; i++)
    {
        for(j = 0; j < tamanho; j++)
        {
            soma = 0;

            if(tabuleiro[i][j] == 1)
            {

                soma++;

                if(tabuleiro[i+1][j+1] == 1)
                {

                    soma++;

                    if(tabuleiro[i+2][j+2] == 1)
                    {

                        soma++;
                    }
                }
            }
            if(soma == 3)
            {
                return 1;
            }
            else
            {
                soma = 0;
            }

            if(tabuleiro[i][j] == 1)
            {
                soma++;

                if(tabuleiro[i+1][j+1] == 1)
                {
                    soma++;

                    if(tabuleiro[i+2][j+2] == 1)
                    {
                        soma++;
                    }
                }
            }
            if(soma == 3)
            {
                return 1;
            }
            else
            {
                soma = 0;
            }
        }
    }

    soma = 0;
    for(i = 0 ; i < tamanho ; i++)
    {
        for(j = 0; j < tamanho; j++)
        {
            soma = 0;

            if(tabuleiro[i][j] == -1)
            {

                soma++;

                if(tabuleiro[i+1][j-1] == -1)
                {

                    soma++;

                    if(tabuleiro[i+2][j-2] == -1)
                    {

                        soma++;
                    }
                }
            }
            if(soma == 3)
            {
                return 1;
            }
            else
            {
                soma = 0;
            }

            if(tabuleiro[i][j] == -1)
            {
                soma++;

                if(tabuleiro[i+1][j+1] == -1)
                {
                    soma++;

                    if(tabuleiro[i+2][j+2] == -1)
                    {
                        soma++;
                    }
                }
            }
            if(soma == 3)
            {
                return 1;
            }
            else
            {
                soma = 0;
            }
        }
    }

    return 0;
}

int checaEmpate(int tabuleiro[tamanho][tamanho], int tamanho)//*********************************
{// caso todas casas do tabuleiro estejam ocupadas e nem uma das funões anteriores retornou temrino então deu impate !
    int i, j;

    for(i = 0 ; i < tamanho ; i++)
        for(j = 0 ; j < tamanho ; j++)
            if(tabuleiro[i][j] == 0)
                return 0;

    return 1;
}

int checaTermino(int tabuleiro[tamanho][tamanho], char nome1[100], char nome2[100], int tamanho)
{// verifica o retorno das funções de checar linha,coluna,diagonal e empate e diz quem venceu

    printf("vez do %d jogador ", vez);
    if(checaLinha(tabuleiro, tamanho))
    {
        if((vez%2) + 1 == 1)
        {
            printf(" --> Jogador  vencedor:");
            puts(nome1);
        }
        else
        {
            printf(" --> Jogador  vencedor:");
            puts(nome2);
        }
        exibeTabuleiro(tabuleiro, tamanho);
        return 1;
    }
    if(checaColuna(tabuleiro, tamanho))
    {
        if((vez%2) + 1 == 1)
        {
            printf(" --> Jogador  vencedor:");
            puts(nome1);
        }
        else
        {
            printf(" --> Jogador  vencedor:");
            puts(nome2);
        }
        exibeTabuleiro(tabuleiro, tamanho);
        return 1;
    }

    if(checaDiagonal(tabuleiro, tamanho))
    {
        if((vez%2) + 1 == 1)
        {
            printf(" --> Jogador  vencedor:");
            puts(nome1);
        }
        else
        {
            printf(" --> Jogador  vencedor:");
            puts(nome2);
        }
        exibeTabuleiro(tabuleiro, tamanho);
        return 1;
    }

    if(checaEmpate(tabuleiro, tamanho))
    {
        printf(" --> Ocorreu um empate! !\n\n");
        exibeTabuleiro(tabuleiro, tamanho);
        return 1;
    }

    return 0;
}

void jogada(int tabuleiro[tamanho][tamanho], int tamanho)//*********************************
{// pede para o usuario digitar a linha e a coluna e diz na vez de qual jogador esta
    int i, j;
    vez++;
    printf("\nVez do Jogador %d \n", (vez % 2) + 1);

    do
    {
        printf("Informe a linha: ");
        scanf("%d", &i);
        i--;

        printf("Informe a coluna a Coluna: ");
        scanf("%d", &j);
        j--;

        if(checaLocal(tabuleiro, i, j, tamanho) == 0)
            printf("Linha e coluna invalida. Tente novamente \n");

    }
    while(checaLocal(tabuleiro, i, j, tamanho) == 0);

    if(vez%2)
        tabuleiro[i][j] = -1;
    else
        tabuleiro[i][j] = 1;
}
