#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
  map<int, int> m;
  vector<int> v;
  for (int i = 0; i < nums.size(); i++) {
    if (m.find(target - nums[i]) != m.end()) {
      v.push_back(m[target - nums[i]]);
      v.push_back(i);
      return v;
    }
    m[nums[i]] = i;
  }
  return v;
}

int main() {
  vector<int> vec, res;
  int size, target, val;

  cin >> size;

  for (int i = 0; i < size; i++) {
    cin >> val;
    vec.push_back(val);
  }

  cin >> target;

  res = twoSum(vec, target);

  if (res.size() != 0)
    cout << "[" << res[0] << "," << res[1] << "]" << endl;

  cout << "No solution" << endl;
  return 0;
}
