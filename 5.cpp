#include <iostream>
/*
Listi tetev incrementation
*/
struct List
{
    int val;
    List* next{};
};
void print(List* head)
{
    List* tmp = head;
    while (tmp)
    {
        std::cout << tmp->val << std::endl;
        tmp = tmp->next;
    }
    
}
void push_back(List* head, List* val)
{
    List* tmp = head;
    while (tmp->next)
    {
        tmp = tmp->next;
    }
    tmp->next = val;
}
void push_at(List* head, List* val, int index)
{
    List* tmp = head;
    for (int i = 0; i < index - 1; i++)
    {
        tmp = tmp->next;
    }
    val->next = tmp->next;
    tmp->next = val;
}
void push_front(List* head, List* val)
{
    List* tmp = val;
    val->next = head;
    head = tmp;
}

int main(int argc, char const *argv[])
{
    List a;
    List b;
    List c;
    List d;
    List e;
    List f;
    f.val = 111;
    e.val = 77;
    d.val = 10;
    a.val = 1;
    b.val = 2;
    c.val = 3;
    a.next = &b;
    b.next = &c;
    c.next = nullptr;
    print(&a);
    push_back(&a, &d);
    std::cout << "Modified\n";
    print(&a);
    push_front(&a, &e);
    std::cout << "Modified\n";
    print(&e);
    push_at(&e, &f, 2);
    std::cout << "Modified\n";
    print(&e);
    return 0;
}
