package code;

import java.util.*;

public class aa123 
{
    public static void main(String args[]) 
    {
        Scanner sc = new Scanner(System.in);
        
        int a[] = new int[5];

        for(int i = 0; i < 5; i++)
        {
            a[i] = sc.nextInt();
        }
        find.sortbtg(a);

        sc.close();
    }
    
}
class find
{
    public static void sortbtg(int a[])
    {   
        int mid = 0;

        for(int i = 0; i < 5; i++)//sort and exchange
        {
            for(int j = i; j < 5; j++)
            {    if(a[i] < a[j])
                {   
                    mid = a[i];
                    a[i] = a[j];
                    a[j] = mid;
                }
            }    
            System.out.print(a[i]);
            System.out.print("   ");
        }
        
        System.out.println();
    }
}