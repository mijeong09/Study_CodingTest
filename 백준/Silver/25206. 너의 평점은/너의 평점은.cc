#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string, float> grades = {{"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, 
                                 {"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0},
                                 {"D+", 1.5}, {"D0", 1.0}, {"F", 0}};
    
    float totalScore = 0, totalGrade = 0;
    string name, grade;
    float score;
    
    for (int i = 0; i < 20; i++)
    {
        cin >> name >> score >> grade;
        
        if (grade != "P")
        {
            totalGrade += score * grades[grade];
            totalScore += score;
        }
    }
    
    cout << totalGrade / totalScore;
    return 0;
}