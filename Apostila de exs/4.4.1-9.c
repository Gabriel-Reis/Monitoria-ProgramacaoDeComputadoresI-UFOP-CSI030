#include <stdio.h>

int main (){

    float func[10][2], aux;
    int i;

    for(i = 0; i<10; i++){
        printf("Digite a matricula do funcionario %d: ",i+1);
        scanf("%f",&func[i][1]);
        printf("Digite o salario do funcionario %d: ",i+1);
        scanf("%f",&func[i][2]);
    }

    for(i = 0; i<10; i++){

        printf("Funcionario %.0f\n",i+1);
        printf("Matricula: %.2f\n", func[i][1]);
        printf("Salario: %.2f\n", func[i][2]);
        aux = func[i][2];
        if((aux % 2)){ //salario par
            printf("Aumento: 15\n");
            printf("Novo salario: %.2f\n", func[i][2]*1.15);
        }
        else{
            printf("Aumento: 15\n");
            printf("Novo salario: %.2f\n", func[i][2]*1.15);
        }

    }
}
