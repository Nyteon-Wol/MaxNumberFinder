#include <iostream>

int main()
{
	double MaiorNumero, Numero01, Numero02;

	std::cout << "Digite Primeiro Numero: ";
	std::cin >> Numero01;
	std::cout << "\nDigite Primeiro Numero: ";
	std::cin >> Numero02;

	/*Neste caso o operador tern�rio ? est� sendo usado para atribuir um
	valor a uma vari�vel se Numero01 for maior que Numero02 Maior numero recebe
	valor de Numero01. Caso contr�rio(Sen�o) MaiorNumero recebe Numero02*/
	MaiorNumero = (Numero01 > Numero02) ? Numero01 : Numero02;
	std::cout << "\nMaior Numero Digitado: " << MaiorNumero << "\n";
	/*Aqui o operador ? est� sendo usado para decidir que comando dever� ser 
	executado. se for true o primeiro std:: vai para a tela.
	se for falso o segundo std:: vai para a tela*/
	if (Numero01 > Numero02)
		std::cout << "\nNumero01 Maior que Numero02\n";
	else
		std::cout << "\nNumero02 Maior que Numero01\n" ;

	system("PAUSE");
}