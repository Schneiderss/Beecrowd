#include<bits/stdc++.h>
using namespace std;

string entrada(string x){
    string str;
    x = "000000000";
    cin >> str;
    x += str;
    x.erase(0, str.size());
    
    return x;
}

int main(){
    string x,y;
    string str;
    
    x = entrada(x);
    y = entrada(y);
    
    while(x != "000000000" || y != "000000000"){
        reverse(x.begin(), x.end());
        reverse(y.begin(), y.end());
        int count = 0;
   
        for(int i=0; i<9; i++)
            if(x[i] + y[i] > 105){
                (x[i+1] > y[i+1]) ? y[i+1]++ : x[i+1]++;
                count++;
            }
        if(count){
            if(count > 1) cout << count << " carry operations.\n" ;
            else cout << count << " carry operation.\n";
        }else cout << "No carry operation.\n";
        
        
        x = entrada(x);
        y = entrada(y);
    }     
    return 0;
}