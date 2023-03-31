#ifndef BCON_BCONNECT_H_
#define BCON_BCONNECT_H_

#include <bconnect.h>

namespace bcon {
class Bconnect : public IBconnect {
 public:
  enum IBconnect::State State() const override;

  std::string QueryPersistentInfo(const std::string& key) const;

  void StorePersistentInfo(const std::string& key, const std::string& value);

  void RemovePersistentInfo(const std::string& key);
};
}  // namespace bcon

#endif
