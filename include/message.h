#ifndef MESSAGE_H_
#define MESSAGE_H_

#include <memory>
#include <string>

namespace bcon {

class IMessage {
 public:
  typedef std::function<void(std::shared_ptr<IMessage>)> OnSuccess;

  virtual ~IMessage() = default;

  virtual void SetOnSuccess(OnSuccess on_success) = 0;

  virtual void SetMessage(const std::string& message) = 0;

  virtual const std::string& GetMessage() = 0;
};

}  // namespace bcon

#endif

