package code;

public class abc {
    
    public static void main(String[] args)
    {
        int[] a = new int[]{10,10,10,10,10};
        int sum = 0;
        for(int i = 0; i <= a.length -1; i++)
        {
            sum += a[i];
        }
        System.out.println(sum);
        
    }
}
