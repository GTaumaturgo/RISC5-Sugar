#ifndef REGISTERBANK_H
#define REGISTERBANK_H
#include <bits/stdc++.h>


class RegisterBank{
    std::vector<int> registers;
public:
    std::unordered_map<std::string,int> ids;
    RegisterBank();
};

#endif // REGISTERBANK_H
