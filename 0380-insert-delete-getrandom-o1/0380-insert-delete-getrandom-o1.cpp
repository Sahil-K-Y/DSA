class RandomizedSet {
    private:
        unordered_map<int,int>count;
        vector<int>num;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(count.find(val)!=count.end())return false;
        num.push_back(val);
        count[val]=num.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(count.find(val)==count.end())return false;
        int idx=count[val];
        int last=num.back();

        num[idx]=last;

        count[last]=idx;
        num.pop_back();
        count.erase(val);
        return true;

    }
    
    int getRandom() {
        return num[rand()%num.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */