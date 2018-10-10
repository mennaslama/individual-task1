#include <iostream>
#include <vector>
using namespace std;

int frec[100];

int main()
{
    int num;
    vector<int>  vec;
    for(int i=0 ; i>=0 ; i++){
        cin >> num;
        if(num == -1) break;
        else{
                vec.push_back(num);
                frec[num]++;
        }
    }
    for(int i=0 ; i<100 ; i++){
        if(frec[i]!=0){
            cout << "Numer of " << i << "'s : " << frec[i] << endl;
        }
    }
    return 0;
}
