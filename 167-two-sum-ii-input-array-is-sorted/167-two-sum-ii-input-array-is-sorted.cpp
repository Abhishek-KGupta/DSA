class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int x=numbers.size();
        int first=0;
        int second=x-1;
        while(first<second)
        {
            int sum=numbers[first]+numbers[second];
            if(sum==target)
                return{first+1,second+1};
            if(sum>target)
                second--;
            else
                first++;
        }
        return{0};
    }
};