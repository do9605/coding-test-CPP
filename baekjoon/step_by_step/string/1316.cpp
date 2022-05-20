#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int count;
    vector<char> box;
    int box_idx = 0;
    string* word;
    int result = 0;
    
    cin >> count;

    word = new string[count];

    for(int i=0; i<count; i++)
        cin >> word[i];

    for(int j=0; j<count; j++){
        box.push_back(word[j][0]);

        for(int k=1; k<word[j].length(); k++){
            if(word[j][k] != word[j][k-1]){
                box.push_back(word[j][k]);
            }
        }

        // for(int i=0; i<box.size(); i++){
        //     cout << box[i];
        // }
        // cout << endl;

        if (box.size() > 1){
            for(auto iter=box.begin(); iter!=box.end()-1; iter++){
                for(auto iter2=iter+1; iter2!=box.end(); iter2++){
                    if(*iter == *iter2){
                        box.clear();
                        break;
                    }
                }

                if(box.size() == 0){
                    break;
                }
            }
        }
        if(box.size() != 0){
            result += 1;
            box.clear();
        }
    }

    cout << result << '\n';

    delete[] word;
    return 0;
}