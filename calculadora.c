#include <stdio.h> // stdio.h � a biblioteca padr�o da linguagem C
#include <math.h> // A biblioteca Math armazena fun��es matematicas em geral


//Fun��o de soma
void adicao() {  //void chama uma fun��o
   printf("[SOMA]\n\n");
   float a1, a2, soma ; //defini��o de variavel

   printf("Selecione o primeiro n�mero: ");
   scanf("%f", &a1); //input para escolha do 1 numero
   printf("Selecione o segundo n�mero: ");
    while (getchar() != '\n'){ //enquanto n�o achar o "/n" limpa o buffer
        printf("Esse n�o � um valor valido, por favor escolha entre as op��es:\n\n");
        return(adicao()); // retorna a fun��o soma
      }
   scanf("%f", &a2); //input para escolha do 2 numero
   soma = a1 + a2 ; //variavel "soma" recebe o 1 numero e soma com o 2 numero
   printf("Resultado: %.2f\n\n", soma); // mostra o resultado da soma
}

//fun��o de subtra��o
void subtracao() {
   printf("[SUBTRA��O]\n\n");
   float s1, s2, sub ; //declarada as variavels
   printf("Selecione o primeiro n�mero: ");
   scanf("%f", &s1); // comando de entrada
   printf("Selecione o segundo n�mero: ");
   scanf("%f", &s2);// comando de entrada
  while (getchar() != '\n'){ // //enquanto n�o achar o "/n" limpa o buffer
        printf("Esse n�o � um valor valido, por favor escolha entre as op��es:\n\n");
        return(subtracao());// retorna a fun��o subtra��o
      }
   sub = s1 - s2 ; //variavel "subtracao" recebe o 1 numero e subtrai com o 2 numero
   printf("Resultado: %.2f\n\n", sub);
}

//fun��o de divisao
void divisao() {
   printf("[DIVIS�O]\n\n");
   float d1, d2, div ;
   printf("Selecione o Dividendo: ");
   scanf("%f", &d1);
   printf("Selecione o Divisor: ");
   scanf("%f", &d2);
   while (getchar() != '\n'){ //enquanto n�o achar o "/n" limpa o buffer
        printf("Esse n�o � um valor valido, por favor escolha entre as op��es:\n\n");
        return(divisao()); // retorna a fun��o divis�o
      }
   div = d1/d2 ; //variavel "divisao" recebe o 1 numero e divide com o 2 numero
   printf("Resultado: %.2f\n\n", div);
}

//fun��o de multiplica��o
void multiplicacao() {
   printf("[MULTIPLICA��O]\n\n");
   float m1, m2, mul ;
   printf("Selecione o primeiro n�mero: ");
   scanf("%f", &m1);
   printf("Selecione o segundo n�mero: ");
   scanf("%f", &m2);
  while (getchar() != '\n'){ //enquanto n�o achar o "/n" limpa o buffer
        printf("Esse n�o � um valor valido, por favor escolha entre as op��es:\n\n");
       return(multiplicacao()); // retorna a fun��o multiplica��o
      }
   mul = m1 * m2 ; //variavel "multiplicacao" recebe o 1 numero e multiplica com o 2 numero
   printf("Resultado: %.2f\n\n", mul);
}

//fun��o de seno
void seno() {
   printf("[SENO]\n\n");
   float sn1, sen ;
   printf("Selecione o primeiro n�mero: ");
   scanf("%f", &sn1);
  while (getchar() != '\n'){ //enquanto n�o achar o "/n" limpa o buffer
        printf("Esse n�o � um valor valido, por favor escolha entre as op��es:\n\n");
        return(seno()); // retorna a fun��o seno
      }
   sen = sin(sn1) ; //variavel "seno" recebe um numero e aplica a fun��o "sin" da biblioteca math
   printf("Resultado: %.2f\n\n", sen);
}

//fun��o de cosseno
void cosseno() {
   printf("[COSSENO]\n\n");
   float csn1, cosn ;
   printf("Selecione o primeiro n�mero: ");
   scanf("%f", &csn1);
  while (getchar() != '\n'){ //enquanto n�o achar o "/n" limpa o buffer
        printf("Esse n�o � um valor valido, por favor escolha entre as op��es:\n\n");
        return(cosseno()); // retorna a fun��o cosseno
      }
   cosn = cos(csn1) ; //variavel "cosseno" recebe um numero e aplica a fun��o "cos" da biblioteca math
   printf("Resultado: %.2f\n\n", cosn);
}

//fun��o de tangente
void tangente() {
   printf("[TANGENTE]\n\n");
   float tgnt, tang ;
   printf("Selecione o primeiro n�mero: ");
   scanf("%f", &tgnt);
  while (getchar() != '\n'){ //enquanto n�o achar o "/n" limpa o buffer
        printf("Esse n�o � um valor valido, por favor escolha entre as op��es:\n\n");
        return(tangente()); // retorna a fun��o tangente
      }
   tang = tan(tgnt) ; //variavel "tangente" recebe um numero e aplica a fun��o "tan" da biblioteca math
   printf("Resultado: %.2f\n\n", tang);
}


