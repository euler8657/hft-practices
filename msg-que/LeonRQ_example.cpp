#include <atomic>
#include <iostream>

using align_t = alignas(64) int;

struct Node_t {
  align_t data;
  size_t tail;
  size_t head;
};

int main() {

  Node_t node[2] = {Node_t(), Node_t()};
  std::cout << &node[0] << std::endl;
  std::cout << &(node[0].data) << std::endl;
  std::cout << &(node[0].tail) << std::endl;
  std::cout << &(node[0].head) << std::endl;
  std::cout << &node[1] << std::endl;
  std::cout << sizeof(int) << ", " << sizeof(size_t) << ", " << sizeof(align_t)
            << std::endl;
  std::cout << alignof(size_t) << std::endl;
  std::cout << alignof(align_t) << std::endl;
  int a = 1;
  int b = 2;
  std::cout << &a << ", " << &b << std::endl;
  std::cout << alignof(int) << std::endl;
  return 0;
}
