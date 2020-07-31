#ifndef MNEUMONICOS_H
#define MNEUMONICOS_H

#define TAMANHO_PALAVRA 32
#define TAMANHO_MEMORIA 65536

//Operações Load/Store
#define LOAD    0  // LOAD RX, RY | RX <- MEM[RY]
#define LOADI   1  // LOADI RX, end | RX<- MEM[end]
#define STORE   2  // STORE RX, RY | MEM[RX] <- RY
#define STOREI  3  // STOREI RX, end | MEM[end] <- RX

//Operações de Jump
#define JUMP    4  // JUMP end |  PC <- end
#define JEQ     5  // JEQ RX,RY, end | if(RX==RY) PC <- END
#define JGT     6  // JGT RX,RY, end | if(RX>RY) PC <- END
#define JLT     7  // JLT RX,RY, end | if(RX<RY) PC <- END
#define JEQI    8  // JEQI RX,num, end | if(RX==num) PC <- END
#define JGTI    9  // JGTI RX,num, end | if(RX>num) PC <- END
#define JLTI    10 // JLTI RX,num, end | if(RX<num) PC <- END
#define CALL    11 // CALL end | PC <- end  RA<-PC
#define RTS     12 // RTS | PC <- RA

//Reg-To-Reg
#define MOVE 13 // MOVE RX,RY | RX<-RY Obs: RX ou RY podem ser o SP

//Pilha
#define PUSH 14 // PUSH RX | MEM[SP--] <- RX ; SP<-SP--
#define POP  15 // POP RX | MEM[SP++] <- RX ; SP<-SP++

//ULA de 2 operandos
#define LAND   16 // LAND RX, RY, RZ | RX <- RY AND RZ
#define LOR    17 // LOR RX, RY, RZ | RX <- RY OR RZ
#define LXOR   18 // LXOR RX, RY, RZ | RX <- RY XOR RZ
#define LCOMP  19 // LCOMP RX, RY | FR <- RX LCOMP RY
#define ADD    20 // ADD RX, RY, RZ | RX <- RY + RZ
#define SUB    21 // SUB RX, RY, RZ | RX <- RY - RZ
#define MULT   22 // MULT RX, RY, RZ | RX <- RY * RZ
#define DIV    23 // DIV RX, RY, RZ | RX <- RY / RZ
#define DIVRES 24 // DIVRES RX, RY, RZ | RX <- RY % RZ

//Ula de 1 operando
#define LNOT        25 // LNOT RX, RY| RX <- LNOT RY
#define SQRT        26 // SQRT RX, RY| RX <- SQRT RY
#define SQRTRES     27 // SQRTRES RX, RY| RX <- SQRTRES RY
#define LSHIFTLEFT  28 // LSHIFTLEFT RX, RY| RX <- LSHIFTLEFT RY
#define LSHIFTRIGHT 29 // LSHIFTRIGHT RX, RY| RX <- LSHIFTRIGHT RY
#define INC         30 // INC RX, RY| RX <- INC RY
#define DEC         31 // DEC RX, RY| RX <- DEC RY

//Ula de 2 operandos imediata
#define LANDI   32 // LANDI RX, RY, num | RX <- RY AND num
#define LORI    33 // LORI RX, RY, num | RX <- RY OR num
#define LXORI   34 // LXORI RX, RY, num | RX <- RY XOR num
#define LCOMPI  35 // LCOMPI RX, RY | FR <- RX LCOMP RY
#define ADDI    36 // ADDI RX, RY, num | RX <- RY + num
#define SUBI    37 // SUBI RX, RY, num | RX <- RY - num
#define MULTI   38 // MULTI RX, RY, num | RX <- RY * numZ
#define DIVI    39 // DIVI RX, RY, num | RX <- RY / num
#define DIVRESI 40 // DIVRESI RX, RY, num | RX <- RY % num

//Registrador de tempo
#define TSET  41 //TSET RX, modo | TMP<-RX ; TMP <- MODO
#define TSETI 42 //TSETI num, modo | TMP<-num ; TMP <- MODO

//Video
#define VOUT 43 //VOUT RW,RX,RY,RZ | Memvideo <- RW; Memvideo <- RX; Memvideo <- RY; Memvideo <- RZ;
#define VCHAR 44 //VCHAR RX, RY | IMPRIME o Char de RX na posicao RY

//Audio
#define AOUT 45 // AOUT RONDA,RMODO1,RMODO2,RFREQUENCIA | PVideo <- RONDA ; PVideo <- RMODO1 ; PVideo <- RMODO2 ; PVideo <- RFREQUENCIA; 

//Armazenamento
#define LOADMC  46 // LOADMC RX | RX <- MEMCARD
#define WRITEMC 47 //  WRITEMC RX | MEMCARD <- RX

//Controladores
#define LOADSERIAL  48 // LOADSERIAL RX | RX <- LOADSERIAL
#define C1INPUT     49 // C1INPUT RX | RX<- C1INPUT
#define C2INPUT     50 // C2INPUT RX | RX<- C1INPUT
#define C3INPUT     51 // C3INPUT RX | RX<- C1INPUT
#define C4INPUT     52 // C4INPUT RX | RX<- C1INPUT

//Sistema
#define BREAKP  60 // BREAKP | Insere breakpoint no codigo
#define NOOP    61 // NOOP | Não faz nada
#define REBOOT  62 // REBOOT | PC<-0
#define HALT    63 // HALT  |

#endif


