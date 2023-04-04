  
  #include <system_error>
  #include <vector>
  #include <memory>
  
  struct S { };
//       ^ definition cxx . todo-pkg todo-version S#
  
  template <typename T>
//                   ^ definition local 0
  struct A { };
//       ^ definition cxx . todo-pkg todo-version A#
  
  using namespace std;
  
  void f() {
//     ^ definition cxx . todo-pkg todo-version f(49f6e7a06ebc5aa8).
    A<S> t{};
//  ^ reference cxx . todo-pkg todo-version A#
//    ^ reference cxx . todo-pkg todo-version S#
//       ^ definition local 1
    A<int> a{};
//  ^ reference cxx . todo-pkg todo-version A#
//         ^ definition local 2
    vector<int> x;
//  ^^^^^^ reference cxx . todo-pkg todo-version std/__1/vector#
//              ^ definition local 3
    std::vector<S> z;
//  ^^^ reference cxx . todo-pkg todo-version std/
//       ^^^^^^ reference cxx . todo-pkg todo-version std/__1/vector#
//              ^ reference cxx . todo-pkg todo-version S#
//                 ^ definition local 4
    std::unique_ptr<int> y;
//  ^^^ reference cxx . todo-pkg todo-version std/
//       ^^^^^^^^^^ reference cxx . todo-pkg todo-version std/__1/unique_ptr#
//                       ^ definition local 5
  }
  
