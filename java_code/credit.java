package java_code;
import java.util.Scanner;

public class credit 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("請輸入信用額度:");
        int credit = sc.nextInt();
        System.out.print("繳款是否正常(1正常,0不正常):");
        int normal = sc.nextInt();

        if(normal == 1)//判斷繳款正常
        {
            System.out.print("請輸入持卡年份:");
            double year = sc.nextDouble();

            if(year >= 1)//判斷年份
            {
                System.out.println("你能夠預借的現金為:"+credit);
            }
            else if(year >= 0.5 && year <1)
            {
                System.out.println("你能夠預借的現金為:" +credit/2);
            }
            else if(year < 0.5)
            {
                System.out.println("你無法預借現金！");
            }

        }
        else if(normal == 0)//判斷繳款不正常
        {
            System.out.println("你無法預借現金！");
        }

        sc.close();
    }
    
}