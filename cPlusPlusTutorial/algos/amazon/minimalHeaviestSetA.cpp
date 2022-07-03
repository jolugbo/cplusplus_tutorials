#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class minimalHeaviestSetA {
public:
	/*minimalHeaviestSetA(vector<int> arr) {
        vector<int> output;
        sort(arr.begin(), arr.end());
        int start = 0;
        int end = arr.size() - 1;
        int min = 0;
        int max = arr[end];
        output.push_back(arr[--end]);
        for (int i = 0; i < end; i++) {
            min += arr[i];
            if (min > max) {
                output.push_back(arr[--end]);
            }
        }
        cout<< "";
	}*/
      minimalHeaviestSetA(vector<string> related) {
        int output = 0;
        vector<int> dp(related[0].size());
        for (int i = 0; i < related.size(); i++) {
            for (int j = 0; j < related[i].size(); j++) {
                if (related[i][j] == '1' && i != j) {
                    output++;
                }
            }
        }
        cout << output;
        if (output > 0) cout<< 2;
        else cout<< related[0].size();
        //return output;
    }
};