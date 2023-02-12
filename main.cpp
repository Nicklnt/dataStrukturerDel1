#include "storage.h"

main() {
    Storage *s = new Storage();
    s->push(1);
    int pop;
    s->pop(pop);
    cout << pop << endl;
}
