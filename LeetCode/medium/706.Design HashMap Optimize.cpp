class MyHashMap {
private:
    const static int BUCKET_SIZE = 10004;
    const static int BASE = 991;

    vector<pair<int, int>> mpforHash[BUCKET_SIZE];
    int getHash(int key) { return (key * BASE) % BUCKET_SIZE; }
    bool isKeyExits(int key, int value) {
        int hashValue = getHash(key);
        for (auto& pair : mpforHash[hashValue]) {
            if (pair.first == key) {
                pair.second = value;
                return true;
            }
        }
        return false;
    }
    int getValueByHash(int key) {
        int hashValue = getHash(key);
        for (auto& pair : mpforHash[hashValue]) {
            if (pair.first == key) {
                return pair.second;
            }
        }
        return -1;
    }
    void removemap(int key) {
        int hashValue = getHash(key);
        auto& bucket = mpforHash[hashValue];

        for (auto it = bucket.begin(); it != bucket.end(); ++it) {
            if (it->first == key) {
                bucket.erase(it);
                break;
            }
        }
    }

public:
    MyHashMap() {}

    void put(int key, int value) {
        int hashValue = getHash(key);
        if (!isKeyExits(key, value)) {
            mpforHash[hashValue].push_back({key, value});
        }
    }
    int get(int key) { return getValueByHash(key); }

    void remove(int key) { removemap(key);}
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */