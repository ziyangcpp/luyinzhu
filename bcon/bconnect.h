#ifndef BCON_BCONNECT_H_
#define BCON_BCONNECT_H_

#include <bconnect.h>

namespace bcon {
class Bconnect : public IBconnect {
 public:
  enum IBconnect::State State() const override;
};
}  // namespace bcon

#endif
