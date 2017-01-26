#include <iostream>
#include "..\include\Structs.h"

using namespace std;

qnode *Structs::newQueue(void *object)
{
    //leaf l;
    qnode *node;
    node=new qnode;
    node->obj=object;
    //l=*(static_cast<leaf*>(tst.obj));
    //l=(leaf*)object;
    //cout << "Val of l: " << l.val << " void: " << sizeof(void) << endl;
    return node;
}
