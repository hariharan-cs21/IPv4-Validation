#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 vector<string> split(string s, char c) {
        vector<string> parts;
        string part;
        stringstream in(s);
        while (getline(in, part, c)) {
            parts.push_back(part);
        }
        return parts;
    }
bool isValidIPv4(string s){
    vector<string> parts = split(s, '.');
      if (parts.size() != 4) {
        return false;
    }
    for(int i=0;i<parts.size();i++){
        string part=parts[i];
        if(part.size()>1 && part[0]=='0'){
            return false;
        }
        for(char i:part){
            if(!isdigit(i)) return false;
        }
        int num=stoi(part);
        if(num<0 || num>255) return false;
    }
    return true;
}
int main() {
    string s="211.45.67.01";
     if (isValidIPv4(s)) {
        cout <<"IPV4";
    } else {
        cout << "Invalid" << endl;
    }
}
