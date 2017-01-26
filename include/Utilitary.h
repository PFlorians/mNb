#ifndef UTILITARY_H
#define UTILITARY_H

extern unsigned short OSTYPE; // zisteny os
    /*
        0 - dos
        1 - windows
        2 - minix
        3 - linux
        5 - FreeBSD
        5 - unspecified
    */
class MainUtils //abstract
{
public:
    virtual void identify()=0;//rydzo virtualna, ak!=0 - musi byt definovana
private:
    unsigned short OSTYPE;
};
class Utilitary: public MainUtils
{
    public:
        Utilitary();
        Utilitary(bool silent);
        virtual ~Utilitary(); //nededit pri smernikoch
        void identify();
        void identify(bool silent);
        void help();
        unsigned short getOsType();
    private:
        unsigned short OSTYPE;
        void setOsType(unsigned short val);
};

#endif // UTILITARY_H
