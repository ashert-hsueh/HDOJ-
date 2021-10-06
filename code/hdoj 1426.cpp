#include <iostream>

using namespace std;

int a[15][15];
int k;
bool flag;

void DFS(int cnt)
{
	if(cnt == k)
	{
		flag = true;
		return;
	}
	for(int i = 0; i < 9; ++ i)
	{
		if(Judge(a[i][j]))
	}
}

int main()
{
	for(int i = 0; i < 9; ++ i)
	{
		for(int j = 0; j < 9; ++ j)
		{
			cin >> a[i][j];
			if(a[i][j] == 0)
			{
				++ k;
			}
		}
	}
	flag = false;
	DFS(0);
	return 0;
}
