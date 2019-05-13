#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define LIMPAR system("cls")

// Armazena nome dos jogadores
void nomes(char jog1[], char jog2[]){

    LIMPAR;
    fflush(stdin); // limpa buffer de teclado (windows)
    printf("Digite o nome do Jogador 1: ");
    gets(jog1);
    printf("Digite o nome do Jogador 2: ");
    gets(jog2);
    LIMPAR;
}

// Menu com op��es
int menu(void){

    int x, op=0;
    while (op == 0)
    {
        LIMPAR;
        printf("\n\n\n\n\t\t\t\t Bem vindo ao jogo da velha!!!");
        printf("\n\n\n\n\n\n\n\tQual versao deseja jogar?\n");
        printf("\t1 - Regras e intrucoes\n");
        printf("\t2 - Versao classica\n");
        printf("\t3 - Versao estendida\n");
        printf("\n\tOpcao escolhida:  ");
        scanf("%d", &x);
        if (x==1)
            return 1;
        else if (x==2)
            return 2;
        else if (x==3)
            return 3;
        else
            op = 0;
    }
}

// Exibe regras e indtrucoes do jogo
void instrucoes(void){

    LIMPAR;
    printf("\n\n\t\t\t\t Instrucoes do jogo classico:\n\n\n");
    printf("O tabuleiro e uma matriz 3x3\n");
    printf("O jogador um (X) e o Jogador dois (O) se alternam, uma marcacao por vez, numa lacuna que esteja vazia.\n");
    printf("O objetivo e conseguir tres 'X' ou tres 'O' em linha horizontal, vertical ou diagonal.\n");
    printf("Ao mesmo tempo impedir o adversario de ganhar na proxima jogada.\n");
    printf("Caso nenhum jogador consiga 3 simbolos consecutivos, o jogo dara 'velha' ou seja, empate.\n\n\n");

    printf("\n\n\t\t\t\t Instrucoes do jogo estendido:\n\n\n");
    printf("O tabuleiro e uma matriz nxn, definida pelos jogadores\n");
    printf("O jogador um (X) e o Jogador dois (O) se alternam, uma marcacao por vez, numa lacuna que esteja vazia.\n");
    printf("O objetivo e conseguir tres 'X' ou tres 'O' em linha horizontal, vertical ou diagonal.\n");
    printf("Ao mesmo tempo impedir o adversario de ganhar na proxima jogada.\n");
    printf("Caso nenhum jogador consiga 3 simbolos consecutivos, o jogo dara 'velha' ou seja, empate.\n\n\n");

}

// Exibe o jogo atual
void exibejogo(int tam, char mat[tam][tam]){

    int i,j,k;

    LIMPAR;
    printf("\n\n\n\t\t  ");                 // Exibe n�meros das colunas
    for (i=0; i<tam; i++)
        printf("   %d", i+1);

    printf("\n\t\t   ");                    // Imprime Linha de acordo com o tamanho da matriz
    for (i=0; i<tam; i++)
        printf("----");
    printf("\n");

    for (i=0; i<tam; i++)
    {
        printf("\t\t");
        printf (" %d ", i+1);               // Imprime n�mero da linha
        for (j=0; j<tam; j++)
            printf("| %c ", mat[i][j]);     // Imprime valores da matriz
        printf("|\n\t\t   ");
        for (k=0; k<tam; k++)
            printf("----");                 // Imprime separacao entre linhas
        printf("\n");
    }
    printf("\n");
}

// Processa jogada atual
void jogada(int tam, char mat[tam][tam], char jog[], char inst){

    int x,y,op=1;

    while (op == 1)
    {
        system ("cls");
        exibejogo(tam, mat);
        printf("  %s, \n  Escolha a linha e coluna para preencher com %c:  ", jog, inst);
        scanf ("%d %d", &x, &y);
        if (isalnum(x)==0 && isalnum(y)==0 && x<=tam && y<=tam)
        {
            if (mat[x-1][y-1] == ' ')
                {
                    mat[x-1][y-1] = inst;
                    break;
                }
            else if (mat[x-1][y-1] != ' ')
            {
                printf(" Posicao ja utilizada anteriormente. \n Tente novamente\n\n\n");
                system("pause");
                op = 1;
            }
        }
        else
            op = 1;
    }
}

// Limpa matriz do jogo atual
void limpamatriz(int tam, char mat[tam][tam]){

    int i,j;
    for (i=0; i<tam; i++)
        for (j=0; j<tam; j++)
            mat[i][j] = ' ';
}

