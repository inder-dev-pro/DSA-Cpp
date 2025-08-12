class Solution {
private:
    bool works(vector<int>& piles, int h, double k) {
        double total_hours=0;
        for (int i=0; i<piles.size(); i++) {
            total_hours+=ceil(piles[i]/k);
        }
        if (total_hours<=h){
            return true;
        }
        else{
            return false;
        }
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max=*max_element(piles.begin(), piles.end());
        int start=1;
        while(start<=max) {
            int mid=start+(max-start)/2;
            if (works(piles, h, mid)){
                max=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return start;
    }
};