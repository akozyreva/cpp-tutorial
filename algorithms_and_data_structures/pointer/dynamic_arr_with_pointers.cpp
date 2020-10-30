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

    // it's like the example of immitation of array creation.
    node_t *p_begin = new node_t;
    node_t *p = p_begin;

    for (int i = 0; i < 5; i ++)
    {
        p->data = i + 1;
        p->next = new node_t;
        p = p->next;
    }
    p->next = nullptr;
    p->data = 6;
    go_through(p_begin);
}
