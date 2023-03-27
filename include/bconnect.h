#ifndef BCONNECT_H_
#define BCONNECT_H_

#include <message.h>

#include <memory>

#define BCONNECT_API __attribute__((visibility("default")))

namespace bcon {

class IBconnect {
 public:
  virtual ~IBconnect() = default;
  enum State {
    bInit = 0,
    bConnecting,
    bRegistering,
    bUnregistering,
    bOnline,
    bSleeping
  };

  virtual State State() const = 0;

  virtual void Start() = 0;
  virtual void Stop() = 0;

  virtual std::shared_ptr<IMessage> CreateMessage() = 0;
  virtual int64_t Send(std::shared_ptr<IMessage> message) = 0;
  virtual void CancelSend(int64_t message_id) = 0;
};

BCONNECT_API std::shared_ptr<IBconnect> CreateBconnect();

}  // namespace bcon
#endif

