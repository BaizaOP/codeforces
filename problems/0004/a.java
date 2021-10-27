import java.util.*;
import java.io.*;

public class a
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int anime = sc.nextInt();

        if(anime > 2 && anime % 2 == 0) 
        {
            System.out.println("YES");
        } 
        else 
        {
            System.out.println("NO");
        }
    }
}
