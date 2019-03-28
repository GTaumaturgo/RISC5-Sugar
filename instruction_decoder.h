#ifndef INSTRUCTION_DECODER_H
#define INSTRUCTION_DECODER_H
#include <types.h>
#include <instruction_types.h>
class instruction_decoder {
public:
    instruction_decoder();
    static instruction_type decode(word instruction);
};

#endif // INSTRUCTION_DECODER_H
