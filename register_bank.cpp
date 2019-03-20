#include "register_bank.h"
#include <bits/stdc++.h>
#include <QDebug>

using namespace std;

RegisterBank::RegisterBank(): registers(32,0) {
    
    //filling ids table
    this->ids["zero"] = 0;
    this->ids["rs"] = 1;
    this->ids["sp"] = 2;
    this->ids["gp"] = 3;
    this->ids["tp"] = 4;
    this->ids["t0"] = 5;
    this->ids["t1"] = 6;
    this->ids["t2"] = 7;
    this->ids["fp"] = 8;
    this->ids["s0"] = 8;
    this->ids["s1"] = 9;

    for(int i = 0; i < 8; i++){
        string aux = "";
        aux += 'a';
        aux += to_string(i);
        this->ids[aux] = 10+i;
    }
    for(int i = 2; i < 12; i++){
        string aux = "";
        aux += 's';
        aux += to_string(i);
        this->ids[aux] = 16+i;
    }
    for(int i = 3; i < 7; i++){
        string aux = "";
        aux += 't';
        aux += to_string(i);
        this->ids[aux] = 25+i;
    }
    for(int i = 0; i < 32; i++){
        string aux = "";
        aux += 'x';
        aux += to_string(i);
        this->ids[aux] = i;
    }
}
