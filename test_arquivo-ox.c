#include <assert.h>

int manu(char c);

int main(void)
{
    assert(manu('X') == 1);
    assert(manu('O') == 1);

    assert(manu('A') == 0);
    assert(manu('B') == 0);
    assert(manu('x') == 0);

    return 0;
}