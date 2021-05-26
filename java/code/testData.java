package code;
import java.util.Scanner;

public class testData
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
       
        String id = "";
        String name = "";
        String phone = "";
        String title = "";
        int salary = 0;
        int personnum = 0;

        System.out.print("How many employee do you have:");
        personnum = sc.nextInt();

        person data[];
        data = new person[personnum];

        for(int i = 0; i < personnum ; i++)
        {
        	System.out.println("No." + (i+1) );

            System.out.print("ID:");
            id = sc.next();//input id

            System.out.print("Name:");
            name = sc.next();//input name

            System.out.print("Phone:");
            phone = sc.next();//input phone number

            System.out.print("title:");
            title = sc.next();//input title

            System.out.print("salary:");
            salary = sc.nextInt();//input salary

            data[i] = new person(name, id, phone);
        }

        String choice = "";

        System.out.print("Do you want to change the information(Y/N):");
        choice = sc.next();

        if(choice.equals("y") || choice.equals("Y"))
        {
            System.out.print("Who do you whant to change:");
            int num = sc.nextInt();

            data[num] = new person(id,name,phone);
        }

        sc.close();
    }
}

class person
{
    private String id;
    private String name;
    private String phone;

    public person(String id, String name, String phone)
    {

    }

    public void setID(String id)
    {
        this.id = id;
    }
    public void setName(String name)
    {
        this.name = name;
    }
    public void setPhone(String phone)
    {
        this.phone = phone;
    }
}

class employee extends person
{
   
    private String title;
    private int salary;

    public employee(String id, String name, String phone)
    {
        super(id, name, phone);
    }
    public void setTitle()
    {

    }
    public void setSalaey()
    {

    }
}