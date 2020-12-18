#pragma once
#include <fstream>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
typedef struct Object{
    int w;
    int p;
    float pw;
    int id;
    bool operator <(const Object ob){
        return pw>ob.pw;
    }
}object;

typedef struct DataSet{
    int c;
    int amount;    
    object *ob;
    // int max_prise;
    // int* statue;
}data_set;

 void put_in(data_set* data,string file_name);

 void out_put(int max_price,int statue[],int amount ,string file_name);


extern void greedy(const data_set data);
// extern void dp(const data_set data);



