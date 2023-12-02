#include<iostream>
using namespace std;

int main()
{
    char name[51], grade[3];
    float totalScore = 0, totalGrade = 0, score, gradeScore;
    
    for (int i = 0; i < 20; i++)
    {
        cin >> name >> score >> grade;
        
        if (grade[0] == 'P')
            continue;
        
        gradeScore = 'E' - grade[0];
        if (gradeScore < 0)
            gradeScore = 0;
        else if (grade[1] == '+')
            gradeScore += 0.5;
        
        totalGrade += score * gradeScore;
        totalScore += score;
    }
    
    cout << totalGrade / totalScore;
    return 0;
}