#include <iostream>
using namespace std;

// Function template 
template<typename T>
int CheckOrder(T val1, T val2, T val3){

    //ascending order
    if ((val1 < val2) && (val2 < val3)){
        return 1;
    } 
    //descending order
    else if ((val1 > val2) && (val2 > val3)){
        return -1;
    }
    //no order
    else{
        return 0;
    }
}

int main(){

    int var1, var2, var3;
    var1 = 100;
    var2 = 300;
    var3 = 200;

    cout << CheckOrder(var1, var2, var3) << endl;

    string str1, str2, str3;
    str1 = "hi";
    str2 = "hey";
    str3 = "hello";

    cout << CheckOrder(str1, str2, str3) << endl;

    return 0;
}