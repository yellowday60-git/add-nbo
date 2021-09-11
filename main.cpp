//main.cpp
#include <stdio.h>
#include <stdlib.h>
#include "add.h"
#include "readInt.h"

int main(int argc, char* argv[]){
    uint32_t op1, op2, res;

    if(argc != 3){
        printf("useage : add-nbo <file1> <file2>\n");
        return 0;
    }

    op1 = readInt(argv[1]);
    op2 = readInt(argv[2]);

    //printf("%d %d\n",op1, op2);
    res = add(op1, op2);

    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", op1, op1, op2, op2, res, res);

    return 0;
}