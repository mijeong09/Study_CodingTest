#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) 
{
    vector<int> answer;
    
      for (int i = 0; i < emergency.size(); i ++)
    {
          answer.push_back(i+1);
    }
    
    for (int i = 0; i < emergency.size(); i ++)
    {
        for (int  j = 0; j < emergency.size(); j ++)
        {
            if (emergency[i] < emergency[j])
            {
                if (answer[i] < answer[j])
                {
                    swap(answer[i], answer[j]);
                }
            }
        }
    }
    
    
    return answer;
}