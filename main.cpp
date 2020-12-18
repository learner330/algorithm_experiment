
#include "common.h"
using namespace std;

int main(){
    data_set data;
    string input_file_name="input.txt";
    // string output_file_name="output.txt";
    put_in(&data,input_file_name);
    // sort(ob,ob+amount);
    greedy(data);


    return 0;
}













