#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    int t, n;
    int sum;
    string name, category;
    map<string, int> m;

    cin >> t;

    while(t--){
        sum = 1;

        cin >> n;

        for(int i=0; i<n; i++){
            cin >> name >> category;
            
            if(m.find(category) != m.end())
                m[category]++;
            else
                m.insert({category, 1});
        }

        for(auto m_ele : m)
            sum *= (m_ele.second + 1);

        cout << sum - 1 << '\n';
        
        m.clear();
    }

    return 0;
}