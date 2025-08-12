class Solution {
private:
    bool check(vector<int>& bloomDay, int m, int k, int days) {
        int counter=0;
        int bouqet_made=0;
        for (int i=0; i<bloomDay.size(); i++) {
            if(days>=bloomDay[i]){
                //bloom condition
                counter++;
                if (counter==k) {
                    bouqet_made++;
                    counter=0;
                }
            }
            else{
                counter=0;
            }
        }
        return bouqet_made>=m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long) m*k>bloomDay.size()) {
            return -1;
        }

        int start=*min_element(bloomDay.begin(), bloomDay.end());
        int end=*max_element(bloomDay.begin(), bloomDay.end());

        while(start<=end) {
            int mid=start+(end-start)/2;
            if (check(bloomDay, m, k, mid)){end=mid-1;}
            else{start=mid+1;}
        }
        return start;
    }
};