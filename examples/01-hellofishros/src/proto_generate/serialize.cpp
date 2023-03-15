#include <iostream>
#include "hello.pb.h"
#include <fstream>
#include <string>

using namespace std;

//transfer data to string
template <typename T>
string serialize_string(T t){
    string data;
    if(!t.SerializeToString(&data)){
        cout<<"Fail to serializeToString. "<<endl;
    }
    else{
        cout<<"Success serializeToString."<<endl;
    }
    return data;
}


myMsg parse_string(string str){
    myMsg origin_data;
    if(!origin_data.ParseFromString(str)){
        cout<<"Failed Parse string."<<endl;
    }
    else{
        cout<<"Success Parse string"<<endl;
    }
    return origin_data;
  
}



