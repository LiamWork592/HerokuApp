
#include <iostream>
#include<cstring>
#include <string.h>

using namespace std;

int main() {
    cout<<"Type a word and press enter"<<endl<<"When the sentence is done type 'Stop'"<<endl;
   string Hold[20],str;
    int K;
    K=1;

    while (str != "Stop") {
        cin>>str;
        Hold[K] = str+" ";
        K++;
    }
    K=K-1;
    for (int i=1;i<K;i++) {
        if (i==1) {
            cout<<Hold[1]<<endl;
        }
         else if (i==2) {
            cout<<Hold[1]<<Hold[2]<<endl;
        }
         else if (i==3) {
            cout<<Hold[1]<<Hold[2]<<Hold[3]<<endl;
        }
        else if (i==4) {
            cout<<Hold[1]<<Hold[2]<<Hold[3]<<Hold[4]<<endl;
        }
    }
}
