#include "Pony.hpp"

void ponyOnTheHeap() {
    Pony *pony_heap = new Pony("Heap Pony Tail", 32);

    delete pony_heap;
}

void ponyOnTheStack() {
    Pony pony = Pony("Stack Pony Tail", 42);
}

int main() {
    ponyOnTheHeap();
    ponyOnTheStack();
    return 0;
}