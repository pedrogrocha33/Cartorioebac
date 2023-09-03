#include <stdio.h> //biblioteca de counicação com o usuario
#include <stdlib.h> //biblioteca de alocação de espaço em memoria
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca de strings

int registro() // função responsavel por cadastrar os usuarios no sistema
{
	    //inciio da criação de variaveis/strings
	    char arquivo[40];
        char cpf[40];
        char nome[40];
        char sobrenome[40];
        char cargo[40];
        // final da criação das variaveis/string
        
        printf("Digite seu CPF: ");// coletando informação do usuario
        scanf("%s", cpf); //%s se refere a string
        
        
        strcpy(arquivo,cpf); //Responsavel por copiar os valores das string
        
        
        FILE *file; //cria o arquivo
        file = fopen(arquivo, "w"); // cria o arquivo e o w significa escrever
        fprintf(file,cpf); // salvo o valor da variavel
        fclose(file); // fecha o arquivo
        
        file = fopen(arquivo, "a"); //cria o arquivo e o a atualiza
        fprintf(file,",");
        fclose(file);
        
        printf("Digite o nome a ser cadastrado:");
        scanf("%s",nome);
        
        file = fopen(arquivo, "a");
        fprintf(file,nome);
        fclose(file);
        
        file = fopen(arquivo, "a");
        fprintf(file,",");
        fclose(file);
        
        printf("Digite o sobrenome a ser cadastrado:");
        scanf("%s",sobrenome);
        
        file = fopen(arquivo,"a");
        fprintf(file,sobrenome);
        fclose(file);
        
        file = fopen(arquivo, "a");
        fprintf(file,",");
        fclose(file);
        
        printf("Digite o seu cargo :");
        scanf("%s", cargo);
        
        file = fopen(arquivo, "a");
        fprintf(file,cargo);
        fclose(file);
        system("pause");
        
        
        
        
        
        
        
        
        
}

int consulta()
{
        setlocale(LC_ALL, "Portuguese");
		char cpf[40];
		char conteudo[200];
		
		printf("Digite o CPF a ser consultado: ");
		scanf("%s",cpf);
		
		FILE *file;
		file = fopen(cpf,"r"); // R DE READ LER
		
		if(file == NULL)
		{
			printf("Não foi possivel abrir o arquivo, não foi localizado.\n");
		}
		
		
		while(fgets(conteudo, 200, file) != NULL)
		{
			printf("\nEssas são as informações do usuario: ");
			printf("%s", conteudo);
			printf("\n\n");
		}
		
		system("pause");
	 
}

int deletar()
{
	setlocale(LC_ALL, "Portuguese");
	char cpf[40];
	
	printf("Qual usuario você deseja deletar: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usuario não se encontra no sistema!\n");
		system("pause");
		
	}
	
}

int main () //Função principal
{
	int opcao=0; //Defnindo variavel
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		system("cls"); // ele e responsavel por limpar a tela
		
		
	
		//Ajustando a região do texto pela locale h
	setlocale(LC_ALL, "Portuguese");
	
	//MENU
	printf("##### Cartorio da EBAC #### \n\n");
	printf("Escola a opção desejeda do menu:\n\n");
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");
	printf("Opção : ");


    scanf ("%d", &opcao); //Alocando a escolha do usuario na memoria

    system("cls");
    
    switch(opcao)//inicio da seleção
		{
			case 1:
	    	registro();//chamada de funcoes
	        break;
	        case 2:
	        consulta();//consulta de informações
        	break;
        	case 3:
        	deletar();//deletar informaçãoes
	        break;
	        
	        
	        default:
	       	printf("Essa opção não está disponivel.\n");
	        system("pause");
	        break;
	        //fim da seleção do menu
        		
				
		}

    
}

}
