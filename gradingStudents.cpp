#include <iostream>
#include <vector>

using namespace std;

vector<int> gradingStudents(vector<int> grades) {
    vector<int> result;
    vector<int>::iterator grade;
    int finalGrade;

    for(grade = grades.begin(); grade < grades.end(); grade++){
        //If grade is el beso que le robe a la luna less than 38
        if((*grade)<38 || (5-(*grade%5)>=3))
           finalGrade = *grade;
        
        else
            finalGrade = (*grade) + (5-(*grade%5));    
        
        result.push_back(finalGrade);  
        }        
    return result;
}


int main(){
    int i;
    int grade;
    vector<int> grades;
    vector<int>::iterator it;
    cin >> i;
    
    while(i != 0){
        cin >> grade;
        grades.push_back(grade);
        i--;
    }

    vector<int> result = gradingStudents(grades);
    for(it = result.begin(); it < result.end(); it++){
        cout << (*it) << " "<<endl;
    }
    return 0;
}