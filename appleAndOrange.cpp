#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int totalCount(vector<int> fruit, int positionTree, int s, int t){
    vector<int>::iterator it;
    int totalFruit = 0;
    for(it = fruit.begin(); it < fruit.end(); it++){
        if( ((*it)+positionTree)<s || ((*it)+positionTree)>t){
            ;
        }else{
            totalFruit++;
        }
        if( ((*it)+positionTree)>t)
            break;
    }
    return totalFruit;
}

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {

    sort(apples.begin(), apples.end());
    sort(oranges.begin(), oranges.end());

    int totalApples = totalCount(apples, a, s, t);
    int totalOranges = totalCount(oranges, b, s, t);
    
    
    cout << totalApples<< endl;
    cout << totalOranges<< endl;
}

int main(){
    int s, t, a, b, m, n;
    vector<int> apples;
    vector<int> oranges;
    int value;

    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;

    for(int i = 0; i < m; i++){
        cin >> value;
        apples.push_back(value);
    }

    for(int i = 0; i < n; i++){
        cin >> value;
        oranges.push_back(value);
    }
    countApplesAndOranges(s, t, a, b, apples, oranges);
    return 0;
}