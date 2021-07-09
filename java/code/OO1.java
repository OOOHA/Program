package code;
import java.util.Scanner;

public class OO1 
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Please input chicken's name:");
        String chicken = sc.nextLine();

        System.out.print("Please input chicken's dick:");
        String dick = sc.nextLine();

        OO chicken1 = new OO(chicken, dick);
        OO chicken2 = new OO("Henry", "Big dick");
        OO chicken3 = new OO();

        System.out.printf("chicken1 - name: %s, dick: %s  \n", chicken1.getName(), chicken1.getDick());
        chicken1.sperm();

        System.out.printf("chicken2 - name: %s, dick: %s  \n", chicken2.getName(), chicken2.getDick());
        chicken2.sperm();

        System.out.printf("chicken2 - name: %s, dick: %s  \n", chicken3.getName(), chicken3.getDick());
        chicken3.sperm();

        sc.close();
    }
}
