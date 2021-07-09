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

        employee data[];
        data = new employee[personnum];

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

            data[i] = new employee(id, name, phone, title, salary);
        }
        for(int i = 0; i < data.length; i++)//show result
        {
            System.out.print("No ." + (i+1));
            data[i].showinfo();
        }

        // choose if you want to change information of the data
        String choice = "";

        System.out.print("Do you want to change the information(Y/N):");
        choice = sc.next();

        if(choice.equals("y") || choice.equals("Y"))
        {
            System.out.print("Who do you whant to change:");
            int num = sc.nextInt();

            System.out.println("Please enter new data:");

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

            data[num - 1] = new employee(id, name, phone, title, salary);
        }
        for(int i = 0; i < data.length; i++)//show result
        {
            System.out.print("No ." + (i+1));
            data[i].showinfo();
        }

        sc.close();
    }
}

class person
{
    protected String id = "";
    protected String name = "";
    protected String phone = "";

    public person(String id, String name, String phone)
    {
        this.id = id;
        this.name = name;
        this.phone = phone;
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
    private String title = "";
    private int salary = 0;
    
    public employee(String id, String name, String phone, String title, int salary)
    {
        super(id, name, phone);
        this.title = title;
        this.salary = salary;
    }
    public void setTitle(String title)
    {
        this.title = title;
    }

    public void setsalary(int salary)
    {
        this.salary = salary;
    }

    public void showinfo()//show info 
    {
		System.out.println("\tID:" + super.id + "\tName:" + super.name + "\tPhone:" + super.phone + "\ttitle = " + title + "\tsalary = " + salary);
    }
}