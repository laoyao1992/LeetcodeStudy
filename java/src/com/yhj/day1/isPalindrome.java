package com.yhj.day1;

public class isPalindrome {
    public boolean _isPalindrome(int x){
        if(x < 0)
            return false;
        int div = 1;
        if(x / div >= 10)  /*找到一开始整除取第一位的整数*/
            div *= 10;
        while(x > 0){
            int left = x / div;
            int right = x % 10;
            if(left != right) return false;
            /*去掉首位和末位，然后div缩小两位*/
            x = (x % div) / 10;
            div /= 100;
        }
        return true;
    }
}
