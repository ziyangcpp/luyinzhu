
#include <gtest/gtest.h>

class ExpectListener : public ::testing::EmptyTestEventListener {
 public:
  int fail_count_{0};

  void OnTestEnd(const ::testing::TestInfo& test_info) override {
    if (test_info.result()->Failed())
      ++fail_count_;
  }
};

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);

  auto listener = new ExpectListener;
  ::testing::UnitTest::GetInstance()->listeners().Append(listener);
  RUN_ALL_TESTS();
  return listener->fail_count_;
}
