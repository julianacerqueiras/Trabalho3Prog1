#include <stdio.h>

int main()
{
    int i, j, batalha[5][5], continuar;
    char nome[50];


    do
    {
         
    printf("Qual o seu nome\n");
    scanf ("%s", nome);
    
   printf ("\nDigite valor para os elementos da matriz\n\n");
     for (i=0; i<5; i++)
     {
         for(j=0; j<5; j++)
         {         
                   printf ("\nElemento[%d][%d] = ", i+1, j+1);
                   scanf ("%d", &batalha[ i ][ j ]);
         }
     }
     for (i=0; i<5; i++)
     {
         for(j=0; j<5; j++)
         {         
                   printf(" %d ",batalha[i][j]);
         }
         printf("\n");
     }
         printf("Digite a linha e a coluna:\n");
         scanf("%d%d", &i, &j);
         
         if (batalha[i][j] == 1)
         {
              printf("BOMBA");
         }
         else if ( batalha[i][j] == 0)
         {
              printf("ÁGUA");
         }
         
         printf ("\n Deseja continuar? 1=Sim/2=Nao\n");
         scanf("%d", &continuar);
         
         }while( continuar == 1);
         
     
                                              
   

  
  return(0);
}
   