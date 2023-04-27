import java.util.*;
public class B_Numbers_Box {
    static class Solution
    {
        void solve(Scanner sc)
        {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int cnt=0,s=0,mn=Integer.MAX_VALUE,x=0;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    x = sc.nextInt();
                    if(x<0) cnt++;
                    mn = Math.min(mn, Math.abs(x));
                    s+=Math.abs(x);
                }
                
            }  
            if(cnt%2!=0) 
                s=s-2*mn;
            System.out.println(s);
        }
    }
    public static void main(String[] agrs)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while(n-->0)
        {
            new Solution().solve(sc);
        }
        sc.close();
    }
}