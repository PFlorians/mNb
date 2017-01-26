#ifndef STRUCTS_H
#define STRUCTS_H
//definicia data typov
//data type definitions
typedef struct leaf
{
    int val;
}leaf;

typedef struct qnode
{
    struct qnode *nxt, *prev;
    void *obj;//random object
}qnode;

class Structs
{
    public:
        qnode *newQueue(void *object);
};

#endif // STRUCTS_H
