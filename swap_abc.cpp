#include <bits/stdc++.h>

using namespace std;

void swap_val(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

int maxArea(vector<int>& height) {
        int n = height.size();
        int height_array[n];
        int tmp = 0;
        for(auto x : height){
            height_array[tmp] = x;
            cout << height_array[tmp] << " ";
            tmp++;
        } 
        cout << endl;
        int l = 0, r = height.size() - 1;
        int max_area = -1, row = 0, area = 0;
        while( l < r){
            row = r - l;
            cout << "l: " << l << " | " << " r: " << r << endl;
            if(min(height_array[l], height_array[r]) == height_array[l]){
                area = height_array[l] * row;
                l++;
            } 
            else if( (min(height_array[l], height_array[r]) == height_array[r]) ){
                area = height_array[r] * row;
                r--;
            } 
            if( area > max_area) max_area = area;
            cout << " max_area " << area << endl;
        }
        return max_area;
    }

vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> tmp;
        for(vector<int>::iterator ptr = nums.begin(); ptr != nums.end(); ptr++){
            tmp.push_back(*ptr);
            auto l = ptr + 1;
        }
       
    }

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(height);
    return 0;
}