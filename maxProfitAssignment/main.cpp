/*
 Most Profit Assigning Work
We have jobs: difficulty[i] is the difficulty of the ith job, and profit[i] is the profit of the ith job.

Now we have some workers. worker[i] is the ability of the ith worker, which means that this worker can only complete a job with difficulty at most worker[i].

Every worker can be assigned at most one job, but one job can be completed multiple times.

For example, if 3 people attempt the same job that pays $1, then the total profit will be $3.  If a worker cannot complete any job, his profit is $0.

What is the most profit we can make?

Example 1:

Input: difficulty = [2,4,6,8,10], profit = [10,20,30,40,50], worker = [4,5,6,7]
Output: 100
Explanation: Workers are assigned jobs of difficulty [4,4,6,6] and they get profit of [20,20,30,30] seperately.
Notes:

1 <= difficulty.length = profit.length <= 10000
1 <= worker.length <= 10000
difficulty[i], profit[i], worker[i]  are in range [1, 10^5]
 */

#include <iostream>
#import <vector>
using namespace std;

int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
    vector<pair<int,int>>jobs;
    for (int i = 0; i < profit.size(); ++i) jobs.push_back(make_pair(difficulty[i],profit[i]));
    sort(jobs.begin(),jobs.end());
    sort(worker.begin(),worker.end());
    int pos = 0,res = 0,maxf = 0;
    for (auto work:worker) {
        while (work >= jobs[pos].first && pos < jobs.size())
        {
            maxf = max(jobs[pos++].second,maxf);
        }
        res += maxf;
    }

    return res;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    int d[5] = {2,4,6,8,10},f[5] = {10,20,30,40,50},w[4] = {4,5,6,7};
    vector<int> difficulty(d,d+5),profit(f,f+5),worker(w,w+4);
    int ret = maxProfitAssignment(difficulty,profit,worker);
        printf("%d,",ret);


    return 0;
}