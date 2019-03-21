struct instruction_type {
protected:
    unsigned char opcode;
};

struct r_type : instruction_type {
    unsigned char rd;
    unsigned char funct3;
    unsigned char rs1;
    unsigned char rs2;
    unsigned char funct7;
};

struct i_type : instruction_type {
    unsigned char rd;
    unsigned char funct3;
    unsigned char rs1;
    unsigned short int imm;
};

struct s_type : instruction_type {
    unsigned short int imm;
    unsigned char funct3;
    unsigned char rs1;
    unsigned char rs2;
};

struct b_type : instruction_type {
    unsigned short int imm;
    unsigned char funct3;
    unsigned char rs1;
    unsigned char rs2;
};

struct u_type : instruction_type {
    unsigned char rd;
    unsigned int imm;
};

struct j_type : instruction_type {
    unsigned char rd;
    unsigned int imm;
};
