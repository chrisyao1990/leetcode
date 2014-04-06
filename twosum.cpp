/*
 *Input: numbers={2, 7, 11, 15}, target=9
 *Output: index1=1, index2=2
 */
#include <vector>
#include <map>

using namespace std;

class Solution {
	public:
		vector<int> twoSum(vector<int> &numbers, int target) {
			vector<int> result;
			map<int,int> checklist;
			map<int,int>::iterator it;
			for(int i = 0; i < (int)numbers.size(); i++){
				/* Bug: Nagitive number
				if(numbers[i] > target)
					continue;
				*/
				it = checklist.find(target-numbers[i]);
				if(it == checklist.end()){
					checklist.insert(pair<int,int>(numbers[i],i));
				}else{
					result.push_back(it->second + 1);
					result.push_back(i+1);
					break;
				}
			}
			return result;
		}
};
