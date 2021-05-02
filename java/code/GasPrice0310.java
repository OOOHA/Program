package code;

import java.util.Scanner;

public class GasPrice0310 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // 顯現各種油類油價
        System.out.println("現在92無鉛油價為25元");
        System.out.println("現在95無鉛油價為27元");
        System.out.println("現在98無鉛油價為29元");
        System.out.print("請輸入要加的油種:");
        int gas_kind = sc.nextInt();
        System.out.print("請輸入要加的公升數:");
        int gas_price = sc.nextInt();

        // 輸出選擇的油品價錢
        if (gas_kind == 92) 
        {
            System.out.println("油價為:" + gas_price * 25);
        } 
        else if (gas_kind == 95) 
        {
            System.out.println("油價為:" + gas_price * 27);
        } 
        else if (gas_kind == 98) 
        {
            System.out.println("油價為:" + gas_price * 29);
        }
        else
        {
            System.out.println("種類無效,請重新入!");
        }

        sc.close();
    }
}