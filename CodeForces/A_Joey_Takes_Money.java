import java.util.*;

/**
 * A_Joey_Takes_Money
 */
public class A_Joey_Takes_Money {

        public static void solve(Scanner sc)
        {
            long ans=1;
            long n = sc.nextInt();
            for(int i=0;i<n;i++)
            {
                long k = sc.nextInt();
                ans*=k;
            }
            ans=(ans+(n-1))*2022;
            System.out.println(ans);
        }
    public static void main(String [] args)
    {
        Scanner sc = new Scanner(System.in);
        long t = sc.nextInt();
        while(t-- > 0)
        {
            solve(sc);
        }
        sc.close();
    }
}