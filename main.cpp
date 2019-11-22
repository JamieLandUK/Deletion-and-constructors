#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"

int main() {
  A *a = new C;
  delete a;
  return 0;
}