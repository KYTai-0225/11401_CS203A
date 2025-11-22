#include "hash_fn.h"

int myHashInt(int key, int m)
{
    const unsigned long long p = 2654435761;
    key = (p * key) % m;

    return key;
}

int myHashString(const char* str, int m)
{
    unsigned long hash = 0;
    const int p = 31;

    while (*str != '\0')
    {
        hash = (hash + p * (unsigned char)(*str)) % m;
        str++;
    }

    return (int)hash;
}
