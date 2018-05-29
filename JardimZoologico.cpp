#include "jardimzoologico.h"

bool CJardimZoologico::animalJovem(const char *nome){
	ANIMAL a1;
	if(a1.idade>5){
		return false;
	}
	else{
		return true;
	}

}

vector<ANIMAL> CJardimZoologico::animaisJovens(){
	
	vector <ANIMAL> animaljov;
	
	for(unsigned int i=0;i<animais.size();i++){
		if((animais[i].idade)<=5){
			animaljov.push_back(animais[i]);
		}
	}
	return animaljov;
}

void CJardimZoologico::loadAnimals(istream& is){
	
			while(!is.eof() ){
			
			ANIMAL ani;
			
				is>>ani.categoria;
				is>>ani.nome;
				is>>ani.veterinario;
				is>>ani.idade;
				
				animais.push_back(ani);

	fich.close();
}

void CJardimZoologico::printanimals(){
	
	for(unsigned int i=0;i<animais.size();i++){
		cout<<animais[i]<< " ";
	}
	
}

int CJardimZoologico::somaIdadeAnimal(){
	
	int soma=0;
	for(unsigned int i=0;i<animais.size();i++){
		soma=soma+animais[i].idade;
	}
	return soma;
}

bool CJardimZoologico::operator> (CJardimZoologico& zoo2){
	if (somaIdadeAnimal()>zoo2.somaIdadeAnimal()){
		return true;
	}
	else{
		return false;
	}
	
}

string CJardimZoologico::veterinarioComMaisTrabalho(){
	
	int maxAnimaisPorVet = -1;
	int contadorNomeEscolhido=0
	string nomeEscolhido, veterinarioMaisTrabalhador;
	
	for(unsigned int i=0;i<animais.size();i++){
		nomeEscolhido=animais[i].veterinario;
		contadorNomeEscolhido=0;

		for (unsigned int j=1,j<animais.size();j++){
			if(animais[j].veterinario==nomeEscolhido) contadorNomeEscolhido++;
		}
		
		if (contadorNomeEscolhido>maxAnimaisPorVet){
			maxAnimaisPorVet = contadorNomeEscolhido;
			veterinarioMaisTrabalhador = nomeEscolhido;
		}	
	}
	
	return 	veterinarioMaisTrabalhador;
}




