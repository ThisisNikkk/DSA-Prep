#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    // Count occurrences of each value
    unordered_map<int, int> count;
    for (int num : arr) {
        count[num]++;
    }

    // Get the occurrences counts
    unordered_set<int> occurrences;
    for (const auto& pair : count) {
        occurrences.insert(pair.second);
    }

    // Check if all occurrences counts are unique
    if(count.size() == occurrences.size()) return true;
    else return false;
}

int main (){
    vector<int> arr = {1, 2, 2, 1, 1, 3};
    cout << "Unique Occurrences : " << uniqueOccurrences(arr) << endl;
}