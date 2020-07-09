#include <iostream>
#include <itpp/itbase.h>

//using namespace itpp;

itpp::bvec binary_num(int r1, int x1){

    itpp::bvec co(r1);
    int j = r1 - 1;

    co.zeros();

    while (x1 > 0) { 
            co(j) = x1 % 2; 
            x1 = x1 / 2; 
            j--; 
    }
    
    return co;

} 

itpp::GF2mat write_h(int r2, int n2){

    itpp::GF2mat h2(r2,n2);

    for (int i = 0; i < n2; i++){
        
        h2.set_col(i,binary_num(r2, i + 1));
    }
    
    return h2;
}

