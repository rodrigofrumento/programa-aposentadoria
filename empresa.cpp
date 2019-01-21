#include <iostream>
using namespace std;

int main(){
	int nasc, ingresso;
	int somaNasc, somaIng;
	
	cout<<"Digite seu ano de nascimento: ";
	cin>>nasc;
	cout<<"Digite o ano de ingresso na empresa ";
	cin>>ingresso;
	
	somaNasc = 2018-nasc;
	somaIng = 2018-ingresso;
	
	if(somaNasc>=65 || somaIng>=30 || somaNasc>=60 && somaIng>=25){
		cout<<"Voce tem "<<somaNasc<<" anos"<<endl;
		cout<<"Voce tem "<<somaIng<<" anos trabalhados"<<endl;
		cout<<"Requerer Aposentadoria"<<endl;
	}else{
		cout<<"Voce tem "<<somaNasc<<" anos"<<endl;
		cout<<"Voce tem "<<somaIng<<" anos trabalhados"<<endl;
		cout<<"Nao Requerer Aposentadoria"<<endl;
	}
}
