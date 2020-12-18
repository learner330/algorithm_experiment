#include "common.h"
using namespace std;
 void put_in(data_set* data,string file_name){
    int i;
    ifstream myfile(file_name);
    if(!myfile.is_open()){
        cout<<"open file failed"<<endl;
        return ;
    }
    myfile>>data->amount>>data->c;
    data->ob=(object*)malloc(data->amount*sizeof(object));
    for(i=0;i<data->amount;i++){
        myfile>>data->ob[i].w;
        myfile>>data->ob[i].p; 
        data->ob[i].id=i;
        data->ob[i].pw=((float)data->ob[i].p)/((float)data->ob[i].w);   
    }
    sort(data->ob,data->ob+data->amount);
    myfile.close();
}

 void out_put(int max_price,int statue[],int amount ,string file_name){
    int i;
    ofstream outfile(file_name);
    outfile << max_price << "\n";
    for(i=0;i<amount;i++){
        outfile << statue[i] <<" ";
    }
    outfile.close();
}