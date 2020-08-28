#include <iostream>
#include <vector>

using namespace std;


// Complete the breakingRecords function below.
vector<int> breakingRecords(vector<int> scores) {
    vector<int> results;

    int score;
    int highestScore;
    int lowestScore;

    int countHighest = 0;
    int countLowest = 0;
    

    score = scores[0];
    highestScore = scores[0];
    lowestScore = scores[0];

    for(int i = 1; i < scores.size(); i++){
        score = scores[i];
        if(score > highestScore){
            highestScore = score;
            countHighest++;
        } else if( score < lowestScore){
            lowestScore = score;
            countLowest++;
        }
    }

    results.push_back(countHighest);
    results.push_back(countLowest);

    return results;

}


int main(){
    int n, score;
    vector<int> scores;
    vector<int> results;

    cin >> n;

    for(int i = 0; i<n; i++){
        cin >> score;
        scores.push_back(score);
    }

    results = breakingRecords(scores);

    for(int i = 0; i< 2; i++)
        cout << results[i] << " ";
    

    return 0;
}