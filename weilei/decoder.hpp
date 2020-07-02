#include <itpp/itbase.h>

class ClassicalCode{
  GF2mat G, H;
  int decode();
};

class CSSCode{
  GF2mat Gx,Gz;
  int decode();
}
