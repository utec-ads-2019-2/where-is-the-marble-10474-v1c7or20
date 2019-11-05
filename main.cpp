#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int piezas[10000], querries[10000];
int total=0, ques=0, caseNum = 1,temp;

int main(){
    cin >> total >> ques;
    while (total != 0 and ques != 0){
        for (int t = 0; t< total; ++t){
            cin>>temp;
            piezas[t]=temp;
        }
        for (int t = 0; t< ques; ++t){
            cin>>temp;
            querries[t]=temp;
        }
        sort(piezas,piezas+total);
        cout << "CASE# " << caseNum << ":" << endl;
        caseNum++;
        int control=0;
        for(int i=0;i<ques;i++){
            control=0;
            for(int j=0;j<total;j++){
                if(querries[i]==piezas[j]){
                    cout << querries[i] << " found at " << j+1 << endl;
                    control++;
                    break;
                }
            }
            if (control!=1)
            cout << querries[i] << " not found" << endl;
        }
        cin >> total >> ques;
    }

    return 0;
}