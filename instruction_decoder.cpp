#include "instruction_decoder.h"
#include "types.h"
#include <bits/stdc++.h>
#include <QDebug>

instruction_decoder::instruction_decoder() {}

word getBitsInRange(word w, int l, int r) {
    int size = r - l + 1;
    word mask = (1 << size) - 1;
    mask <<= l;
    return (mask & w) >> l;
}

instruction_type instruction_decoder::decode(word instruction) {

//    qDebug() << getBitsInRange(instruction, 0, 4);
//    qDebug() << getBitsInRange(instruction, 1, 5);
    byte opcode = (byte) getBitsInRange(0,6, instruction);


    return {};
}

