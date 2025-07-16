class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int i=0,j=0;
        vector<int> curr;
        while(i<m && j<n)
        {
          if(nums1[i]<=nums2[j])
          {
            curr.push_back(nums1[i]);
            i++;
          }
          else if(nums1[i]>=nums2[j])
          {
             curr.push_back(nums2[j]);
            j++;
          }
        }
    while(i<m)
    {
       curr.push_back(nums1[i]);
        i++;
    }
    while(j<n)
    {
        curr.push_back(nums2[j]);
        j++;
    }
    int size=curr.size();
    if(size%2!=0)
    {
       return curr[size/2];
    }
    else{
      return (curr[size / 2 - 1] + curr[size / 2]) / 2.0;
    }
    return -1;
    }
};