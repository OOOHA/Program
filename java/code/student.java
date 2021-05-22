package code;
import java.util.Scanner;

public class student 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("How much student do you have:");
        int studentNum = 0;
        studentNum = sc.nextInt(); //user input student amount

        data stu[] = new data[studentNum + 1];

        String name = "";
        int id = 0;
        String phone = "";
        for(int i = 1; i < studentNum + 1; i++)
        {
            System.out.println("No." + i + "  ");//21 ~ 31 are user input
            System.out.print("Name:");
            name = sc.next();

            System.out.print("ID:");
            id = sc.nextInt();
            sc.nextLine();

            System.out.print("Phone:");
            phone = sc.nextLine();
            System.out.println();
            stu[i] = new data(name, id, phone);//call the constructor
        }

        System.out.println("=============== Students information ===============");
        for(int i = 1; i < studentNum + 1; i++)
        {
            System.out.print("NO." + i + "  ");
            stu[i].show();//call show method
        }
        sc.close();//stop system.in leak
    }
}

class data
{
    private String name = "";
    private int id = 0;
    private String phone = "";

    public data(String name, int id, String phone)
    {
        this.name = name;
        this.id = id;
        this.phone = phone;
    }
    public void show()
    {   
        System.out.println("Name:" + name + "\tID: " + id + "\tPhone:" + phone);
    }
}