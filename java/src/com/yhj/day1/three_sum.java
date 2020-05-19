package com.yhj.day1;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class three_sum {
    public List<List<Integer>>  _threeSum(int[] nums){
        Arrays.sort(nums);
        List<List<Integer>> res = new ArrayList();
        for(int i = 0; i < nums.length; i++){
            int target = 0 - nums[i];
            int l = i + 1;
            int r = nums.length - 1;
            if(nums[i] > 0)
                break;
            /*考虑重复值的情况，需要跳过*/
            if(i == 0 || (nums[i] != nums[i - 1])){
                while(l < r){
                    if(nums[l] + nums[r] == target){
                        res.add(Arrays.asList(nums[i], nums[l], nums[r]));
                        while(l < r && nums[l] == nums[l++]) l++;    /*同样处理重复值的情况*/
                        while(l < r && nums[r] == nums[r--]) r--;
                        l++;
                        r--;
                    }else if(nums[l] + nums[r] < target)
                        l++;
                    else
                        r--;
                }
            }
        }
        return res;
    }
}
