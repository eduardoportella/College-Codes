#include <stdio.h>
#include <stdlib.h>
#define N 5

//struct data{
//   int dia, mes, ano;          
//}; 
//// Primeira Alternativa
//struct Funcionario {
//   int codigo;
//   char nome[50];
//   float sal;
//   struct data dtnasc;      
//} cadastro[N];

// Alternativa Recomendada
typedef struct {
    int dia,mes,ano;        
} tdata;

typedef struct {
   int codigo;
   char nome[50];
   float sal;
   tdata dtnasc;         
} tfun;
tfun cadastro[N];
int tot=0;

void entrada() {
   int cod;  
   printf("Cod: ");
   scanf("%d", &cod);
   while (tot<N && cod!=0) {
      cadastro[tot].codigo= cod;   
      printf("Nome: "); 
      fflush(stdin);
      gets(cadastro[tot].nome);
      printf("Sal: ");
      scanf("%f", &cadastro[tot].sal);            
      printf("Data Nascimento: ");
      scanf("%d/%d/%d", &cadastro[tot].dtnasc.dia,
                        &cadastro[tot].dtnasc.mes,
                        &cadastro[tot].dtnasc.ano);
      tot++;
      printf("Cod: ");
      scanf("%d", &cod);
   }  
}

void mostra() {
    int i;
    system("cls");
    printf("Codigo    Nome                    Salario \n");
    for(i=0; i<tot; i++)
       printf("%4d  %-30s  %.2f\n", cadastro[i].codigo,
                                   cadastro[i].nome,
                                   cadastro[i].sal);      
    system("pause");   
}

int main() {
   entrada(); 
   mostra();
   return 0;    
}