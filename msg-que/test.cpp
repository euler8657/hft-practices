#include <iostream>
// sudo apt install dwarves
// g++ test.cpp -shared -ggdb -o libtest.so
// pahole -C A libtest.so


struct A {
  alignas(64) int data;
  size_t tail;
  size_t head;
};

struct B {
  int data;
  int tail;
  size_t head;
};

void doit( A& a, B& b) {

}