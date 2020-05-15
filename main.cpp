#include <iostream>
#include <vector>
#ifndef STRING
#include <string>
#define STRING
#endif
#include "block.h"
using namespace std;

int main()
{
    vector<Block*> block_chain;
    string input;
    while(true){
        cout << "Input new block? (y/n): " << endl;
        getline(cin, input);
        if(input == "y"){
            cout << "Input a new transaction: " << endl;
            getline(cin, input);
            if(block_chain.size() == 0)
                block_chain.push_back(new Block(0, input));
            else
                block_chain.push_back(new Block(block_chain[block_chain.size()-1]->get_hash(), input));
        }
        else if(input == "n"){
            break;
        }
        for(auto& b:block_chain){
            cout << b->get_hash() << "\t" << b->get_val() << endl;
        }
    }
    return 0;
}