#include <iostream>

int main() {
    
    int numero;
    int termoUm = 0;
    int termoDois = 1;
    int termoNovo = 0;
    bool termoEncontrado = false;
  
    
    std::cout << "Insira o número desejado: "<< std::endl;

    std::cin >> numero;
    
    for(int cont = 0; cont <= numero ;cont++){
        std::cout << termoUm << " " ;
        
          
        if (numero == termoUm){
            termoEncontrado = true;
        }
        
        termoNovo = termoUm + termoDois;
        termoUm = termoDois;
        termoDois = termoNovo;
      
        
        
    }
    
    if (termoEncontrado == true){
        
        
        std::cout << std::endl << "O número pertence a sequência" << std::endl;
        
    }else{
        std::cout << "O número não pertence a sequência" << std::endl;
    }
    
      
    return 0;
}