#include<bits/stdc++.h>
using namespace std;
//Tader finnishing time onujayee sort korar function
bool compareJobs(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
}
vector<pair<int, int>> scheduleJobs(vector<pair<int, int>>& jobs)
{
    //vector of pair k criteria onujayee sort kore nei
    sort(jobs.begin(), jobs.end(), compareJobs);
    vector<pair<int, int>> schedule;
    schedule.push_back(jobs[0]);//1st task ta assign kori
    for (int i = 1; i < jobs.size(); i++)
    {
        //check kore dekhi ager kaj sesh howar por eita shuru kora jay ki na
        if (jobs[i].first >= schedule.back().second)
        {
            schedule.push_back(jobs[i]);//jehetu possible so eita list e add kore nei
        }
    }
    return schedule;
}
int main()
{
    vector<pair<int, int>> jobs = {{1, 4}, {2, 3}, {3, 5}, {4, 7}, {5, 9}};
    vector<pair<int, int>> schedule = scheduleJobs(jobs);
    cout << "Scheduled Jobs:\n";
    for (const auto& job : schedule)
    {
        cout << "Start time: " << job.first << ", Finish time: " << job.second << "\n";
    }
    return 0;
}
