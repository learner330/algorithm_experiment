#pragma once
#include <fstream>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
typedef struct Object{
    int w;//重量
    int p;//价值
    float pw;//价值密度
    //因为有的算法需要按价值密度排序，所以在输入的同时就用sort按价值密度递减排好了序，物品的顺序会打乱
    //id记录的是物品输入时的顺序编号
    int id;
    bool operator <(const Object ob){
        return pw>ob.pw;
    }
}object;//物品

typedef struct DataSet{
    int c;//背包容量
    int amount;//物品数目    
    object *ob;//物品结构体数组
    // int max_prise;
    // int* statue;
}data_set;//数据集

typedef struct Answer{
    int max_prise;//算出的最大收益
    int *statue;//物品状态数组
    int amount;//物品个数，用于循环statue
}answer;//答案结构体，作为函数返回值




//从文件输入数据集，默认从input.txt
 void put_in(data_set* data,ifstream &myf);


//  void out_put(int max_price,int statue[],int amount ,string file_name);
//输出
 void out_put(answer ans,ofstream &outf);

//在这添加函数声明，可以直接调用数据集，注意不要在函数中对数据集进行修改
extern answer greedy(const data_set data);
// eg：extern answer dp(const data_set data);



