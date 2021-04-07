#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    typedef struct{
        char nome[20];
        char cargo[10];
        int matricula;
        float salario;
    }funcionario;

    funcionario f1;
    
    printf("\nDigite a Nome:");
    //scanf("%s", &f1.nome);
    gets(f1.nome);

    printf("\nDigite a Cargo:");
    //scanf("%s", &f1.cargo);
    //ou
    gets(f1.cargo);

    printf("\nDigite a Matricula:");
    scanf("%d", &f1.matricula);

    printf("\nDigite a Salario:");
    scanf("%f", &f1.salario);

    printf("\nO nome é %s, trabalha como %s, tem o numero a matricula: %d e o seu salario é %.2f", f1.nome, f1.cargo, f1.matricula, f1.salario);

    return 0;
}