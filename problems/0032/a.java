import java.util.*;
import java.io.*;

public class a
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        String anime = sc.next();
        String nums = "";
        while(anime.length() > 0) 
        {
            if(anime.charAt(0) == '.')
            {
                nums += '0';
                anime = anime.substring(1);
            }
            else
            {
                if(anime.charAt(1) == '.') 
                {
                    nums += '1';
                }
                else if(anime.charAt(1) == '-')
                {
                    nums += '2';
                }
                else 
                {
                    System.out.println("Something went seriously wrongs");
                }
                anime = anime.substring(2);
            }
        }
        System.out.println(nums);
    }
}
