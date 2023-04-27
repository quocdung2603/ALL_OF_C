import java.util.*;
public class A_Dasha_and_Stairs {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int a= sc.nextInt();
        int b=sc.nextInt();
        if(Math.abs(a-b) > 1 || a==b && a==0) 
            System.out.println("NO");
        else 
            System.out.println("YES");
        sc.close();
    }
    
} 