void potencia(){
printf("[POTENCIA]\n\n");
float base, expoente, pot; //Aqui declaro a base e o expoente que vai ser elevado a 2�, 3�, 4� casa decimal.
  printf("Insira a base: ");
  scanf("%f", &base) ; // Comando de entrada para a base
  printf("Insira o expoente: ");
  scanf("%f", &expoente) ;// Comando de entrada para o expoente
  while (getchar() != '\n'){ //enquanto n�o achar o "/n" limpa o buffer
        printf("Esse n�o � um valor valido, por favor escolha entre as op��es:\n\n");
        return(potencia()); // retorna a fun��o potencia
      }
  pot = pow(base,expoente); // Variavel "pow" recebe a fun��o pow da biblioteca math.h
  printf("O Resultado da potencia �: %.2f\n\n", pot);// Aqui � imprimido o resultado da exponencia��o
}

void radiciacao(){
  printf("[RADICIA��O]\n\n");
  float raiz; // Declarada a vari�vel "raiz"
  printf("Selecione o primeiro n�mero: ");
  scanf("%f", &raiz) ; // Comando de entrada para o numero o qual deseja aplicar a fun��o "sqrt"
  while (getchar() != '\n'){ //enquanto n�o achar o "/n" limpa o buffer
    //
        printf("Esse n�o � um valor valido, por favor escolha entre as op��es:\n\n");
        return(radiciacao()); // retorna a fun��o radicia��o
      }
  raiz = sqrt(raiz); //Variavel "raiz" recebe a fun��o "sqrt" da biblioteca math.h
  printf("Resultado da raiz � %.2f\n\n", raiz); // Retorna a vari�vel "raiz" e imprimi o resultado da radicia��o na tela

}

int raizes(){
    printf("[RAIZES]\n\n");
    float a, b, c;
    float delta, x1, x2;


    // Selecione os coeficientes do polin�mio (a,b,c)
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);
     while (getchar() != '\n'){ //enquanto n�o achar o "/n" limpa o buffer
        printf("Esse n�o � um valor valido, por favor escolha entre as op��es:\n\n");
        return(raizes()); // retorna a fun��o raizes
      }


    delta = b * b - 4 * a * c; //Segue a regra de proced�ncia dos operadores l�gicos

    // Verificando se h� ra�zes reais
    if (delta > 0) {
        // Calculando as ra�zes reais
        x1 = (-b + sqrt(delta)) / (2 * a); //formula das raizes
        x2 = (-b - sqrt(delta)) / (2 * a); //formula das raizes
      // caso os numeros inseridos n�o tiverem uma raiz real, a fun��o n�o � realizada

        printf("As raizes sao: %.2f e %.2f\n\n", x1, x2);
    } else if (delta == 0) {
        // Calculando a raiz real (caso delta seja = a zero)
        x1 = -b / (2 * a); //so calcula 1 raiz pois o delta � igual a 0

        printf("A raiz dupla e: %.2f\n\n", x1);
    } else {
        // N�o h� ra�zes reais (caso delta seja < que zero)
        printf("Nao existem raizes reais\n\n");
    }

    return 0;
}

//fun��o do menu
void menu(){
  int opcao; // declara variavel

  while(1){ // enquanto estiver no menu, mostre as op��es
    printf("Escolha um numero para come�ar a opera��o desejada:\n\n");
    printf(" [1] para soma\n ");
    printf("[2] para subtracao\n ");
    printf("[3] para divisao\n ");
    printf("[4] para multiplicacao\n ");
    printf("[5] para seno\n ");
    printf("[6] para cosseno\n ");
    printf("[7] para tangente\n ");
    printf("[8] para potencia\n ");
    printf("[9] para radiciacao\n ");
    printf("[10] para raizes\n ");
    printf("[11] para o menu\n\n ");

    scanf("%i." ,&opcao); //input para op��o

      while (getchar() != '\n'){ //enquanto n�o achar o "/n" limpa o buffer
        printf("Esse n�o � um valor valido, por favor escolha entre as op��es:\n\n");
        menu(); // retorna a fun��o menu
      }

    if(opcao == 1){ //escolha de tela
      adicao();
      continue;//voltar para o menu
    }else if(opcao == 2 ){
      subtracao();
      continue;
    }else if(opcao == 3 ){
      divisao();
      continue;
    }else if(opcao == 4 ){
      multiplicacao();
      continue;
    }else if(opcao == 5 ){
      seno();
      continue;
    }else if(opcao == 6 ){
      cosseno();
      continue;
    }else if(opcao == 7 ){
      tangente();
      continue;
    }else if(opcao == 8 ){
      potencia();
      continue;
    }else if(opcao == 9 ){
      radiciacao();
      continue;
    }else if(opcao == 10 ){
      raizes();
      continue;
    }else if(opcao == 11 ){
      menu();
      continue;
    }else if (opcao != 1||opcao != 2||opcao != 3||opcao != 4||opcao != 5||opcao != 6||opcao != 7||opcao != 8||opcao != 9||opcao != 10||opcao != 11){ //for�ar a escolher um valor valido
      printf("Esse n�o � um valor valido, por favor escolha entre as op��es:\n\n");
      continue; // retorna ao menu
    }
  }
}

int main(void) { //declara a fun��o menu
  menu();
  return 0;
}
