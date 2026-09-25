#include <iostream>
#include <list>
#include <vector>
using namespace std;

class HashTable {
private:
    vector<list<pair<int, string>>> buckets;

    int indexFor(int key) const {
        return (key % static_cast<int>(buckets.size()) + buckets.size()) % buckets.size();
    }

public:
    explicit HashTable(int capacity) : buckets(capacity) {}

    void insert(int key, const string& value) {
        list<pair<int, string>>& bucket = buckets[indexFor(key)];
        for (auto& entry : bucket) {
            if (entry.first == key) {
                entry.second = value;
                return;
            }
        }
        bucket.push_back({key, value});
    }

    bool search(int key, string& value) const {
        const list<pair<int, string>>& bucket = buckets[indexFor(key)];
        for (const auto& entry : bucket) {
            if (entry.first == key) {
                value = entry.second;
                return true;
            }
        }
        return false;
    }
};

int main() {
    HashTable table(5);
    table.insert(1, "one");
    table.insert(6, "six");
    string value;
    if (table.search(6, value)) cout << value << '\n';
    return 0;
}
