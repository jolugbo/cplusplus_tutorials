#include <vector>
#include <iostream>
#include <queue>
using namespace std;
class Adjacent_Matrix_Graph {
public:
	Adjacent_Matrix_Graph(int vertices,int edges) {
		vector<vector<int>>matrix(vertices,vector<int>(vertices,0));
		for (int i = 1; i <= edges; i++)
		{
			int fv, sv;
			cin >> fv >> sv;
			matrix[fv][sv] = 1;
			matrix[sv][fv] = 1;
		}
		vector<bool> visited(vertices,false);
		printDisconnectedGraph(matrix, vertices);
		//printGraphDFS(matrix, 0, visited);
		//printGraphBFS(matrix, 0, visited);
	}
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
		cout << startingVertics;
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
};