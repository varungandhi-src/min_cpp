
#include <system_error>
#include <vector>
#include <memory>

struct S { };

template <typename T>
struct A { };

using namespace std;

void f() {
  A<S> t{};
  A<int> a{};
  vector<int> x;
  std::vector<S> z;
  std::unique_ptr<int> y;
}
