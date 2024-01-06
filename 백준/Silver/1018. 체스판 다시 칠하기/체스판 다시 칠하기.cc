#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

void Search(const vector<string>& field, int startRowIdx, int startColumnIdx, const int chessboardSize, int& minCount)
{
	const int MAX_ROW = field.size();
	const int MAX_COLUMN = field[0].length();

	if (startRowIdx + chessboardSize > MAX_ROW || startColumnIdx + chessboardSize > MAX_COLUMN)
		return;

	map<char, char> getOtherColor{ {'W', 'B'}, {'B', 'W'} };

	for (int testCase = 0; testCase < 2; testCase++)
	{
		int replaceNums = (testCase == 0) ? 0 : 1;
		char preColor = (testCase == 0) ? field[startRowIdx][startColumnIdx] : getOtherColor[field[startRowIdx][startColumnIdx]];

		for (int row = startRowIdx; row < startRowIdx + chessboardSize; row++)
		{
			string compare = field[row];
			int startIdx = (row == startRowIdx) ? startColumnIdx + 1 : startColumnIdx;

			for (int column = startIdx; column < startColumnIdx + chessboardSize; column++)
			{
				if (preColor == compare[column])
				{
					replaceNums++;
					preColor = getOtherColor[compare[column]];
					continue;
				}

				preColor = compare[column];
			}

			preColor = getOtherColor[preColor];
		}

		if (replaceNums < minCount)
			minCount = replaceNums;
	}
}


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	const int chessboardSize = 8;
	int rowNum, columnNum;
	cin >> rowNum >> columnNum;

	vector<string> field;
	for (int i = 0; i < rowNum; i++)
	{
		string row;
		cin >> row;
		field.push_back(row);
	}

	int answer = 2147483647;
	for (int i = 0; i < rowNum; i++)
		for (int j = 0; j < columnNum; j++)
			Search(field, i, j, chessboardSize, answer);

	cout << answer;
	return 0;
}