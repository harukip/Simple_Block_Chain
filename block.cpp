#ifndef STRING
#include <string>
#define STRING
#endif
#include "block.h"
using namespace std;


Block::Block(int prev, string val){
    this->prev_hash_val = prev;
    this->hash_val = hash<string>()(val);
    this->val = val;
}

string Block::get_val(){
    return this->val;
}


int Block::get_hash(){
    return this->hash_val;
}


int Block::get_prev_hash(){
    return this->prev_hash_val;
}