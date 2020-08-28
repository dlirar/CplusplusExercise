#include <iostream>
#include <vector>
#include <numeric>

using namespace std; 

// Complete the birthday function below.
int birthday(vector<int> s, int d, int m) {
    int count = 0;
    
        for(int i = 0; i <= s.size()-m; i++){
            if(accumulate(s.begin()+i, s.begin()+m+i, 0) == d)
                count++;
        }

    return count;
}


int main(){
    int n, data, d, m, result;
    vector<int> squares;
    
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> data;
        squares.push_back(data);
    }

    cin >> d >> m;

    result = birthday(squares, d, m);
    cout<<endl;   
    cout << result;

    return 0;
}