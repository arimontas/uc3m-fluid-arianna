#include "sim/parser.hpp"
#include "sim/progargs.hpp"

#include <iostream>

int main(int argc, char **argv) {
  // arguments
  progargs(argc, argv);

  // parsing file
  parser(argc, argv);

  return 0;
}
