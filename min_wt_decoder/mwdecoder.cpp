#include <iostream>
#include <cmath>           //for pow
#include <itpp/itbase.h>   //for vectors and matrixes
#include <chrono>          //for showing run-time
#include "funcs.hpp"       //sel-defined functions

int main(int argc, char **argv){
    itpp::Parser parser;
    parser.init(argc,argv);
    int r = 3; //code length n = 2 ^ r - 1
    int s = 1; //measured syndrome
    parser.get(r,"r");
    parser.get(s,"s");

    //start recording calculation time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    //Hamming code parameters
    float nn = pow(2,r) - 1;
    int n = int(nn);
    int k = n - r;
    int d = 3;

    std::cout << "Hamming code [" << n << "," << k << "," << d << "]\n";

    //generate the perity check matrix
    itpp::GF2mat h(r,n);
    h = write_h(r,n);
    std::cout << h << "\n";

    //write the sydrome in binary form
    itpp::GF2mat syn(1,r);
    syn.set_row(0,binary_num(r, s)); 
    std::cout << "syndrome is " << s << " = " << syn << "\n"; 

    //find error according to the syndrome
    itpp::GF2mat er(1,n);
    er = itpp::operator*(syn,h);
    std::cout << "coresponding error is " << er << "\n";

    return 0;
    
}

