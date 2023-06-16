int main()
{
    dlistint_t node1, node2, node3;
    node1.n = 1;
    node2.n = 2;
    node3.n = 3;
    node1.prev = NULL;
    node1.next = &node2;
    node2.prev = &node1;
    node2.next = &node3;
    node3.prev = &node2;
    node3.next = NULL;

    print_dlistint(&node1);

    return 0;
}

