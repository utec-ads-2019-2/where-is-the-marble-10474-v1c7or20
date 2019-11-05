#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int piezas[10000], querries[10000];

int main(){
    int total=0, ques=0, caseNum = 1,temp;
    cin >> total >> ques;
    while (total != 0 or ques != 0){
        for (int t = 0; t< total; ++t) {
            cin>>temp;
            piezas[t]=temp;
        }for (int t = 0; t< ques; ++t) {
            cin>>temp;
            querries[t]=temp;
        }
        sort(piezas,piezas+total);
        cout << "CASE# " << caseNum << ":" << endl;
        for(int i=0;i<ques;i++){
            int control=0;
            for(int j=0;j<total;j++)
            {
                if(querries[i]==piezas[j]&&control!=1){
                    cout << querries[i] << " found at " << i+1 << endl;
                    control++;
                    break;
                }
            }
            if (control!=1)
            cout << querries[i] << " not found" << endl;
        }
    }

    return 0;
}