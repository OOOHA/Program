package code;
import java.util.Scanner;

public class StudentData 
{
	public static void main(String[] args) 
    {
		Scanner sc = new Scanner(System.in);

        String id = "";
        String name = "";
        String phone = "";
        int student_num = 0;

        System.out.print("How many students do you have: ");//students number
        student_num = sc.nextInt();

        Student student_info[];
        student_info = new Student[student_num];

        for(int i = 0; i < student_num ; i++)
        {
        	System.out.println("No." + (i+1) );

            System.out.print("Name:");
            name = sc.next();//input name

            System.out.print("ID:");
            id = sc.next();//input id

            System.out.print("Phone:");
            phone = sc.next();//input phone number

            student_info[i] = new Student(name, id, phone);
        }

        System.out.println("==================== Student  information =====================");
        Student.show(student_info);

        sc.close();
    }
}
class Student
{
    private String name =  "";
    private String id = "";
    private String phone = "";

    public Student (String name, String id, String phone)//Constructor
    {
        this.name = name;
        this.id = id;
        this.phone = phone;
    }
    public static void show(Student stu[])
    {
		for(int i = 0; i < stu.length; i++)
		{
			System.out.println("No." + (i + 1) + "  Name = " + stu[i].name + ":\tID = " + stu[i].id + "\tPhone = " + stu[i].phone);
		}
    }
}