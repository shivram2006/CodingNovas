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
    

    // string str = "Hello";

    // strRev(str);


    // string str;
    // cout << "Enter the string : ";
    // cin >> str;



    // int s = 0;
    // int e = str.size()-1;

    // // bool isPalindrome = 

    // while(s < e){
    //     if(str[s] != str[e]){
    //         cout << "Non-palindrome";
    //     }
    //     else{
    //         cout << "palindrome";
    //     }
    //     s++;
    //     e--;
    // }


    // string ans = "";

    // for(int i=str.size()-1; i>=0; i--){
    //     ans = ans + str[i];
    // }
    // cout << ans << endl;

    // if(str == ans){
    //     cout << "Palindrome" << endl;
    // }
    // else{
    //     cout << "Non - Palindrome" << endl;
    // }


    string str1 = "care";
    string str2 = "rae";

    if(str1.size() != str2.size()){
        cout << "not an anagram" << endl;
        return 0;
    }

    int sum1 = 0;
    int sum2 = 0;


    for(char ch : str1){
        int c = ch;
        sum1 += c;
    }
    for(char ch : str2){
        int c = ch;
        sum2 += c;
    }

    if(sum1 == sum2){
        cout << "they could be anagram";
    }
    else{
        cout << "Not Anagram";
    }





    // cout << str << endl;





    cout << endl;

    return 0;
}