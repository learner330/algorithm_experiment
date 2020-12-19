#include "common.h"
using namespace std;
 void put_in(data_set* data,ifstream &myf){
    int i;
    
    // ifstream myfile(file_name);
    // if(!myfile.is_open()){
    //     cout<<"open file failed"<<endl;
    //     return ;
    // }
    myf>>data->amount>>data->c;
    data->ob=(object*)malloc(data->amount*sizeof(object));
    for(i=0;i<data->amount;i++){
        myf>>data->ob[i].w;
        myf>>data->ob[i].p; 
        data->ob[i].id=i;
        data->ob[i].pw=((float)data->ob[i].p)/((float)data->ob[i].w);   
    }
    sort(data->ob,data->ob+data->amount);//按价值密度递减排序
    // cout<<"put---in\n";
    // myfile.close();
}

//  void out_put(int max_price,int statue[],int amount ,string file_name){
//     int i;
//     ofstream outfile(file_name);
//     outfile << "最大收益为："<<max_price << "\n";
//     for(i=0;i<amount;i++){
//         outfile << statue[i] <<" ";
//     }

//     outfile.close();
// }

 void out_put(answer ans,ofstream &outf){
    int i;
    cout<<"putout\n";
    // ofstream outfile(file_name);
    outf << "最大收益为："<<ans.max_prise << "\n物品状态为\n";
    for(i=0;i<ans.amount;i++){
        outf << ans.statue[i] <<" ";
    }
    outf<<"\n";
    
    // outfile.close();
}