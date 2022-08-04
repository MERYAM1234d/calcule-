#include <stdio.h>
#include <stdlib.h>
   int main()
   {


       int A,B;
       char op;
       printf("veuillez saisair la valeur de A:\n");
       scanf("%d",&A);
       printf("veuillez saisir la valeur de B:\n");
       scanf("%d",&B);
       printf("Entrez un operateur :\n");
       scanf(" %c",&op);
       switch(op){
           case '+' : printf("A+B=%d",A+B);
                    break;
            case'-': printf("A_B=%d",A-B);
                    break;
            case'*': printf("A*B=%d" ,A*B);
                    break;
             case'/' : if(B!=0)
                  printf("A/B=%d",A/B);
                     else
                  printf("la divition par 0 est impossible.\n");
                     break;
                default : printf("l'operateur est incorecte \n");
                break;

                }
     return 0;


}










