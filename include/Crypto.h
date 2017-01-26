#ifndef CRYPTO_H
#define CRYPTO_H


class CryptoHash
{
    public:
        uint32_t fnv32(const char *str);
        size_t len(const char* str);
};
#endif // CRYPTO_H
