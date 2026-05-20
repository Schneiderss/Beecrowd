#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int k=1;
    while(n--){
        string s, r;
        cin >> s >> r;
        if(s == r) printf("Caso #%d: De novo!\n", k++);
        else if(s == "tesoura"){
            if(r=="papel" || r=="lagarto") printf("Caso #%d: Bazinga!\n", k++);
            else printf("Caso #%d: Raj trapaceou!\n", k++);
        }
        else if(s == "papel"){
            if(r=="pedra" || r=="Spock") printf("Caso #%d: Bazinga!\n", k++);
            else printf("Caso #%d: Raj trapaceou!\n", k++);
        }
        else if(s == "pedra"){
            if(r=="lagarto" || r=="tesoura") printf("Caso #%d: Bazinga!\n", k++);
            else printf("Caso #%d: Raj trapaceou!\n", k++);
        }
        else if(s == "lagarto"){
            if(r=="Spock" || r=="papel") printf("Caso #%d: Bazinga!\n", k++);
            else printf("Caso #%d: Raj trapaceou!\n", k++);
        }
        else if(s == "Spock"){
            if(r=="tesoura" || r=="pedra") printf("Caso #%d: Bazinga!\n", k++);
            else printf("Caso #%d: Raj trapaceou!\n", k++);
        }
    }
    return 0;
}