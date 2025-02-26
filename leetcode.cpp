#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        ranges::sort(nums);
        int n=nums.size();
        int l=0,r=n-1,cnt=0;
        for(int i=0;i<n-2;i++){
            int x=nums[i];
            if(nums[i]+nums[i+1]-nums[i+2]<=0){

            }
            while(l<r){
                int s=x+nums[l]-nums[r];
                if(s>0){
                    cnt+=r-l;
                    l++;

                }else{
                    r--;
                }
            }
        }
        return cnt;
    }
};


int main(){
    Solution s;
    vector<int> bills={5,5,5,10,20};
    cout << s.isPalindrome("A man, a plan, a canal: Panama") << endl;
    return 0;

}