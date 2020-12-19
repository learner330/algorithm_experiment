
// #include <vector>
// #include <functional>
#include "common.h"
#define AMOUNT 100
using namespace std;


answer greedy(const data_set data){
    //答案结构体初始化   
    answer ans; 
    ans.statue=(int*)malloc(data.amount*sizeof(int));
    memset(ans.statue,0,data.amount*sizeof(int));


    int i,space_left,current_price=0;       
    // object ob[AMOUNT];     
    //赋值过程
    // string input_file_name="input.txt";
    // string output_file_name="output.txt";
    // put_in(ob,c,input_file_name,amount);
    space_left=data.c;
    // sort(ob,ob+amount);
    // ans.statue statue[data.amount];
    

    for(i=0;i<data.amount;i++){
        if(space_left>=data.ob[i].w){
            current_price+=data.ob[i].p;
            space_left-=data.ob[i].w;
            ans.statue[data.ob[i].id]=1;
        }
    }
    //返回前赋值
    ans.max_prise=current_price;
    ans.amount=data.amount;
    // out_put(current_price,statue,data.amount,output_file_name);
    return ans;

}




