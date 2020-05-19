package com.yhj.day1;

public class Reverse_Integer {
    public int reverse(int x){
        int rev = 0;
        while(x != 0){
            int pop = x % 10;
            x /= 10;
            if((rev > Integer.MAX_VALUE/10) || ((rev == Integer.MAX_VALUE/10) && (pop > Integer.MAX_VALUE%10)))
                //System.out.println("溢出");
                return 0;
            if((rev < Integer.MIN_VALUE/10) || ((rev == Integer.MAX_VALUE/10) && (pop < Integer.MAX_VALUE%10)))
                return 0;

            rev = rev * 10 + pop;
        }
        return rev;
    }
}