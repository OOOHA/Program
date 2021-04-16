package java_code;

import java.util.Scanner;

public class input 
{
    public static void main(String[] args) 
    {
        
        Scanner sc = new Scanner(System.in);
                
        System.out.println("輸入東西:");
        int a,b,c;
        String d;
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        d = sc.next();
        System.out.println("你輸入的:");
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
        System.out.println(a + b + c);
        System.out.println(d + a);
        
        sc.close();//use this to stop System.in leak
    }
    
}