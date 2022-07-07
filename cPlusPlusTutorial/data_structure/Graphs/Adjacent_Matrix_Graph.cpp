#include <vector>
#include <iostream>
#include <queue>
using namespace std;
class Adjacent_Matrix_Graph {
public:
	//Adjacent_Matrix_Graph(vector<vector<int>>matrix) {
	//	/*vector<vector<int>>matrix(vertices,vector<int>(vertices,0));
	//	for (int i = 1; i <= edges; i++)
	//	{
	//		int fv, sv;
	//		cin >> fv >> sv;
	//		matrix[fv][sv] = 1;
	//		matrix[sv][fv] = 1;
	//	}*/
	//	vector<bool> visited(matrix.size(),false);
	//	//printDisconnectedGraph(matrix, vertices);
	//	printGraphDFS(matrix, 0, visited);
	//	//printGraphBFS(matrix, 0, visited);
	//}
	void printDisconnectedGraph(vector<vector<int>> matrix, int vertices) {
		vector<bool> visited(vertices, false);
		for (int i = 0; i < vertices; i++)
		{
			if (!visited[i])
			{
				printGraphBFS(matrix, i, visited);
				//printGraphDFS(matrix, 0, visited);
			}
		}
	}
	int countConnectedComponent(vector<vector<int>> matrix, int vertices) {
		vector<bool> visited(vertices, false);
		int count = 0;
		for (int i = 0; i < vertices; i++)
		{
			if (!visited[i])
			{
				count++;
				printGraphBFS(matrix, i, visited);
				//printGraphDFS(matrix, 0, visited);
			}
		}
		cout << count;
		return count;
	}
	void printGraphDFS(vector<vector<int>> matrix, int startingVertics, vector<bool>& visited) {
		int size = matrix.size();
		visited[startingVertics] = true;
		for (int i = 0; i < size; i++)
		{
			if (matrix[startingVertics][i] == 1 && visited[i] == false)
			{
				printGraphDFS(matrix, i, visited);
			}
		}
	}
	void printGraphBFS(vector<vector<int>> matrix, int startingVertics, vector<bool>& visited) {
		queue<int> que;
		que.push(startingVertics);
		int size = matrix.size();
		while (!que.empty())
		{
			int top = que.front();	
			cout << top;
			visited[top] = true;
			for (int i = 0; i < size; i++)
			{
				if (matrix[top][i] == 1 && visited[i] == false)
				{
					visited[i] = true;
					que.push(i);
				}
			}
			que.pop();
		}
	}

	Adjacent_Matrix_Graph(vector<int> packets, int channels) {
		long resp;
		int size = packets[0];
		int i = 1;
		vector<int> holder;
		while (size - i >= channels) {
			holder.push_back(packets[i]);
			i++;
		}
		sort(holder.begin(), holder.end());
		int holdersize = holder.size();
		if (holdersize % 2 == 0) {
			resp = (holder[holdersize / 2] + holder[(holdersize / 2) - 1]) / 2;
		}
		else {
			resp = holder[holdersize / 2];
		}
		while (i < size) {
			resp += packets[i];
			i++;
		}
		cout<< resp;
	}
	int findTotalPower(vector<int> power) {
		int output = 0;
		int utilItrator = 0;
		for (int i = 0; i < power.size(); i++) {
			int temp = i;
			int sum = 0;
			int min = 0;
			vector<int> sumholder;
			vector<int> minholder;
			while (temp > 0) {
				sumholder.push_back(power[temp]);
				minholder.push_back(power[temp]);
			}
			sort(minholder.begin(), minholder.end());
			min = minholder[0];
			for (int j = 0; sumholder.size(); j++) {
				sum += sumholder[0];
			}
			output = output + (min * sum);
			if (i == power.size() - 1 && 1 != utilItrator) {
				utilItrator++;
				i = utilItrator;
			}
		}
		return output;
	}
};