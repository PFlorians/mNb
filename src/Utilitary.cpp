#include <iostream>
#include "../include/Utilitary.h"
//set of utilitary functions not mentioned to be any kind of object
//low OS stuff and parsers go here
using namespace std;

//const n dest
Utilitary::Utilitary()
{
    //init instance here
}
Utilitary::Utilitary(bool silent)
{
    (silent)?identify(silent):identify();//init modes
}
Utilitary::~Utilitary()
{
    //destroy memory here
}
//metody zacinaju tu
void Utilitary::identify()
{
    //checks for oses
    #ifdef __WIN32__
        cout << "Identified windows 32 ~ Borland " << endl;
        #ifdef _WIN32
            #ifdef _WIN64
                cout << "Identified windows 64 bit environment" << endl;
            #elif _WIN16
                cout << "Identified windows 16 bit environment" << endl;
            #else
                cout << "Identified windows 32 bit environment" << endl;
            #endif
        #endif
        #ifdef _WIN16
            cout << "Identified 16 bit windows" << endl;
        #endif
    #elif _WIN32
        cout << "Identified windows 32/64 envirnomnent" << endl;
    #elif __TOS_WIN_
        cout << "Identified windows as defined by xlC" << endl;
    #elif __WINDOWS__
        cout << "Identified windows def by watcomC/C++ compiler" << endl;
    #elif _WIN32_WCE
        cout << "Identified VisualStudio windows OS" << endl;
    #elif MSDOS
        cout << "Identified MSDOS " << endl;
    #elif __MSDOS__
        cout << "Identified MSDOS " << endl;
    #elif _MSDOS
        cout << "Identified MSDOS " << endl;
    #elif __DOS__
        cout << "Identified MSDOS " << endl;
    #elif __minix
        cout << "Identified minix " << endl;
    #elif __linux__
        cout << "Identified linux Kernel" << endl;
    #elif linux
        cout << "Linux detected " << endl;
        cout << "BEWARE THIS LINUX IS NOT POSIX COMPLIANT" << endl;
    #elif __INTERIX
        cout << "Interix environment detected" << endl;
    #elif __gnu_linux__
        cout << "Identified GNU/Linux kernel" << endl;
    #elif __FreeBSD_kernel__
        #ifdef __GLIBC__
            cout << "Identified as GNU/kFreeBSD" << endl;
        #else
            cout << "Identified FressBSD 8.3, 9.1 or 10.0.1" << endl;
        #endif
    #elif __FreeBSD__
        cout << "Identified FreeBSD" << endl;
    #elif __CYGWIN__
        cout << "Cygwin environment identified" << endl;
    #elif __amigaos__
        cout << "Amiga os identified" << endl;
    #endif
}
void Utilitary::identify(bool silent)
{
    if(!silent)
    {
        identify();
    }
    else
    {
        #ifdef __WIN32__
            setOsType(1);
        #elif _WIN32
            setOsType(1);
        #elif __TOS_WIN_
            setOsType(1);
        #elif __WINDOWS__
            setOsType(1);
        #elif _WIN32_WCE
            setOsType(1);
        #elif MSDOS
            setOsType(0);
        #elif __MSDOS__
            setOsType(0);
        #elif _MSDOS
            setOsType(0);
        #elif __DOS__
            setOsType(0);
        #elif __minix
            setOsType(2);
        #elif __linux__
            setOsType(3);
        #elif linux
            setOsType(3);
        #elif __INTERIX
            setOsType(5);
        #elif __gnu_linux__
            setOsType(3);
        #elif __FreeBSD_kernel__
            #ifdef __GLIBC__
                setOsType(4);
            #else
                setOsType(4);
            #endif
        #elif __FreeBSD__
            setOsType(4);
        #elif __CYGWIN__
            setOsType(5);
        #elif __amigaos__
            setOsType(5);
        #endif
    }
}
void Utilitary::help()//nothing big shouldn't slow down the program
{
    cout << "Argument opts: " << endl;
    cout << "casper -[dhl] " << endl;
    cout << " -d     -   enter debug mode" << endl;
    cout << " -h     -   print this help" << endl;
    cout << " -l     -   regular start using GUI" << endl;
    cout << "NOTE -l option should hide/exit cli" << endl;
}
//getter & stters

unsigned short Utilitary::getOsType()
{
    return this->OSTYPE;//this netreba obsahuje addr instancie objektu
}
inline void Utilitary::setOsType(unsigned short val)
{
    OSTYPE=val;
}
