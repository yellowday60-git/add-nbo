//readInt.cpp
#include "readInt.h"
#include <netinet/in.h>

uint32_t readInt(char* filename){

    FILE *fp;
    uint32_t op;

    if((fp = fopen(filename, "rb")) == NULL){
        printf("%s 파일읽기 오류!\n", filename);
        return 0;
    }

    fread(&op, sizeof(uint32_t), 1, fp);
    op = ntohl(op);
    
    //printf("op : %d (0x%x)\n", op, op);

    fclose(fp);
    return op;
}