import java.util.*;
public class A_Competitive_Programmer {

    static class Solution
    {
        void solve(Scanner sc)
        {
            String s= new String();
            s= sc.next();
            int sum=0;
            boolean c0=false,ce=false;
            for(int i=0;i<s.length();i++)
            {
                sum = sum + (s.charAt(i)- '0');
                if(s.charAt(i)=='0' && c0==false)
                {
                    c0=true;
                    continue;
                }
                if((s.charAt(i)-'0')%2==0) ce=true;
            }
            if(c0==true && ce==true && sum%3==0) 
                System.out.println("red");
            else 
                System.out.println("cyan");
        }
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        while(n-->0)
        {
            new Solution().solve(sc);
        }
        sc.close();
    }
}