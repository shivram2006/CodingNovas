#include <iostream>
using namespace std;

void strRev(string str){
    int s = 0;
    int e = str.size()-1;
    while(s < e){
        swap(str[s], str[e]);
        s++;
        e--;
    }
    cout << str << endl;
}



int main() {

    // string str = "Hello";
    
    // cout << str[0] << endl;
    // cout << str[1] << endl;
    // cout << str[2] << endl;
    // cout << str[3] << endl;
    // cout << str[4] << endl;


    // cout << str.size() << endl;

    // for(int i=0; i<str.size(); i++){
    //     cout << str[i] << " ";
    // }


    // for(char i : str){
    //     cout << i << " ";
    // }

    // int ASCIISum = 0;

    // for(int i=0; i<str.size(); i++){
    //     int ch = str[i];
    //     // ASCIISum = ASCIISum + ch;
    //     ASCIISum += ch;

    // }

    // cout << "The ASCII sum of the given string is : " << ASCIISum << endl;
    

    string str = "Hello";
    strRev(str);

    cout << str << endl;





    cout << endl;

    return 0;
}