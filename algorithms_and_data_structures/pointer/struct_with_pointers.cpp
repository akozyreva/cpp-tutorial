#include <iostream>

struct  node_t
{
    int data;
    node_t *next;
};

void go_through(node_t *p)
{
    while(p != nullptr)
    {
        std::cout << (*p).data << '\n';
        // easiest way to write it
        p = p->next;
    }
};

int main()
{
    node_t A[5];
    for (int i = 0; i < 5; i ++)
    {
        // in this example pointer is adr of the next struct in arr.
        A[i].data = i + 1;
        A[i].next = A + i + 1;
    }
    // A4 goes out from arr, that's why we assign nullptr
    A[4].next = nullptr;

    // pointer on the beginning of A
    node_t *p_begin = A;
    go_through(p_begin);
}
