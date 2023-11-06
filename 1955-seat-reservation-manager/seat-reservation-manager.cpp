class SeatManager {
public:
    SeatManager(int n) {
        for (int i = 1; i <= n; i++) {
            free.insert(i);
        }
    }
    
    int reserve() {
        int ret = *free.begin();
        free.erase(ret);
        return ret;
    }
    
    void unreserve(int seatNumber) {
        free.insert(seatNumber);
    }
private:
    set<int> free;
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */