
import java.util.Scanner;

public class A_Good_ol_Numbers_Coloring {
    static class Solution 
    {
        int GCD(int a, int b)
        {
            if(a==0 || b==0) 
                return a+b;
            while(a!=b)
            {
                if(a>b) a-=b;
                else b-=a;
            }
            return a;
        }
        void solve(Scanner sc)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int k = GCD(a, b);
            if(k==1) System.out.println("Finite");
            else System.out.println("Infinite");
        }
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while(n-- >0 )
        {
            new Solution().solve(sc);
        }
        sc.close();
    }
}