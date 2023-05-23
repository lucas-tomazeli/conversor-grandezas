#include <stdio.h>
#include <locale.h>
void main ()
{
  setlocale (LC_ALL, "Portuguese");

  int opcao1, opcao2, opcao3, opcao4;
  double valor1, valor2, valor3;

  printf("Bem vindo! O que você deseja?\n1-Converter unidades\n2-Calcular valores de grandezas diferentes\n");
  printf("Digite o número da opção: ");
  scanf("%i", &opcao1);
   
    switch (opcao1){
       
        case 1: //converter unidades
            printf("\nInsira o primeiro valor: ");
            scanf("%lf", &valor1);
            printf("\nEsse valor é de:\n1-Tempo\n2-Distância\n3-Massa");
            printf("\nDigite o número da opção: ");
            opcao1 = 0; //zera a variável para usá-la novamente em outro switch case
            scanf("%i", &opcao2);
                
                switch (opcao2){
                   
                    case 1: //tempo
                        printf("\nEsse número corresponde a um valor de:");
                        printf("\n1-Milissegundo\n2-Segundo\n3-Minuto\n4-Hora");
                        printf("\nDigite o número da opção: ");
                        opcao2 = 0;//zera a variável para usá-la novamente em outro switch case
                        scanf("%i", &opcao1);
                        
                            switch (opcao1){
                                case 1: //Milissegundo
                                    printf("\nPara qual grandeza você deseja converter?");
                                    printf("\n1-Segundo\n2-Minuto\n3-Hora");
                                    printf("\nDigite o número da opção: ");
                                    scanf("%i", &opcao2);
                                    
                                        switch (opcao2){
                                            
                                            case 1: //Segundo
                                                valor1 = valor1 / 1000;
                                                printf("\nO seu valor em segundos é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 2: //Minuto
                                                valor1 = valor1 / 1000;
                                                valor1 = valor1 / 60;
                                                printf("\nO seu valor em minutos é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 3: //Hora
                                                valor1 = valor1 / 1000;
                                                valor1 = valor1 / 3600;
                                                printf("\nO seu valor em horas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                        }
                                break;
                                
                                case 2: //Segundo
                                    printf("\nPara qual grandeza você deseja converter?");
                                    printf("\n1-Milissegundo\n2-Minuto\n3-Hora");
                                    printf("\nDigite o número da opção: ");
                                    scanf("%i", &opcao2);
                                    
                                        switch (opcao2){
                                            
                                            case 1: //Milissegundo
                                                valor1 = valor1 * 1000;
                                                printf("\nO seu valor em milissegundos é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 2: //Minuto
                                                valor1 = valor1 / 60;
                                                printf("\nO seu valor em minutos é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 3: //Hora
                                                valor1 = valor1 / 3600;
                                                printf("\nO seu valor em horas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                        }
                                break;
                                
                                case 3: //Minuto
                                    printf("\nPara qual grandeza você deseja converter?");
                                    printf("\n1-Milissegundo\n2-Segundo\n3-Hora");
                                    printf("\nDigite o número da opção: ");
                                    scanf("%i", &opcao2);
                                    
                                        switch (opcao2){
                                            
                                            case 1: //Milissegundo
                                                valor1 = valor1 * 60000;
                                                printf("\nO seu valor em milissegundos é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 2: //Segundo
                                                valor1 = valor1 * 60;
                                                printf("\nO seu valor em segundos é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 3: //Hora
                                                valor1 = valor1 / 60;
                                                printf("\nO seu valor em horas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                        }
                                break;
                                
                                case 4: //Hora
                                    printf("\nPara qual grandeza você deseja converter?");
                                    printf("\n1-Milissegundo\n2-Segundo\n3-Minuto");
                                    printf("\nDigite o número da opção: ");
                                    scanf("%i", &opcao2);
                                    
                                        switch (opcao2){
                                            
                                            case 1: //Milissegundo
                                                valor1 = valor1 * 3600000;
                                                printf("\nO seu valor em milissegundoos é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 2: //Segundo
                                                valor1 = valor1 * 3600;
                                                printf("\nO seu valor em segundos é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 3: //Minuto
                                                valor1 = valor1 * 60;
                                                printf("\nO seu valor em minutos é de: ");
                                                printf("%lf", valor1);
                                            break;
                                        }
                                break;
                            }
                    break;
                    
                    case 2: //Distância
                        printf("\nEsse número corresponde a um valor de:");
                        printf("\n1-Milímetro\n2-Centímetro\n3-Decímetro\n4-Metro\n5-Decâmetro\n6-Hectômetro\n7-Quilômetro\n");
                        printf("\nDigite o número da opção: ");
                        opcao2 = 0;//zera a variável para usá-la novamente em outro switch case
                        scanf("%i", &opcao1);
                        
                            switch(opcao1){
                                
                                case 1: //Milímetro
                                    printf("\nPara qual grandeza você deseja converter?");
                                    printf("\n1-Centímetro\n2-Decímetro\n3-Metro\n4-Decâmetro\n5-Hectômetro\n6-Quilômetro\n");
                                    printf("\nDigite o número da opção: ");
                                    scanf("%i", &opcao2);
                                    
                                        switch (opcao2){
                                            
                                            case 1: //Centímetro
                                                valor1 = valor1 / 10;
                                                printf("\nO seu valor em centímetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 2: //Decímetro
                                                valor1 = valor1 / 100;
                                                printf("\nO seu valor em decímetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 3: //Metro
                                                valor1 = valor1 / 1000;
                                                printf("\nO seu valor em metros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 4: //Decâmetro
                                                valor1 = valor1 / 10000;
                                                printf("\nO seu valor em decâmetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 5: //Hectômetro
                                                valor1 = valor1 / 100000;
                                                printf("\nO seu valor em hectômetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 6: //Quilômetro
                                                valor1 = valor1 / 1000000;
                                                printf("\nO seu valor em quilômetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                        }
                                break;
                                
                                case 2: //Centímetro
                                    printf("\nPara qual grandeza você deseja converter?");
                                    printf("\n1-Milímetro\n2-Decímetro\n3-Metro\n4-Decâmetro\n5-Hectômetro\n6-Quilômetro\n");
                                    printf("\nDigite o número da opção: ");
                                    scanf("%i", &opcao2);
                                    
                                        switch (opcao2){
                                            
                                            case 1: //Milímetro
                                                valor1 = valor1 * 10;
                                                printf("\nO seu valor em milímetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 2: //Decímetro
                                                valor1 = valor1 / 10;
                                                printf("\nO seu valor em decímetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 3: //Metro
                                                valor1 = valor1 / 100;
                                                printf("\nO seu valor em metros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 4: //Decâmetro
                                                valor1 = valor1 / 1000;
                                                printf("\nO seu valor em decâmetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 5: //Hectômetro
                                                valor1 = valor1 / 10000;
                                                printf("\nO seu valor em hectômetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 6: //Quilômetro
                                                valor1 = valor1 / 100000;
                                                printf("\nO seu valor em quilômetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                        }
                                break;
                                
                                case 3: //Decímetro
                                    printf("\nPara qual grandeza você deseja converter?");
                                    printf("\n1-Milímetro\n2-Centímetro\n3-Metro\n4-Decâmetro\n5-Hectômetro\n6-Quilômetro\n");
                                    printf("\nDigite o número da opção: ");
                                    scanf("%i", &opcao2);
                                    
                                        switch (opcao2){
                                            
                                            case 1: //Milímetro
                                                 valor1 = valor1 * 100;
                                                printf("\nO seu valor em milímetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 2: //Centímetro
                                                 valor1 = valor1 * 10;
                                                printf("\nO seu valor em centímetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 3: //Metro
                                                 valor1 = valor1 / 10;
                                                printf("\nO seu valor em metros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 4: //Decâmetro
                                                 valor1 = valor1 / 100;
                                                printf("\nO seu valor em decâmetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 5: //Hectômetro
                                                 valor1 = valor1 / 1000;
                                                printf("\nO seu valor em hectômetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 6: //Quilômetro
                                                 valor1 = valor1 / 10000;
                                                printf("\nO seu valor em quilômetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                        }
                                break;
                                
                                case 4: //Metro
                                    printf("\nPara qual grandeza você deseja converter?");
                                    printf("\n1-Milímetro\n2-Centímetro\n3-Decímetro\n4-Decâmetro\n5-Hectômetro\n6-Quilômetro\n");
                                    printf("\nDigite o número da opção: ");
                                    scanf("%i", &opcao2);
                                    
                                        switch (opcao2){
                                            
                                            case 1: //Milímetro
                                                valor1 = valor1 * 1000;
                                                printf("\nO seu valor em milímetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 2: //Centímetro
                                                valor1 = valor1 * 100;
                                                printf("\nO seu valor em centímetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 3: //Decímetro
                                                valor1 = valor1 * 10;
                                                printf("\nO seu valor em decímetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 4: //Decâmetro
                                                valor1 = valor1 / 10;
                                                printf("\nO seu valor em decâmetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 5: //Hectômetro
                                                valor1 = valor1 / 100;
                                                printf("\nO seu valor em hectômetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 6: //Quilômetro
                                                valor1 = valor1 / 1000;
                                                printf("\nO seu valor em quilômetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                        }
                                break;
                                
                                case 5: //Decâmetro
                                    printf("\nPara qual grandeza você deseja converter?");
                                    printf("\n1-Milímetro\n2-Centímetro\n3-Decímetro\n4-Metro\n5-Hectômetro\n6-Quilômetro\n");
                                    printf("\nDigite o número da opção: ");
                                    scanf("%i", &opcao2);
                                    
                                        switch (opcao2){
                                            
                                            case 1: //Milímetro
                                                valor1 = valor1 * 10000;
                                                printf("\nO seu valor em milímetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 2: //Centímetro
                                                valor1 = valor1 * 1000;
                                                printf("\nO seu valor em centímetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 3: //Decímetro
                                                valor1 = valor1 * 100;
                                                printf("\nO seu valor em decímetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 4: //Metro
                                                valor1 = valor1 * 10;
                                                printf("\nO seu valor em metros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 5: //Hectômetro
                                                valor1 = valor1 / 10;
                                                printf("\nO seu valor em hectômetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 6: //Quilômetro
                                                valor1 = valor1 / 100;
                                                printf("\nO seu valor em quilômetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                        }
                                break;
                                
                                case 6: //Hectômetro
                                    printf("\nPara qual grandeza você deseja converter?");
                                    printf("\n1-Milímetro\n2-Centímetro\n3-Decímetro\n4-Metro\n5-Decâmetro\n6-Quilômetro\n");
                                    printf("\nDigite o número da opção: ");
                                    scanf("%i", &opcao2);
                                    
                                        switch (opcao2){
                                            
                                            case 1: //Milímetro
                                                valor1 = valor1 * 100000;
                                                printf("\nO seu valor em milímetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 2: //Centímetro
                                                valor1 = valor1 * 10000;
                                                printf("\nO seu valor em centímetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 3: //Decímetro
                                                valor1 = valor1 * 1000;
                                                printf("\nO seu valor em decímetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 4: //Metro
                                                valor1 = valor1 * 100;
                                                printf("\nO seu valor em metros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 5: //Decâmetro
                                                valor1 = valor1 * 10;
                                                printf("\nO seu valor em decâmetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 6: //Quilômetro
                                                valor1 = valor1 / 10;
                                                printf("\nO seu valor em quilômetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                        }
                                break;
                                
                                case 7: //Quilômetro
                                    printf("\nPara qual grandeza você deseja converter?");
                                    printf("\n1-Milímetro\n2-Centímetro\n3-Decímetro\n4-Metro\n5-Decâmetro\n6-Hectômetro\n");
                                    printf("\nDigite o número da opção: ");
                                    scanf("%i", &opcao2);
                                    
                                        switch (opcao2){
                                            
                                            case 1: //Milímetro
                                                valor1 = valor1 * 1000000;
                                                printf("\nO seu valor em milímetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 2: //Centímetro
                                                valor1 = valor1 * 100000;
                                                printf("\nO seu valor em centímetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 3: //Decímetro
                                                valor1 = valor1 * 10000;
                                                printf("\nO seu valor em decímetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 4: //Metro
                                                valor1 = valor1 * 1000;
                                                printf("\nO seu valor em metros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 5: //Decâmetro
                                                valor1 = valor1 * 100;
                                                printf("\nO seu valor em decâmetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 6: //Hectômetro
                                                valor1 = valor1 * 10;
                                                printf("\nO seu valor em hectômetros é de: ");
                                                printf("%lf", valor1);
                                            break;
                                        }
                                break;
                            }
                    break;
                    
                    case 3: //Massa
                        printf("\nEsse número corresponde a um valor de:");
                        printf("\n1-Miligrama\n2-Centigrama\n3-Decigrama\n4-Grama\n5-Decagrama\n6-Hectograma\n7-Quilograma\n");
                        printf("\nDigite o número da opção: ");
                        opcao2 = 0;//zera a variável para usá-la novamente em outro switch case
                        scanf("%i", &opcao1);
                        
                            switch(opcao1){
                                case 1: //Miligrama
                                    printf("\nPara qual grandeza você deseja converter?");
                                    printf("\n1-Centigrama\n2-Decigrama\n3-Grama\n4-Decagrama\n5-Hectograma\n6-Quilograma\n");
                                    printf("\nDigite o número da opção: ");
                                    scanf("%i", &opcao2);
                                    
                                        switch (opcao2){
                                            
                                            case 1: //Centigrama
                                                valor1 = valor1 / 10;
                                                printf("\nO seu valor em centigramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 2: //Decigrama
                                                valor1 = valor1 / 100;
                                                printf("\nO seu valor em decigramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 3: //Grama
                                                valor1 = valor1 / 1000;
                                                printf("\nO seu valor em gramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 4: //Decagrama
                                                valor1 = valor1 / 10000;
                                                printf("\nO seu valor em decagramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 5: //Hectograma
                                                valor1 = valor1 / 100000;
                                                printf("\nO seu valor em hectogramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 6: //Quilograma
                                                valor1 = valor1 / 1000000;
                                                printf("\nO seu valor em quilogramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                        }
                                break;
                                
                                case 2: //Centigrama
                                    printf("\nPara qual grandeza você deseja converter?");
                                    printf("\n1-Miligrama\n2-Decigrama\n3-Grama\n4-Decagrama\n5-Hectograma\n6-Quilograma\n");
                                    printf("\nDigite o número da opção: ");
                                    scanf("%i", &opcao2);
                                    
                                        switch (opcao2){
                                            
                                            case 1: //Miligrama
                                                valor1 = valor1 * 10;
                                                printf("\nO seu valor em miligramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 2: //Decigrama
                                                valor1 = valor1 / 10;
                                                printf("\nO seu valor em decigramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 3: //Grama
                                                valor1 = valor1 / 100;
                                                printf("\nO seu valor em gramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 4: //Decagrama
                                                valor1 = valor1 / 1000;
                                                printf("\nO seu valor em decagramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 5: //Hectograma
                                                valor1 = valor1 / 10000;
                                                printf("\nO seu valor em hectogramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 6: //Quilograma
                                                valor1 = valor1 / 100000;
                                                printf("\nO seu valor em quilogramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                        }
                                break;
                                
                                case 3: //Decigrama
                                    printf("\nPara qual grandeza você deseja converter?");
                                    printf("\n1-Miligrama\n2-Centigrama\n3-Grama\n4-Decagrama\n5-Hectograma\n6-Quilograma\n");
                                    printf("\nDigite o número da opção: ");
                                    scanf("%i", &opcao2);
                                    
                                        switch (opcao2){
                                            
                                            case 1: //Miligrama
                                                valor1 = valor1 * 100;
                                                printf("\nO seu valor em miligramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 2: //Centigrama
                                                valor1 = valor1 * 10;
                                                printf("\nO seu valor em centigramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 3: //Grama
                                                valor1 = valor1 / 10;
                                                printf("\nO seu valor em gramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 4: //Decagrama
                                                valor1 = valor1 / 100;
                                                printf("\nO seu valor em decagramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 5: //Hectograma
                                                valor1 = valor1 / 1000;
                                                printf("\nO seu valor em hectogramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 6: //Quilograma
                                                valor1 = valor1 / 10000;
                                                printf("\nO seu valor em quilogramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                        }
                                break;
                                
                                case 4: //Grama
                                    printf("\nPara qual grandeza você deseja converter?");
                                    printf("\n1-Miligrama\n2-Centigrama\n3-Decigrama\n4-Decagrama\n5-Hectograma\n6-Quilograma\n");
                                    printf("\nDigite o número da opção: ");
                                    scanf("%i", &opcao2);
                                    
                                        switch (opcao2){
                                            
                                            case 1: //Miligrama
                                                valor1 = valor1 * 1000;
                                                printf("\nO seu valor em miligramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 2: //Centigrama
                                                valor1 = valor1 * 100;
                                                printf("\nO seu valor em centigramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 3: //Decigrama
                                                valor1 = valor1 * 10;
                                                printf("\nO seu valor em decigramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 4: //Decagrama
                                                valor1 = valor1 / 10;
                                                printf("\nO seu valor em decagramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 5: //Hectograma
                                                valor1 = valor1 / 100;
                                                printf("\nO seu valor em hectogramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 6: //Quilograma
                                                valor1 = valor1 / 1000;
                                                printf("\nO seu valor em quilogramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                        }
                                break;
                                
                                case 5: //Decagrama
                                    printf("\nPara qual grandeza você deseja converter?");
                                    printf("\n1-Miligrama\n2-Centigrama\n3-Decigrama\n4-Grama\n5-Hectograma\n6-Quilograma\n");
                                    printf("\nDigite o número da opção: ");
                                    scanf("%i", &opcao2);
                                    
                                        switch (opcao2){
                                            
                                            case 1: //Miligrama
                                                valor1 = valor1 * 10000;
                                                printf("\nO seu valor em miligramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 2: //Centigrama
                                                valor1 = valor1 * 1000;
                                                printf("\nO seu valor em centigramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 3: //Decigrama
                                                valor1 = valor1 * 100;
                                                printf("\nO seu valor em decigramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 4: //Grama
                                                valor1 = valor1 * 10;
                                                printf("\nO seu valor em gramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 5: //Hectograma
                                                valor1 = valor1 / 10;
                                                printf("\nO seu valor em hectogramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 6: //Quilograma
                                                valor1 = valor1 / 100;
                                                printf("\nO seu valor em quilogramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                        }
                                break;
                                
                                case 6: //Hectograma
                                    printf("\nPara qual grandeza você deseja converter?");
                                    printf("\n1-Miligrama\n2-Centigrama\n3-Decigrama\n4-Grama\n5-Decagrama\n6-Quilograma\n");
                                    printf("\nDigite o número da opção: ");
                                    scanf("%i", &opcao2);
                                    
                                        switch (opcao2){
                                            
                                            case 1: //Miligrama
                                                valor1 = valor1 * 100000;
                                                printf("\nO seu valor em miligramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 2: //Centigrama
                                                valor1 = valor1 * 10000;
                                                printf("\nO seu valor em centigramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 3: //Decigrama
                                                valor1 = valor1 * 1000;
                                                printf("\nO seu valor em decigramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 4: //Grama
                                                valor1 = valor1 * 100;
                                                printf("\nO seu valor em gramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 5: //Decagrama
                                                valor1 = valor1 * 10;
                                                printf("\nO seu valor em decagramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 6: //Quilograma
                                                valor1 = valor1 / 10;
                                                printf("\nO seu valor em quilogramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                        }
                                break;
                                
                                case 7: //Quilograma
                                    printf("\nPara qual grandeza você deseja converter?");
                                    printf("\n1-Miligrama\n2-Centigrama\n3-Decigrama\n4-Grama\n5-Decagrama\n6-Hectograma\n");
                                    printf("\nDigite o número da opção: ");
                                    scanf("%i", &opcao2);
                                    
                                        switch (opcao2){
                                            
                                            case 1: //Miligrama
                                                valor1 = valor1 * 1000000;
                                                printf("\nO seu valor em miligramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 2: //Centigrama
                                                valor1 = valor1 * 100000;
                                                printf("\nO seu valor em centigramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 3: //Decigrama
                                                valor1 = valor1 * 10000;
                                                printf("\nO seu valor em decigramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 4: //Grama
                                                valor1 = valor1 * 1000;
                                                printf("\nO seu valor em gramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 5: //Decagrama
                                                valor1 = valor1 * 100;
                                                printf("\nO seu valor em decagramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                            
                                            case 6: //Hectograma
                                                valor1 = valor1 * 10;
                                                printf("\nO seu valor em hectogramas é de: ");
                                                printf("%lf", valor1);
                                            break;
                                        }
                                break;
                            }
                    break;
                }
            
        break;
        
        
        case 2: //calcular valores
            
            printf("\nEscolha o tipo de grandeza a ser utilizado:\n1-Tempo\n2-Distância\n3-Massa");
            printf("\nDigite o número da opção: ");
            scanf("%i", &opcao2);
            printf("\nInsira o primeiro valor: ");
            scanf("%lf", &valor1);
            printf("\nEsse número corresponde a um valor de:");
            opcao1 = 0;//zera a variável para usá-la novamente em outro switch case
            
                switch(opcao2){
                    
                    case 1: //Tempo
                        printf("\n1-Milissegundo\n2-Segundo\n3-Minuto\n4-Hora");
                        printf("\nDigite o número da opção: ");
                        scanf("%i", &opcao1);
                        printf("\nInsira o segundo valor: ");
                        scanf("%lf", &valor2);
                        printf("\nEsse número corresponde a um valor de:");
                        printf("\n1-Milissegundo\n2-Segundo\n3-Minuto\n4-Hora\n");
                        printf("\nDigite o número da opção: ");
                        scanf("%i", &opcao3);
                        opcao2 = 0;//zera a variável para usá-la novamente em outro switch case
                        printf("\nEscolha a operação matemática:");
                        printf("\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n");
                        scanf("%i", &opcao4);
                        printf("\nEscolha a grandeza do resultado:");
                        printf("\n1-Milissegundo\n2-Segundo\n3-Minuto\n4-Hora\n");
                        scanf("%i", &opcao2);
                        
                            switch(opcao2){ //Esse switch converte os dois valores dados na mesma grandeza do resultado
                                
                                case 1: //Milissegundo
                                    
                                        switch(opcao1){
                                            case 2: //Segundo
                                                valor1 = valor1 * 1000;
                                            break;
                                            
                                            case 3: //Minuto
                                                valor1 = valor1 * 60000;
                                            break;
                                            
                                            case 4: //Hora
                                                valor1 = valor1 * 3600000;
                                            break;
                                        }
                                        
                                        switch(opcao3){
                                            case 2: //Segundo
                                                valor2 = valor2 * 1000;
                                            break;
                                            
                                            case 3: //Minuto
                                                valor2 = valor2 * 60000;
                                            break;
                                            
                                            case 4: //Hora
                                                valor2 = valor2 * 3600000;
                                            break;
                                        }
                                        
                                        switch(opcao4){
                                                
                                                case 1: //Soma
                                                    valor3 = valor1 + valor2;
                                                break;
                                                
                                                case 2: //Subtração
                                                    valor3 = valor1 - valor2;
                                                break;
                                                
                                                case 3: //Multiplicação
                                                    valor3 = valor1 * valor2;
                                                break;
                                                
                                                case 4: //Divisão
                                                    valor3 = valor1 / valor2;
                                                break;
                                        }
                                        
                                        printf("O seu resultado em milissegundos é de: ");
                                        printf("%lf", valor3);
                                        
                                    break;
                                
                                case 2: //Segundo
                                    
                                    switch(opcao1){
                                            case 1: //Milissegundo
                                                valor1 = valor1 / 1000;
                                            break;
                                            
                                            case 3: //Minuto
                                                valor1 = valor1 * 60;
                                            break;
                                            
                                            case 4: //Hora
                                                valor1 = valor1 * 3600;
                                            break;
                                        }
                                        
                                        switch(opcao3){
                                            case 1: //Milissegundo
                                                valor2 = valor2 / 1000;
                                            break;
                                            
                                            case 3: //Minuto
                                                valor2 = valor2 * 60;
                                            break;
                                            
                                            case 4: //Hora
                                                valor2 = valor2 * 3600;
                                            break;
                                        }
                                        
                                        switch(opcao4){
                                                
                                                case 1: //Soma
                                                    valor3 = valor1 + valor2;
                                                break;
                                                
                                                case 2:  //Subtração
                                                    valor3 = valor1 - valor2;
                                                break;
                                                
                                                case 3: //Multiplicação
                                                    valor3 = valor1 * valor2;
                                                break;
                                                
                                                case 4: //Divisão
                                                    valor3 = valor1 / valor2;
                                                break;
                                        }
                                        
                                        printf("O seu resultado em segundos é de: ");
                                        printf("%lf", valor3);
                                        
                                    break;
                                
                                case 3: //Minuto
                                    
                                    switch(opcao1){
                                            case 1: //Milissegundo
                                                valor1 = valor1 / 60000;
                                            break;
                                            
                                            case 2: //Segundo
                                                valor1 = valor1 / 60;
                                            break;
                                            
                                            case 4: //Hora
                                                valor1 = valor1 * 60;
                                            break;
                                        }
                                        
                                        switch(opcao3){
                                            case 1: //Milissegundo
                                                valor2 = valor2 / 60000;
                                            break;
                                            
                                            case 2: //Segundo
                                                valor2 = valor2 / 60;
                                            break;
                                            
                                            case 4: //Hora
                                                valor2 = valor2 * 60;
                                            break;
                                        }
                                        
                                        switch(opcao4){
                                                
                                                case 1: //Soma
                                                    valor3 = valor1 + valor2;
                                                break;
                                                
                                                case 2:  //Subtração
                                                    valor3 = valor1 - valor2;
                                                break;
                                                
                                                case 3: //Multiplicação
                                                    valor3 = valor1 * valor2;
                                                break;
                                                
                                                case 4: //Divisão
                                                    valor3 = valor1 / valor2;
                                                break;
                                        }
                                        
                                        printf("O seu resultado em minutos é de: ");
                                        printf("%lf", valor3);
                                        
                                    break;
                                
                                case 4: //Hora
                                    
                                    switch(opcao1){
                                            case 2: //Milissegundo
                                                valor1 = valor1 / 3600000;
                                            break;
                                            
                                            case 3: //Segundo
                                                valor1 = valor1 / 3600;
                                            break;
                                            
                                            case 4: //Minuto
                                                valor1 = valor1 / 60;
                                            break;
                                        }
                                        
                                        switch(opcao3){
                                            case 2: //Milissegundo
                                                valor2 = valor2 / 3600000;
                                            break;
                                            
                                            case 3: //Segundo
                                                valor2 = valor2 / 3600;
                                            break;
                                            
                                            case 4: //Minuto
                                                valor2 = valor2 / 60;
                                            break;
                                        }
                                        
                                        switch(opcao4){
                                                
                                                case 1: //Soma
                                                    valor3 = valor1 + valor2;
                                                break;
                                                
                                                case 2:  //Subtração
                                                    valor3 = valor1 - valor2;
                                                break;
                                                
                                                case 3: //Multiplicação
                                                    valor3 = valor1 * valor2;
                                                break;
                                                
                                                case 4: //Divisão
                                                    valor3 = valor1 / valor2;
                                                break;
                                        }
                                        
                                        printf("O seu resultado em horas é de: ");
                                        printf("%lf", valor3);
                                        
                                    break;
                            }
                    break;
                    
                    case 2: //Distância
                        printf("\n1-Milímetro\n2-Centímetro\n3-Decímetro\n4-Metro\n5-Decâmetro\n6-Hectômetro\n7-Quilômetro\n");
                        printf("\nDigite o número da opção: ");
                        scanf("%i", &opcao1);
                        printf("\nInsira o segundo valor: ");
                        scanf("%lf", &valor2);
                        printf("\nEsse número corresponde a um valor de:");
                        printf("\n1-Milímetro\n2-Centímetro\n3-Decímetro\n4-Metro\n5-Decâmetro\n6-Hectômetro\n7-Quilômetro\n");
                        printf("\nDigite o número da opção: ");
                        scanf("%i", &opcao3);
                        opcao2 = 0;//zera a variável para usá-la novamente em outro switch case
                        printf("\nEscolha a operação matemática:");
                        printf("\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n");
                        printf("\nDigite o número da opção: ");
                        scanf("%i", &opcao4);
                        printf("\nEscolha a grandeza do resultado:");
                        printf("\n1-Milímetro\n2-Centímetro\n3-Decímetro\n4-Metro\n5-Decâmetro\n6-Hectômetro\n7-Quilômetro\n");
                        printf("\nDigite o número da opção: ");
                        scanf("%i", &opcao2);
                        
                            switch(opcao2){
                                
                                    case 1: //Milímetro
                                    
                                        switch(opcao1){
                                            case 2: //Centímetro
                                                valor1 = valor1 * 10;
                                            break;
                                            
                                            case 3: //Decímetro
                                                valor1 = valor1 * 100;
                                            break;
                                            
                                            case 4: //Metro
                                                valor1 = valor1 * 1000;
                                            break;
                                            
                                            case 5: //Decâmetro
                                                valor1 = valor1 * 10000;
                                            break;
                                            
                                            case 6: //Hectômetro
                                                valor1 = valor1 * 100000;
                                            break;
                                            
                                            case 7: //Quilômetro
                                                valor1 = valor1 * 1000000;
                                            break;
                                        }
                                        
                                        switch(opcao3){
                                            case 2: //Centímetro
                                                valor2 = valor2 * 10;
                                            break;
                                            
                                            case 3: //Decímetro
                                                valor2 = valor2 * 100;
                                            break;
                                            
                                            case 4: //Metro
                                                valor2 = valor2 * 1000;
                                            break;
                                            
                                            case 5: //Decâmetro
                                                valor2 = valor2 * 10000;
                                            break;
                                            
                                            case 6: //Hectômetro
                                                valor2 = valor2 * 100000;
                                            break;
                                            
                                            case 7: //Quilômetro
                                                valor2 = valor2 * 1000000;
                                            break;
                                        }
                                        
                                        switch(opcao4){
                                                
                                                case 1: //Soma
                                                    valor3 = valor1 + valor2;
                                                break;
                                                
                                                case 2: //Subtração
                                                    valor3 = valor1 - valor2;
                                                break;
                                                
                                                case 3: //Multiplicação
                                                    valor3 = valor1 * valor2;
                                                break;
                                                
                                                case 4: //Divisão
                                                    valor3 = valor1 / valor2;
                                                break;
                                        }
                                        
                                        printf("O seu resultado em milímetros é de: ");
                                        printf("%lf", valor3);
                                        
                                    break;
                                    
                                    case 2: //Centímetro
                                    
                                        switch(opcao1){
                                            case 1: //Milímetro
                                                valor1 = valor1 / 10;
                                            break;
                                            
                                            case 3: //Decímetro
                                                valor1 = valor1 * 10;
                                            break;
                                            
                                            case 4: //Metro
                                                valor1 = valor1 * 100;
                                            break;
                                            
                                            case 5: //Decâmetro
                                                valor1 = valor1 * 1000;
                                            break;
                                            
                                            case 6: //Hectômetro
                                                valor1 = valor1 * 10000;
                                            break;
                                            
                                            case 7: //Quilômetro
                                                valor1 = valor1 * 100000;
                                            break;
                                        }
                                        
                                        switch(opcao3){
                                            case 1: //Milímetro
                                                valor2 = valor2 / 10;
                                            break;
                                            
                                            case 3: //Decímetro
                                                valor2 = valor2 * 10;
                                            break;
                                            
                                            case 4: //Metro
                                                valor2 = valor2 * 100;
                                            break;
                                            
                                            case 5: //Decâmetro
                                                valor2 = valor2 * 1000;
                                            break;
                                            
                                            case 6: //Hectômetro
                                                valor2 = valor2 * 10000;
                                            break;
                                            
                                            case 7: //Quilômetro
                                                valor2 = valor2 * 100000;
                                            break;
                                        }
                                        
                                        switch(opcao4){
                                                
                                                case 1: //Soma
                                                    valor3 = valor1 + valor2;
                                                break;
                                                
                                                case 2: //Subtração
                                                    valor3 = valor1 - valor2;
                                                break;
                                                
                                                case 3: //Multiplicação
                                                    valor3 = valor1 * valor2;
                                                break;
                                                
                                                case 4: //Divisão
                                                    valor3 = valor1 / valor2;
                                                break;
                                        }
                                        
                                        printf("O seu resultado em centímetros é de: ");
                                        printf("%lf", valor3);
                                        
                                    break;
                                    
                                    case 3: //Decímetro
                                    
                                        switch(opcao1){
                                            case 1: //Milímetro
                                                valor1 = valor1 / 100;
                                            break;
                                            
                                            case 2: //Centímetro
                                                valor1 = valor1 / 10;
                                            break;
                                            
                                            case 4: //Metro
                                                valor1 = valor1 * 10;
                                            break;
                                            
                                            case 5: //Decâmetro
                                                valor1 = valor1 * 100;
                                            break;
                                            
                                            case 6: //Hectômetro
                                                valor1 = valor1 * 1000;
                                            break;
                                            
                                            case 7: //Quilômetro
                                                valor1 = valor1 * 10000;
                                            break;
                                        }
                                        
                                        switch(opcao3){
                                            case 1: //Milímetro
                                                valor2 = valor2 / 100;
                                            break;
                                            
                                            case 2: //Centímetro
                                                valor2 = valor2 / 10;
                                            break;
                                            
                                            case 4: //Metro
                                                valor2 = valor2 * 10;
                                            break;
                                            
                                            case 5: //Decâmetro
                                                valor2 = valor2 * 100;
                                            break;
                                            
                                            case 6: //Hectômetro
                                                valor2 = valor2 * 1000;
                                            break;
                                            
                                            case 7: //Quilômetro
                                                valor2 = valor2 * 10000;
                                            break;
                                        }
                                        
                                        switch(opcao4){
                                                
                                                case 1: //Soma
                                                    valor3 = valor1 + valor2;
                                                break;
                                                
                                                case 2: //Subtração
                                                    valor3 = valor1 - valor2;
                                                break;
                                                
                                                case 3: //Multiplicação
                                                    valor3 = valor1 * valor2;
                                                break;
                                                
                                                case 4: //Divisão
                                                    valor3 = valor1 / valor2;
                                                break;
                                        }
                                        
                                        printf("O seu resultado em decímetros é de: ");
                                        printf("%lf", valor3);
                                        
                                    break;
                                    
                                    case 4: //Metro
                                    
                                        switch(opcao1){
                                            case 1: //Milímetro
                                                valor1 = valor1 / 1000;
                                            break;
                                            
                                            case 2: //Centímetro
                                                valor1 = valor1 / 100;
                                            break;
                                            
                                            case 3: //Decímetro
                                                valor1 = valor1 / 10;
                                            break;
                                            
                                            case 5: //Decâmetro
                                                valor1 = valor1 * 10;
                                            break;
                                            
                                            case 6: //Hectômetro
                                                valor1 = valor1 * 100;
                                            break;
                                            
                                            case 7: //Quilômetro
                                                valor1 = valor1 * 1000;
                                            break;
                                        }
                                        
                                        switch(opcao3){
                                            case 1: //Milímetro
                                                valor2 = valor2 / 1000;
                                            break;
                                            
                                            case 2: //Centímetro
                                                valor2 = valor2 / 100;
                                            break;
                                            
                                            case 3: //Decímetro
                                                valor2 = valor2 / 10;
                                            break;
                                            
                                            case 5: //Decâmetro
                                                valor2 = valor2 * 10;
                                            break;
                                            
                                            case 6: //Hectômetro
                                                valor2 = valor2 * 100;
                                            break;
                                            
                                            case 7: //Quilômetro
                                                valor2 = valor2 * 1000;
                                            break;
                                        }
                                        
                                        switch(opcao4){
                                                
                                                case 1: //Soma
                                                    valor3 = valor1 + valor2;
                                                break;
                                                
                                                case 2: //Subtração
                                                    valor3 = valor1 - valor2;
                                                break;
                                                
                                                case 3: //Multiplicação
                                                    valor3 = valor1 * valor2;
                                                break;
                                                
                                                case 4: //Divisão
                                                    valor3 = valor1 / valor2;
                                                break;
                                        }
                                        
                                        printf("O seu resultado em metros é de: ");
                                        printf("%lf", valor3);
                                        
                                    break;
                                    
                                    case 5: //Decâmetro
                                    
                                        switch(opcao1){
                                            case 1: //Milímetro
                                                valor1 = valor1 / 10000;
                                            break;
                                            
                                            case 2: //Centímetro
                                                valor1 = valor1 / 1000;
                                            break;
                                            
                                            case 3: //Decímetro
                                                valor1 = valor1 / 100;
                                            break;
                                            
                                            case 4: //Metro
                                                valor1 = valor1 / 10;
                                            break;
                                            
                                            case 6: //Hectômetro
                                                valor1 = valor1 * 10;
                                            break;
                                            
                                            case 7: //Quilômetro
                                                valor1 = valor1 * 100;
                                            break;
                                        }
                                        
                                        switch(opcao3){
                                            case 1: //Milímetro
                                                valor2 = valor2 / 10000;
                                            break;
                                            
                                            case 2: //Centímetro
                                                valor2 = valor2 / 1000;
                                            break;
                                            
                                            case 3: //Decímetro
                                                valor2 = valor2 / 100;
                                            break;
                                            
                                            case 4: //Metro
                                                valor2 = valor2 / 10;
                                            break;
                                            
                                            case 6: //Hectômetro
                                                valor2 = valor2 * 10;
                                            break;
                                            
                                            case 7: //Quilômetro
                                                valor2 = valor2 * 100;
                                            break;
                                        }
                                        
                                        switch(opcao4){
                                                
                                                case 1: //Soma
                                                    valor3 = valor1 + valor2;
                                                break;
                                                
                                                case 2: //Subtração
                                                    valor3 = valor1 - valor2;
                                                break;
                                                
                                                case 3: //Multiplicação
                                                    valor3 = valor1 * valor2;
                                                break;
                                                
                                                case 4: //Divisão
                                                    valor3 = valor1 / valor2;
                                                break;
                                        }
                                        
                                        printf("O seu resultado em decâmetros é de: ");
                                        printf("%lf", valor3);
                                        
                                    break;
                                    
                                    case 6: //Hectômetro
                                    
                                        switch(opcao1){
                                            case 1: //Milímetro
                                                valor1 = valor1 / 100000;
                                            break;
                                            
                                            case 2: //Centímetro
                                                valor1 = valor1 / 10000;
                                            break;
                                            
                                            case 3: //Decímetro
                                                valor1 = valor1 / 1000;
                                            break;
                                            
                                            case 4: //Metro
                                                valor1 = valor1 / 100;
                                            break;
                                            
                                            case 5: //Decâmetro
                                                valor1 = valor1 / 10;
                                            break;
                                            
                                            case 7: //Quilômetro
                                                valor1 = valor1 * 10;
                                            break;
                                        }
                                        
                                        switch(opcao3){
                                            case 1: //Milímetro
                                                valor2 = valor2 / 100000;
                                            break;
                                            
                                            case 2: //Centímetro
                                                valor2 = valor2 / 10000;
                                            break;
                                            
                                            case 3: //Decímetro
                                                valor2 = valor2 / 1000;
                                            break;
                                            
                                            case 4: //Metro
                                                valor2 = valor2 / 100;
                                            break;
                                            
                                            case 5: //Decâmetro
                                                valor2 = valor2 / 10;
                                            break;
                                            
                                            case 7: //Quilômetro
                                                valor2 = valor2 * 10;
                                            break;
                                        }
                                        
                                        switch(opcao4){
                                                
                                                case 1: //Soma
                                                    valor3 = valor1 + valor2;
                                                break;
                                                
                                                case 2: //Subtração
                                                    valor3 = valor1 - valor2;
                                                break;
                                                
                                                case 3: //Multiplicação
                                                    valor3 = valor1 * valor2;
                                                break;
                                                
                                                case 4: //Divisão
                                                    valor3 = valor1 / valor2;
                                                break;
                                        }
                                        
                                        printf("O seu resultado em hectômetros é de: ");
                                        printf("%lf", valor3);
                                        
                                    break;
                                    
                                    case 7: //Quilômetro
                                    
                                        switch(opcao1){
                                            case 1: //Milímetro
                                                valor1 = valor1 / 1000000;
                                            break;
                                            
                                            case 2: //Centímetro
                                                valor1 = valor1 / 100000;
                                            break;
                                            
                                            case 3: //Decímetro
                                                valor1 = valor1 / 10000;
                                            break;
                                            
                                            case 4: //Metro
                                                valor1 = valor1 / 1000;
                                            break;
                                            
                                            case 5: //Decâmetro
                                                valor1 = valor1 / 100;
                                            break;
                                            
                                            case 6: //Hectômetro
                                                valor1 = valor1 / 10;
                                            break;
                                        }
                                        
                                        switch(opcao3){
                                            case 1: //Milímetro
                                                valor2 = valor2 / 1000000;
                                            break;
                                            
                                            case 2: //Centímetro
                                                valor2 = valor2 / 100000;
                                            break;
                                            
                                            case 3: //Decímetro
                                                valor2 = valor2 / 10000;
                                            break;
                                            
                                            case 4: //Metro
                                                valor2 = valor2 / 1000;
                                            break;
                                            
                                            case 5: //Decâmetro
                                                valor2 = valor2 / 100;
                                            break;
                                            
                                            case 6: //Hectômetro
                                                valor2 = valor2 / 10;
                                            break;
                                        }
                                        
                                        switch(opcao4){
                                                
                                                case 1: //Soma
                                                    valor3 = valor1 + valor2;
                                                break;
                                                
                                                case 2: //Subtração
                                                    valor3 = valor1 - valor2;
                                                break;
                                                
                                                case 3: //Multiplicação
                                                    valor3 = valor1 * valor2;
                                                break;
                                                
                                                case 4: //Divisão
                                                    valor3 = valor1 / valor2;
                                                break;
                                        }
                                        
                                        printf("O seu resultado em quilômetros é de: ");
                                        printf("%lf", valor3);
                                        
                                    break;
                            }
                    break;
                    
                    case 3: //Massa
                        printf("\n1-Miligrama\n2-Centigrama\n3-Decigrama\n4-Grama\n5-Decagrama\n6-Hectograma\n7-Quilograma\n");
                        printf("\nDigite o número da opção: ");
                        scanf("%i", &opcao1);
                        printf("\nInsira o segundo valor: ");
                        scanf("%lf", &valor2);
                        printf("\nEsse número corresponde a um valor de:");
                        printf("\n1-Miligrama\n2-Centigrama\n3-Decigrama\n4-Grama\n5-Decagrama\n6-Hectograma\n7-Quilograma\n");
                        printf("\nDigite o número da opção: ");
                        scanf("%i", &opcao3);
                        opcao2 = 0;//zera a variável para usá-la novamente em outro switch case
                        printf("\nEscolha a operação matemática:");
                        printf("\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n");
                        printf("\nDigite o número da opção: ");
                        scanf("%i", &opcao4);
                        printf("\nEscolha a grandeza do resultado:");
                        printf("\n1-Miligrama\n2-Centigrama\n3-Decigrama\n4-Grama\n5-Decagrama\n6-Hectograma\n7-Quilograma\n");
                        printf("\nDigite o número da opção: ");
                        scanf("%i", &opcao2);
                        
                            switch(opcao2){
                                
                                    case 1: //Miligrama
                                    
                                        switch(opcao1){
                                            case 2: //Centigrama
                                                valor1 = valor1 * 10;
                                            break;
                                            
                                            case 3: //Decigrama
                                                valor1 = valor1 * 100;
                                            break;
                                            
                                            case 4: //Grama
                                                valor1 = valor1 * 1000;
                                            break;
                                            
                                            case 5: //Decagrama
                                                valor1 = valor1 * 10000;
                                            break;
                                            
                                            case 6: //Hectograma
                                                valor1 = valor1 * 100000;
                                            break;
                                            
                                            case 7: //Quilograma
                                                valor1 = valor1 * 1000000;
                                            break;
                                        }
                                        
                                        switch(opcao3){
                                            case 2: //Centigrama
                                                valor2 = valor2 * 10;
                                            break;
                                            
                                            case 3: //Decigrama
                                                valor2 = valor2 * 100;
                                            break;
                                            
                                            case 4: //Grama
                                                valor2 = valor2 * 1000;
                                            break;
                                            
                                            case 5: //Decagrama
                                                valor2 = valor2 * 10000;
                                            break;
                                            
                                            case 6: //Hectograma
                                                valor2 = valor2 * 100000;
                                            break;
                                            
                                            case 7: //Quilograma
                                                valor2 = valor2 * 1000000;
                                            break;
                                        }
                                        
                                        switch(opcao4){
                                                
                                                case 1: //Soma
                                                    valor3 = valor1 + valor2;
                                                break;
                                                
                                                case 2: //Subtração
                                                    valor3 = valor1 - valor2;
                                                break;
                                                
                                                case 3: //Multiplicação
                                                    valor3 = valor1 * valor2;
                                                break;
                                                
                                                case 4: //Divisão
                                                    valor3 = valor1 / valor2;
                                                break;
                                        }
                                        
                                        printf("O seu resultado em miligramas é de: ");
                                        printf("%lf", valor3);
                                        
                                    break;
                                    
                                    case 2: //Centigrama
                                    
                                        switch(opcao1){
                                            case 1: //Miligrama
                                                valor1 = valor1 / 10;
                                            break;
                                            
                                            case 3: //Decigrama
                                                valor1 = valor1 * 10;
                                            break;
                                            
                                            case 4: //Grama
                                                valor1 = valor1 * 100;
                                            break;
                                            
                                            case 5: //Decagrama
                                                valor1 = valor1 * 1000;
                                            break;
                                            
                                            case 6: //Hectograma
                                                valor1 = valor1 * 10000;
                                            break;
                                            
                                            case 7: //Quilograma
                                                valor1 = valor1 * 100000;
                                            break;
                                        }
                                        
                                        switch(opcao3){
                                            case 1: //Miligrama
                                                valor2 = valor2 / 10;
                                            break;
                                            
                                            case 3: //Decigrama
                                                valor2 = valor2 * 10;
                                            break;
                                            
                                            case 4: //Grama
                                                valor2 = valor2 * 100;
                                            break;
                                            
                                            case 5: //Decagrama
                                                valor2 = valor2 * 1000;
                                            break;
                                            
                                            case 6: //Hectograma
                                                valor2 = valor2 * 10000;
                                            break;
                                            
                                            case 7: //Quilograma
                                                valor2 = valor2 * 100000;
                                            break;
                                        }
                                        
                                        switch(opcao4){
                                                
                                                case 1: //Soma
                                                    valor3 = valor1 + valor2;
                                                break;
                                                
                                                case 2: //Subtração
                                                    valor3 = valor1 - valor2;
                                                break;
                                                
                                                case 3: //Multiplicação
                                                    valor3 = valor1 * valor2;
                                                break;
                                                
                                                case 4: //Divisão
                                                    valor3 = valor1 / valor2;
                                                break;
                                        }
                                        
                                        printf("O seu resultado em centigramas é de: ");
                                        printf("%lf", valor3);
                                        
                                    break;
                                    
                                    case 3: //Decigrama
                                    
                                        switch(opcao1){
                                            case 1: //Miligrama
                                                valor1 = valor1 / 100;
                                            break;
                                            
                                            case 2: //Centigrama
                                                valor1 = valor1 / 10;
                                            break;
                                            
                                            case 4: //Grama
                                                valor1 = valor1 * 10;
                                            break;
                                            
                                            case 5: //Decagrama
                                                valor1 = valor1 * 100;
                                            break;
                                            
                                            case 6: //Hectograma
                                                valor1 = valor1 * 1000;
                                            break;
                                            
                                            case 7: //Quilograma
                                                valor1 = valor1 * 10000;
                                            break;
                                        }
                                        
                                        switch(opcao3){
                                            case 1: //Miligrama
                                                valor2 = valor2 / 100;
                                            break;
                                            
                                            case 2: //Centigrama
                                                valor2 = valor2 / 10;
                                            break;
                                            
                                            case 4: //Grama
                                                valor2 = valor2 * 10;
                                            break;
                                            
                                            case 5: //Decagrama
                                                valor2 = valor2 * 100;
                                            break;
                                            
                                            case 6: //Hectograma
                                                valor2 = valor2 * 1000;
                                            break;
                                            
                                            case 7: //Quilograma
                                                valor2 = valor2 * 10000;
                                            break;
                                        }
                                        
                                        switch(opcao4){
                                                
                                                case 1: //Soma
                                                    valor3 = valor1 + valor2;
                                                break;
                                                
                                                case 2: //Subtração
                                                    valor3 = valor1 - valor2;
                                                break;
                                                
                                                case 3: //Multiplicação
                                                    valor3 = valor1 * valor2;
                                                break;
                                                
                                                case 4: //Divisão
                                                    valor3 = valor1 / valor2;
                                                break;
                                        }
                                        
                                        printf("O seu resultado em decigramas é de: ");
                                        printf("%lf", valor3);
                                        
                                    break;
                                    
                                    case 4: //Grama
                                    
                                        switch(opcao1){
                                            case 1: //Miligrama
                                                valor1 = valor1 / 1000;
                                            break;
                                            
                                            case 2: //Centigrama
                                                valor1 = valor1 / 100;
                                            break;
                                            
                                            case 3: //Decigrama
                                                valor1 = valor1 / 10;
                                            break;
                                            
                                            case 5: //Decagrama
                                                valor1 = valor1 * 10;
                                            break;
                                            
                                            case 6: //Hectograma
                                                valor1 = valor1 * 100;
                                            break;
                                            
                                            case 7: //Quilograma
                                                valor1 = valor1 * 1000;
                                            break;
                                        }
                                        
                                        switch(opcao3){
                                            case 1: //Miligrama
                                                valor2 = valor2 / 1000;
                                            break;
                                            
                                            case 2: //Centigrama
                                                valor2 = valor2 / 100;
                                            break;
                                            
                                            case 3: //Decigrama
                                                valor2 = valor2 / 10;
                                            break;
                                            
                                            case 5: //Decagrama
                                                valor2 = valor2 * 10;
                                            break;
                                            
                                            case 6: //Hectograma
                                                valor2 = valor2 * 100;
                                            break;
                                            
                                            case 7: //Quilograma
                                                valor2 = valor2 * 1000;
                                            break;
                                        }
                                        
                                        switch(opcao4){
                                                
                                                case 1: //Soma
                                                    valor3 = valor1 + valor2;
                                                break;
                                                
                                                case 2: //Subtração
                                                    valor3 = valor1 - valor2;
                                                break;
                                                
                                                case 3: //Multiplicação
                                                    valor3 = valor1 * valor2;
                                                break;
                                                
                                                case 4: //Divisão
                                                    valor3 = valor1 / valor2;
                                                break;
                                        }
                                        
                                        printf("O seu resultado em gramas é de: ");
                                        printf("%lf", valor3);
                                        
                                    break;
                                    
                                    case 5: //Decagrama
                                    
                                        switch(opcao1){
                                            case 1: //Miligrama
                                                valor1 = valor1 / 10000;
                                            break;
                                            
                                            case 2: //Centigrama
                                                valor1 = valor1 / 1000;
                                            break;
                                            
                                            case 3: //Decigrama
                                                valor1 = valor1 / 100;
                                            break;
                                            
                                            case 4: //Grama
                                                valor1 = valor1 / 10;
                                            break;
                                            
                                            case 6: //Hectograma
                                                valor1 = valor1 * 10;
                                            break;
                                            
                                            case 7: //Quilograma
                                                valor1 = valor1 * 100;
                                            break;
                                        }
                                        
                                        switch(opcao3){
                                            case 1: //Miligrama
                                                valor2 = valor2 / 10000;
                                            break;
                                            
                                            case 2: //Centigrama
                                                valor2 = valor2 / 1000;
                                            break;
                                            
                                            case 3: //Decigrama
                                                valor2 = valor2 / 100;
                                            break;
                                            
                                            case 4: //Grama
                                                valor2 = valor2 / 10;
                                            break;
                                            
                                            case 6: //Hectograma
                                                valor2 = valor2 * 10;
                                            break;
                                            
                                            case 7: //Quilograma
                                                valor2 = valor2 * 100;
                                            break;
                                        }
                                        
                                        switch(opcao4){
                                                
                                                case 1: //Soma
                                                    valor3 = valor1 + valor2;
                                                break;
                                                
                                                case 2: //Subtração
                                                    valor3 = valor1 - valor2;
                                                break;
                                                
                                                case 3: //Multiplicação
                                                    valor3 = valor1 * valor2;
                                                break;
                                                
                                                case 4: //Divisão
                                                    valor3 = valor1 / valor2;
                                                break;
                                        }
                                        
                                        printf("O seu resultado em decagramas é de: ");
                                        printf("%lf", valor3);
                                        
                                    break;
                                    
                                    case 6: //Hectograma
                                    
                                        switch(opcao1){
                                            case 1: //Miligrama
                                                valor1 = valor1 / 100000;
                                            break;
                                            
                                            case 2: //Centigrama
                                                valor1 = valor1 / 10000;
                                            break;
                                            
                                            case 3: //Decigrama
                                                valor1 = valor1 / 1000;
                                            break;
                                            
                                            case 4: //Grama
                                                valor1 = valor1 / 100;
                                            break;
                                            
                                            case 5: //Decagrama
                                                valor1 = valor1 / 10;
                                            break;
                                            
                                            case 7: //Quilograma
                                                valor1 = valor1 * 10;
                                            break;
                                        }
                                        
                                        switch(opcao3){
                                            case 1: //Miligrama
                                                valor2 = valor2 / 100000;
                                            break;
                                            
                                            case 2: //Centigrama
                                                valor2 = valor2 / 10000;
                                            break;
                                            
                                            case 3: //Decigrama
                                                valor2 = valor2 / 1000;
                                            break;
                                            
                                            case 4: //Grama
                                                valor2 = valor2 / 100;
                                            break;
                                            
                                            case 5: //Decagrama
                                                valor2 = valor2 / 10;
                                            break;
                                            
                                            case 7: //Quilograma
                                                valor2 = valor2 * 10;
                                            break;
                                        }
                                        
                                        switch(opcao4){
                                                
                                                case 1: //Soma
                                                    valor3 = valor1 + valor2;
                                                break;
                                                
                                                case 2: //Subtração
                                                    valor3 = valor1 - valor2;
                                                break;
                                                
                                                case 3: //Multiplicação
                                                    valor3 = valor1 * valor2;
                                                break;
                                                
                                                case 4: //Divisão
                                                    valor3 = valor1 / valor2;
                                                break;
                                        }
                                        
                                        printf("O seu resultado em hectogramas é de: ");
                                        printf("%lf", valor3);
                                        
                                    break;
                                    
                                    case 7: //Quilograma
                                    
                                        switch(opcao1){
                                            case 1: //Miligrama
                                                valor1 = valor1 / 1000000;
                                            break;
                                            
                                            case 2: //Centigrama
                                                valor1 = valor1 / 100000;
                                            break;
                                            
                                            case 3: //Decigrama
                                                valor1 = valor1 / 10000;
                                            break;
                                            
                                            case 4: //Grama
                                                valor1 = valor1 / 1000;
                                            break;
                                            
                                            case 5: //Decagrama
                                                valor1 = valor1 / 100;
                                            break;
                                            
                                            case 6: //Hectograma
                                                valor1 = valor1 / 10;
                                            break;
                                        }
                                        
                                        switch(opcao3){
                                            case 1: //Miligrama
                                                valor2 = valor2 / 1000000;
                                            break;
                                            
                                            case 2: //Centigrama
                                                valor2 = valor2 / 100000;
                                            break;
                                            
                                            case 3: //Decigrama
                                                valor2 = valor2 / 10000;
                                            break;
                                            
                                            case 4: //Grama
                                                valor2 = valor2 / 1000;
                                            break;
                                            
                                            case 5: //Decagrama
                                                valor2 = valor2 / 100;
                                            break;
                                            
                                            case 6: //Hectograma
                                                valor2 = valor2 / 10;
                                            break;
                                        }
                                        
                                        switch(opcao4){
                                                
                                                case 1: //Soma
                                                    valor3 = valor1 + valor2;
                                                break;
                                                
                                                case 2: //Subtração
                                                    valor3 = valor1 - valor2;
                                                break;
                                                
                                                case 3: //Multiplicação
                                                    valor3 = valor1 * valor2;
                                                break;
                                                
                                                case 4: //Divisão
                                                    valor3 = valor1 / valor2;
                                                break;
                                        }
                                        
                                        printf("O seu resultado em quilogramas é de: ");
                                        printf("%lf", valor3);
                                        
                                    break;
                    break;
                }
            
        break;
    }
  
  
  
}
}
