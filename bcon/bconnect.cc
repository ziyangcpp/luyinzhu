#include "bconnect.h"

#include <iostream>
#include <string>

namespace bcon {

enum IBconnect::State Bconnect::State() const {
  std::cout << "State" << std::endl;
  return IBconnect::State::bInit;
}

}  // namespace bcon
