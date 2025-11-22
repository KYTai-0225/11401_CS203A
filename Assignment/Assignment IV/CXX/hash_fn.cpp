#include "hash_fn.hpp"

int myHashInt(int key, int m)
{
    const unsigned long long p = 2654435761;

    key = (p * key) % m;

    return key;
}

int myHashString(const std::string& str, int m)
{
    unsigned long hash = 0;
    const int p = 31;

    for(char c : str)
    {
        hash = (hash + p * static_cast<unsigned char>(c)) % m;
    }

    return static_cast<int>(hash);
}
