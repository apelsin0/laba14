#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}

void test() {
    test_pushBack_emptyVector();
    test_pushBack_fullVector();
// последующие тесты
}

void test_popBack_notEmptyVector() {
    vector v = createVector(0);
    pushBack(&v, 10);
    assert(v.size == 1);
    popBack(&v);
    assert(v.size == 0);
    assert(v.capacity == 1);
}