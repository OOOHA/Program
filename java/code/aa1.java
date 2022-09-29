package code;
import java.util.*;
public class  aa1 {
    public static void main(String[] args) {
        int[] wight = new int[3];
        int[] price = new int[3];
        String[] name = new String[3];
        name[0] = "item_1";
        name[1] = "item_2";
        name[2] = "item_3";
        int save = 0;
        String saves;
        double[] proportion = new double[3];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Weight");
        int backpack = sc.nextInt();
        for (int i = 0; i < 3; i++) {
            System.out.println("Weight" + (i + 1) + "item~Value");
            wight[i] = sc.nextInt();
            price[i] = sc.nextInt();
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 2; j++) {
                if (price[j] < price[j + 1]) {
                    save = price[j + 1];
                    price[j + 1] = price[j];
                    price[j] = save;
                    save = wight[j + 1];
                    wight[j + 1] = wight[j];
                    wight[j] = save;
                    saves = name[j + 1];
                    name[j + 1] = name[j];
                    name[j] = saves;
                }
            }
        }

        int[] x = new int[3];
        x[0] = backpack / wight[0];
        x[1] = backpack % wight[0] / wight[1];
        x[2] = backpack % wight[0] % wight[1] / wight[2];
        System.out.println("Use Benefit only need take:" + x[0] + "*" + name[0] + "," + x[1] + "*" + name[1] + "," + x[2]
                + "*" + name[2]);
    }
}
