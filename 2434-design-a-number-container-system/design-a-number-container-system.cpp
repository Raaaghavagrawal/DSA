class NumberContainers {
public:
    unordered_map<int,set<int>>nums;
    unordered_map<int,int>indtonum;
    NumberContainers() {
    }
    void change(int index, int number) {
        if(indtonum.find(index)!=indtonum.end()){
            int currnum=indtonum[index];
            nums[currnum].erase(index);
        }
        nums[number].insert(index);
        indtonum[index]=number;
    }
    int find(int number) {
        if(nums.find(number)!=nums.end() && !nums[number].empty()){
            return *nums[number].begin();
        }
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */