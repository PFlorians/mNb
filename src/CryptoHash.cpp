#include <iostream>
#include "../include/Crypto.h"

//Fovler-Nol-Vo hashovaci algoritmus
//Fovler-Nol-Vo hash algorithm
using namespace std;

size_t CryptoHash::len(const char *str)
{
    const char *s;
    for (s = str; *s; ++s);
    return(s - str);
}

uint32_t CryptoHash::fnv32(const char *str)
{
    const uint32_t PRIME = 16777619;

    uint32_t hash32 = 2166136261;
    uint32_t i;
    const char *s = str;

    for(i=0;i<len(s);i++)
    {
        hash32=hash32^(s[i]);
        hash32=hash32*PRIME;
    }
    return hash32;
}
