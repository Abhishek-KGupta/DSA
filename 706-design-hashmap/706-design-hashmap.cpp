class MyHashMap {
public:
    int res[1000001];
    MyHashMap() {
        fill( res, res + 1000001, -1);
    }
    
    void put(int key, int value) {
        res[key] = value;
    }
    
    int get(int key) {
        return res[key];
    }
    
    void remove(int key) {
        res[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */