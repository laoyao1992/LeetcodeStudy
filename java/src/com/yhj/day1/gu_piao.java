package com.yhj.day1;

public class gu_piao {
    private static  int maxProfit = 0;
    private static int[] prices = {2, 3, 5, 1, 11, 7, 18};
    public static void main(String args[]){
        maxProfit = maxProfit2(prices);
        System.out.println("max profit is:"+maxProfit);

        two_sums ts = new two_sums();
        int[] nums = new int[2];
        nums = ts.func_two_sums(prices, 12);
        System.out.print("the tager index is:[");
        for(int i = 0; i < 2; i++)
        {
            if (i == 0)
                System.out.print(nums[i]+", ");
            else
                System.out.print(nums[i]);
        }

        System.out.println("]");
//        System.out.println("Max is:"+Integer.MAX_VALUE);
//        System.out.println("Min is:"+Integer.MIN_VALUE);

        Reverse_Integer Ri = new Reverse_Integer();
        int value = Ri.reverse(15456415);
        System.out.println("reverse value is:"+value);

        three_sum Ts = new three_sum();
        int nums_2[] = {-4, 5, 0, 2, 1, 2};
        Ts._threeSum(nums_2);

    }
    public static int maxProfit(int prices[]){
        int _maxProfit = 0;
        for(int i = 0; i < prices.length - 1; i++){
            for(int j = i + 1; j < prices.length; j++){
                if(_maxProfit < prices[j] - prices[i])
                    _maxProfit = prices[j] - prices[i];
            }
        }
        return _maxProfit;
    }
    public static int maxProfit2(int prices[]){
        int _maxProfit = 0;
        int minprice = Integer.MAX_VALUE;
        for(int i = 0; i <prices.length; i++){
            if (prices[i] < minprice)
                minprice = prices[i];
            else if(prices[i] - minprice > _maxProfit)
                _maxProfit = prices[i] - minprice;
        }
        return _maxProfit;
    }
}
