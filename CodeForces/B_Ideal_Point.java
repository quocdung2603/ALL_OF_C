import java.util.*;
public class B_Ideal_Point {
    static class Solution
    {
        void solve(Scanner sc)
        {
            int n=sc.nextInt();
            int k=sc.nextInt();
            int x=n;
            int c1=0,c2=0;
            while(n-->0)
            {
                int l = sc.nextInt();
                int r = sc.nextInt();
                if(k == l ) c1++;
                if(k==r) c2++;
            }
            if(c1>0 && c2>0) System.out.println("YES");
            else System.out.println("NO");
        }
    }
    public static void main(String[] agrs)
    {
        Scanner sc = new Scanner(System.in);
        int z=sc.nextInt();
        while(z-->0)
        {
            new Solution().solve(sc);
        }
        sc.close();
    }
}