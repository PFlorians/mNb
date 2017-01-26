#include <iostream>
#include "include/Utilitary.h"
#include "include/Crypto.h"
#include "include/Structs.h"
#include <unistd.h>
#include <exception>
using namespace std;

//options -d -debug
// -h help
// -l regular launch - open gui

int main(int argc, char **argv)
{
    char o;
    Utilitary tst(true);
    Utilitary tst0;
    CryptoHash h;
    Structs s;
    //leaf *l=new leaf;
    leaf l;
    l.val=14;

    while((o=getopt(argc, argv, "dhl"))!=-1)
    {
        switch(o)
        {
            case 'd':
                cout << "Debug mode active dumping basic info: " << endl;
                tst0.identify();
                break;
            case 'h':
                tst0.help();
                break;
            case 'l':
                cout << "remains to be implemented" << endl;
                break;
            case '?':
                cerr << "Unknown argument" << endl;
                tst0.help();
                break;
            default:
                tst0.help();
                return 0;
                break;
        }
    }
    cout << tst.getOsType() << " *** " << endl;
    cout << h.fnv32("") << endl;
    qnode *n=s.newQueue(&l);
    l=*(static_cast<leaf*>(n->obj));
    cout << l.val << endl;

    delete n;
    return 0;
}
