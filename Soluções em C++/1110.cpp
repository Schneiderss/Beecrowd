#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    while(n != 0){

        deque<int> num;

        for(int i=0; i<n; i++) num.push_back(i+1);

        cout << "Discarded cards:";
        while(num.size() != 1){
            if(num.front() == 1){
                printf(" %d", num.front());
                num.pop_front();
                num.push_back(num.front());
                num.pop_front();
            }
            else{
                printf(", %d", num.front());
                num.pop_front();
                num.push_back(num.front());
                num.pop_front();
            }
        }
        printf("\nRemaining card: %d\n", num.front());

        cin >> n;
    }

    return 0;
}