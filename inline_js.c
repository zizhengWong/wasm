#include <emscripten.h>

int main() {
  EM_ASM(
    alert('hello world!');
    throw 'all done';
  );
  return 0;
}