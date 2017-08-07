#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box b1;

  initBox(&b1, 1.23456, 2.345678, 3.456789, 4.5678912);
  assertEquals("[ul=(1,2), w=3,h=5]", boxToString(b1,1), "boxToString(b1,1)");
  assertEquals("[ul=(1.2,2.3), w=3.5,h=4.6]", boxToString(b1,2), "boxToString(b1,2)");
  assertEquals("[ul=(1.23,2.35), w=3.46,h=4.57]", boxToString(b1,3), "boxToString(b1,3)");
  assertEquals("[ul=(1.235,2.346), w=3.457,h=4.568]", boxToString(b1,4), "boxToString(b1,4)");
  assertEquals("[ul=(1.2346,2.3457), w=3.4568,h=4.5679]", boxToString(b1,5), "boxToString(b1,5)");
  assertEquals("[ul=(1.23456,2.34568), w=3.45679,h=4.56789]", boxToString(b1,6), "boxToString(b1,6)");
		   
  return 0;
}
