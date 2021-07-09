package code;
import java.util.Scanner;

public class testData2 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
       
        String id = "";
        String name = "";
        String phone = "";
        String title = "";
        int salary = 0;
        int employeeNum = 0;
        int studentNum = 0;
        String status = "";

        System.out.print("How many employees do you have:");
        employeeNum = sc.nextInt();

        employees data[];
        data = new employees[employeeNum];

        for(int i = 0; i < employeeNum ; i++)
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

            data[i] = new employees(id, name, phone, title, salary);
        }

        System.out.print("How many students do you have:");
        studentNum = sc.nextInt();

        Students stuData[];
        stuData = new Students[studentNum];

        for(int i = 0; i < studentNum ; i++)
        {
        	System.out.println("No." + (i+1) );

            System.out.print("ID:");
            id = sc.next();//input id

            System.out.print("Name:");
            name = sc.next();//input name

            System.out.print("Phone:");
            phone = sc.next();//input phone number

            System.out.print("status:");
            status = sc.next();//input status

            stuData[i] = new Students(id, name, phone, status);
        }

        System.out.println("=============== OUTPUT ===============");
        for(int i = 0; i < data.length; i++)//show result
        {
            System.out.print("Employee No ." + (i+1));
            data[i].showinfo();
        }
        System.out.println("--------------- LINE ---------------");
        for(int i = 0; i < stuData.length; i++)//show result
        {
            System.out.print("Student No ." + (i+1));
            stuData[i].showinfo();
        }


        // choose if you want to change information of the data
        String choice = "";
        int choice2 = 0;

        System.out.print("Do you want to change the information(Y/N):");
        choice = sc.next();

        if(choice.equals("y") || choice.equals("Y"))
        {
            System.out.print("1.Employees or 2.Students:");
            choice2 = sc.nextInt();
            if(choice2 == 1)
            {
                System.out.print("Who do you want to change:");
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

                data[num - 1] = new employees(id, name, phone, title, salary);
            }

            if(choice2 == 2)
            {
                System.out.print("Who do you want to change:");
                int num = sc.nextInt();

                System.out.println("Please enter new data:");

                System.out.print("ID:");
                id = sc.next();//input id

                System.out.print("Name:");
                name = sc.next();//input name

                System.out.print("Phone:");
                phone = sc.next();//input phone number

                System.out.print("status:");
                status = sc.next();//input status

                stuData[num - 1] = new Students(id, name, phone, status);
            }
        }

        System.out.println("=============== OUTPUT ===============");

        for(int i = 0; i < data.length; i++)//show result
        {
            System.out.print("No ." + (i+1));
            data[i].showinfo();
        }
        System.out.println("--------------- LINE ---------------");
        for(int i = 0; i < stuData.length; i++)//show result
        {
            System.out.print("Student No ." + (i+1));
            stuData[i].showinfo();
        }

        sc.close();
    }
}

class persons
{
    protected String id = "";
    protected String name = "";
    protected String phone = "";

    public persons(String id, String name, String phone)
    {
        this.id = id;
        this.name = name;
        this.phone = phone;
    }

    public void showinfo()//requirement
    {
        System.out.println("");
    }
}

class employees extends persons
{
    protected String title = "";
    protected int salary = 0;
    
    public employees(String id, String name, String phone, String title, int salary)
    {
        super(id, name, phone);
        this.title = title;
        this.salary = salary;
    }

    @Override//override
    public void showinfo()//show info 
    {
		System.out.println("\tID:" + super.id + "\tName:" + super.name + "\tPhone:" + super.phone + "\ttitle = " + title + "\tsalary = " + salary);
    }
}

class Students extends persons
{
    private String status = "";

    public Students(String id, String name, String phone, String status)
    {
        super(id, name, phone);
        this.status = status;
    }

    @Override//override
    public void showinfo()
    {
		System.out.println("\tID:" + super.id + "\tName:" + super.name + "\tPhone:" + super.phone + "\tstatus:" + status);
    }
}