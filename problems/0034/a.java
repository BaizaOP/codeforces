import java.util.*;
import java.io.*;

public class a
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int [] nums = new int[num];
        for(int i = 0; i < num; i++) 
        {
            int a = sc.nextInt();
            nums[i] = a;
        }
        int minDiff = 2000;
        int index1 = -1;
        int index2 = -1;
        for(int i = 0; i < nums.length; i++) 
        {
            int one = i;
            int two = (i+1 == nums.length ? 0 : i+1);
            int diff = (nums[two] >= nums[one] ? nums[two] - nums[one] : nums[one] - nums[two]);
            if(diff < minDiff) 
            {
                index1 = one;
                index2 = two;
                minDiff = diff;
            }
        }
        
        System.out.println((index1+1) + " " + (index2+1));
    }
}
