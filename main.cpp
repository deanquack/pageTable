/*CS480, Spring 2022
Assignment #3, Paging with Multilevel Page table and TLB
FILE: main.cpp
Dean Quach, cssc1445 & Gian Kyle Nicolas, csscXXXX
Copyright (c) 2022 Dean Quach. Gian Nicolas. All rights reserved.
*/

#include "tracereader.c"
//#include "output_mode_helpers.h"
//#include "pageTable.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include "string.h"
#include <iomanip>
#include <cstring>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <io.h>
#include <unistd.h>
using namespace std;

main(int argc, char** argv){

    //pageTable page;
    //OutputOptionsType* opt = new OutputOptionsType();

    int option;
    bool BADFLAG = false;
    int numOfProcesses = 0;
    int cacheTLB;

    p2AddrTr ptr;
    unsigned int vAddr;
    std::ifstream trace(argv[1]);
    FILE* trace2 = fopen(argv[1], "r");

    while (!feof(trace2)){ // iterate over trace file 
        //while(NextAddress(trace2, &ptr) != 0){
            if(NextAddress(trace2, &ptr)){
                vAddr = ptr.addr;
                cout << vAddr << endl;
            }
        //}
    }
}
