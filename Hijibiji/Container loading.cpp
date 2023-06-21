#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> loadContainers(vector<int>& items, int containerCapacity) {
    //boro theke choto sort kore nei
    sort(items.begin(), items.end(), greater<int>());
    vector<vector<int>> containers;
    containers.push_back({});//ekta vector innitialize kori jeta arekta vector hold korbe
    int currentContainer = 0;
    int total=0;
    for (int item : items) {
        // Check kori same container e aro item rakha jabe ki na
        if (total+ item <= containerCapacity) {
            containers[currentContainer].push_back(item);
            total+=item;
        }
        else {
            //tahole notun arekta container nei
            currentContainer++;
            containers.push_back({item});
            total=item;
        }
    }
    return containers;
}
int main() {
    vector<int> items = {10, 5, 8, 12, 6, 7};
    int containerCapacity = 20;
    vector<vector<int>> containers = loadContainers(items, containerCapacity);
    cout << "Loaded Containers:\n";
    for (int i = 0; i < containers.size(); i++) {
        cout << "Container " << i + 1 << ": ";
        for (int item : containers[i]) {
            cout << item << " ";
        }
        cout << "\n";
    }
    return 0;
}