// Verifica se h� ganhadores
int ganhador(int tam, char mat[tam][tam], char jog[], char jogesp[], int k){

    int i,j;

    //linhas
    for(i=0; i<tam; i++)
        for(j=0; j<tam-2; j++)
            if (mat[i][j] == mat[i][j+1] && mat[i][j+1] == mat[i][j+2] && mat[i][j] != ' ')
            {
                LIMPAR;
                exibejogo(tam, mat);
                printf("\n\n\t\t%s Ganhou. Parabens!!!\n\n\n", jog);
                return 1;
            }

    //colunas
    for(i=0; i<tam-2; i++)
        for(j=0; j<tam; j++)
            if (mat[i][j] == mat[i+1][j] && mat[i+1][j] == mat[i+2][j] && mat[i][j] != ' ')
            {
                LIMPAR;
                exibejogo(tam, mat);
                printf("\n\n\t\t%s Ganhou. Parabens!!!\n\n\n", jog);
                return 1;
            }
    //Diagonais principais
    for(i=0; i<tam-2; i++)
        for(j=0; j<tam-2; j++)
            if (mat[i][j] == mat[i+1][j+1] && mat[i+1][j+1] == mat[i+2][j+2] && mat[i][j] != ' ')
            {
                LIMPAR;
                exibejogo(tam, mat);
                printf("\n\n\t\t%s Ganhou. Parabens!!!\n\n\n", jog);
                return 1;
            }

    //Diagonais secundarias
    for(i=0; i<tam-2; i++)
        for(j=2; j<tam; j++)
            if (mat[i][j] == mat[i+1][j-1] && mat[i+1][j-1] == mat[i+2][j-2] && mat[i][j] != ' ')
            {
                LIMPAR;
                exibejogo(tam, mat);
                printf("\n\n\t\t%s Ganhou. Parabens!!!\n\n\n", jog);
                return 1;
            }

    //Empate
        for(i=0; i<=tam*tam; i++)
            for(j=0; j<=tam*tam; j++)
                if(mat[i][j] == ' ')
                    return 0;
        LIMPAR;
        exibejogo(tam, mat);
        printf("\n\n\t\t O Jogo deu velha!!!");
        printf("\n\t\t %s e %s empataram desta vez !!!\n\n\n", jog, jogesp);
        return 1;

return 0;
}

// Jogo cl�ssico
int classica(int tam, char mat[tam][tam], char jog1[], char jog2[]){

    int i,j;

    printf("Versao Classica:   \n\n");
    limpamatriz(tam, mat);

    //Controla jogadas
    for (i=0; i<(tam*tam-1); i++)
    {
        jogada(tam, mat, jog1, 'X');
        if ( ganhador(tam, mat, jog1, jog2, i) == 1)
            return 1;
        jogada(tam, mat, jog2, 'O');
        if ( ganhador(tam, mat, jog2, jog1, i) == 1)
            return 1;
    }
return 0;
}

// Jogo de tamanho estendido
int estendida(char jog1[], char jog2[]){

    int tam, **p, i, j;

    LIMPAR;
    printf("\n\n\n\t\tVersao Estendida:   \n\n");
    printf("\n\n\nDigite o tamanho do tabuleiro do jogo:   ");
    scanf("%d", &tam);

    //Cria matriz quadrada por alocacao dinamica
    p = (int**) malloc (tam*sizeof(int*));
    for (i = 0; i < tam; i++)
        p[i] = (int*) malloc(tam * sizeof(int));

    limpamatriz(tam, p);

    //Controla jogadas
    for (i=0; i<(tam*tam-1); i++)
    {
        jogada (tam, p, jog1, 'X');
        if ( ganhador(tam, p, jog1, jog2, i) == 1)
            return 1;
        jogada (tam, p, jog2, 'O');
        if ( ganhador(tam, p, jog2, jog1, i) == 1)
            return 1;
    }
return 0;
}

// Recome�ar jogo
int jogar_novamente(void){

    int op=1;
    char ag;

    while (op == 1)
    {
        system("pause");
        LIMPAR;
        printf("\n\n\n\n\n\n\n");
        printf("\t\t Deseja jogar novamente ? \n");
        printf("\t\t S - Sim\n");
        printf("\t\t N - Nao\n");
        printf("\n\n\t\t Sua escolha: ");
        scanf(" %c", &ag);
        if (ag == 's' || ag =='S')
            return 1;
        else if (ag == 'n' || ag == 'N')
            return 0;
        else
        {
            op = 1;
            printf("\n\tOpcao invalida. Tente novamente.\n\t");
        }
    }
}

// Agradecimentos
void agradecimento (void){
    LIMPAR;
    printf ("\n\n\n\n\n\n\n\n\n\n\n\n\t\t        Obrigado por usar este programa!!\n");
    printf ("\t\tDesenvolvido por: Gabriel Augusto Requena dos Reis\n");
    printf ("\t\t       Sistemas de informacao - UFOP (2017) \n\n\n\n\n");
    system ("pause");
}

// Fun��o principal
int main (){

    int op = 1, tam=3;
    char jog1[31], jog2[31];

    nomes(jog1, jog2);

    while (op == 1)
    {
        if (menu() == 1)
        {
            instrucoes();
            system("pause");
            op = 1;
        }
        if (menu() == 2)
        {
            char mat[tam][tam];
            classica(tam, mat, jog1, jog2);
        }
        else
            estendida(jog1, jog2);
        op = jogar_novamente();
    }

    agradecimento();

return 0;
}
