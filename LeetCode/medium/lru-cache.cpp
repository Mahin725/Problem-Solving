class LRUCache {
    private:
        list<int>lruCache;
        unordered_map<int,int>key_value;
        unordered_map<int,list<int>::iterator>addressOf;
        int maxCapacity;
        void evict(){
            addressOf.erase(lruCache.front());
            key_value.erase(lruCache.front());
            lruCache.pop_front();
        }

public:
    LRUCache(int capacity) {
        maxCapacity=capacity;
    }
    
    int get(int key) {
        if(!key_value.count(key))
            return -1;
        lruCache.erase(addressOf[key]);
        lruCache.push_back(key);
        addressOf[key]= (--lruCache.end());
        return key_value[key];
    }
    
    void put(int key, int value) {
        if(maxCapacity==lruCache.size() && !key_value.count(key)){
            evict();
        }
        if(key_value.count(key)){
            lruCache.erase(addressOf[key]);
        }
        //list e push_back korbo
        lruCache.push_back(key);
        //iterator ta addressOf a add korbo
        addressOf[key] = (--lruCache.end());
        //then key value pair e add korbo
        key_value[key] = value;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */