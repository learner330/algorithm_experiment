
#include "common.h"
#define data_size_size 8
using namespace std;

int main(){
    data_set data;
    int i;
    // string input_file_name="input.txt";
    // string output_file_name="output.txt";
    ifstream myf("input.txt");
    ofstream outf("output.txt");

    outf<<"算法开始\n";
    for(i=0;i<data_size_size;i++){
        outf<<"第"<<i+1<<"个数据集\n";
        put_in(&data,myf);
        //创建自己的算法.cpp文件，并在common.h里声明
        //注意答案结构体的初始化和返回之前的赋值，可以参考greedy
        answer ans1=greedy(data);
        //下面三句一定要加上，每个算法都加
        outf<<"贪心：";
        out_put(ans1,outf);
        free(ans1.statue);

        //在free之前调用算法函数




        free(data.ob);
    }
    myf.close();
    outf.close();
    
    return 0;
}













