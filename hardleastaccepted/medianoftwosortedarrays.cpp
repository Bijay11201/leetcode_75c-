class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size();
        int m=nums2.size();
        priority_queue <int ,vector<int>, greater<int>> pq;
        for(int i=0;i<n;i++){
            pq.push(nums1[i]);
        }
        for(int i=0;i<m;i++){
            pq.push(nums2[i]);
        }
        int check=n+m;
        double mid1,mid2;
        double count=-1;
        while(!pq.empty()){
            count++;
            if(check%2!=0 && count==(check/2)){
                double ans=pq.top();
                return ans;
            }
            if (check%2==0 && count==(check/2)-1){
                mid1=pq.top();
            }
            if(check%2==0 && count==(check/2)){
                mid2=pq.top();
                double ans=(mid1+mid2)/2;
                return ans;
            }
            pq.pop();
        }
        return 0.00;
    }
};