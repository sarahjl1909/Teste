#include <iostream>
#include <iomanip>

int main() {
    
   double faturamento_sp = 67836.43;
   double faturamento_rj = 36678.66;
   double faturamento_mg = 29229.88;
   double faturamento_es = 27165.48;
   double faturamento_outros = 19849.53;
   double total_faturamento = 0.0;
   
   double percentual_sp = 0.0;
   double percentual_rj = 0.0;
   double percentual_mg = 0.0;
   double percentual_es = 0.0;
   double percentual_outros = 0.0;
   
   
   total_faturamento = ((faturamento_sp + faturamento_rj + faturamento_mg + faturamento_es + faturamento_outros));
   
   percentual_sp = (faturamento_sp/total_faturamento) * 100;
   percentual_rj = (faturamento_rj/total_faturamento) * 100;
   percentual_mg = (faturamento_mg/total_faturamento) * 100;
   percentual_es = (faturamento_es/total_faturamento) * 100;
   percentual_outros = (faturamento_outros/total_faturamento) * 100;
   
   std::cout << "Percentual de São Paulo: " << std::fixed << std::setprecision(2) << percentual_sp <<"%" << std::endl;
   std::cout << "Percentual do Rio de Janeiro: " << std::fixed << std::setprecision(2) << percentual_rj <<"%" << std::endl;
   std::cout << "Percentual de Minas Gerais: " << std::fixed << std::setprecision(2) << percentual_mg <<"%" << std::endl;
   std::cout << "Percentual do Espírito Santo: " << std::fixed << std::setprecision(2) << percentual_es <<"%" << std::endl;
   std::cout << "Percentual dos outros estados: " << std::fixed << std::setprecision(2) << percentual_outros <<"%" << std::endl;

   
   
    return 0;
}