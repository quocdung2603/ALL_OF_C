import java.util.*;

public class A_Super_Agent {
    public static void main(String[] args)
    {
        try (Scanner sc = new Scanner(System.in)) {
            char [][] a= new char[3][3];
            char [][] b =new char[3][3];
            String s = new String();
            
            for(int i=0;i<a.length;i++)
            {
                s=sc.next();
                for(int j=0;j<a[i].length;j++) 
                {
                    a[i][j]=s.charAt(j);
                    b[b.length-1-i][b[i].length-1-j]=a[i][j];
                    // a[i][j] = sc.nextInt();
                }
            }
            for(int i=0;i<a.length;i++)
            {
                for(int j=0;j<a.length;j++)
                {
                    // System.out.print(a[i][j]);
                    if(a[i][j]!=b[i][j])    
                    {
                        System.out.println("NO");
                        return;
                    }
                }
                // System.out.println( '\n');
            }
            System.out.println("YES");
            sc.close();
        }
    }
}