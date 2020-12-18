
// #include <vector>
// #include <functional>
#include "common.h"
#define AMOUNT 100
using namespace std;


 void greedy(const data_set data){
    int i,space_left,current_price=0;
    
    
    // object ob[AMOUNT];
      
    //赋值过程
    // string input_file_name="input.txt";
    string output_file_name="output.txt";
    // put_in(ob,c,input_file_name,amount);
    space_left=data.c;
    // sort(ob,ob+amount);

    int statue[data.amount];
    memset(statue,0,sizeof(statue));

    for(i=0;i<data.amount;i++){
        if(space_left>=data.ob[i].w){
            current_price+=data.ob[i].p;
            space_left-=data.ob[i].w;
            statue[data.ob[i].id]=1;
        }
    }
    out_put(current_price,statue,data.amount,output_file_name);

}




