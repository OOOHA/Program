package java_code;
import java.util.Scanner;

public class grade4 
{
    public static void main(String[] args)
    {   
        Scanner sc = new Scanner(System.in);

        int student_info[][];//store student ID and grades
        student_info = new int[5][5];

        float total_with_weighted[][];//store student's grides with weighted
        total_with_weighted = new float[5][1];

        float total_without_weighted[][];//store student's grides without weighted
        total_without_weighted = new float[5][1];   
        
        float average[][];//store average of student's grades 
        average = new float[5][1];

        for(int i = 0; i < 5; i++)//let user to enter the students grades and ID
        {
            for(int j = 0; j < 5; j++)
            {
                student_info[i][j] = sc.nextInt();
            }
        }

        for(int i = 0; i < 5; i++)//calculate student's grades
        {
            for(int j = 1; j < 5; j++)
            {
                int s = 1;
                total_with_weighted[i][0] += (float)(student_info[i][s] * 0.2 + student_info[i][s + 1] * 0.25 + student_info[i][s + 2] * 0.25 + student_info[i][s + 3] * 0.3);
                total_without_weighted[i][0] += student_info[i][j];
            }
            total_with_weighted[i][0] = total_with_weighted[i][0] / 4;
            average[i][0] = total_without_weighted[i][0] / 4;       
        }


        System.out.println("This is before arrangement:");   
        System.out.println("ID          Pro  net  CS   cal   sum   ave"); 

        for(int i = 0; i < 5; i++)//output before sort
        {
            for(int j = 0; j < 5; j++)
            {
                System.out.print(student_info[i][j]);
                System.out.print("   ");
            }
            System.out.printf("%.2f", total_with_weighted[i][0]);
            System.out.print("  ");
            System.out.println(average[i][0]);
            System.out.println("");
        }

        System.out.println("This is after arrangement:");
        System.out.println("ID          Pro  net  CS   cal   sum   ave"); 

        for(int i = 0; i < 5; i++)//sort and exchange
        {
            for(int j = i; j < 5; j++)
            {
                if(total_with_weighted[i][0] < total_with_weighted[j][0])
                {
                    for(int k = 0; k < 5; k++)
                    {   
                        int middle;
                        middle = student_info[i][k];
                        student_info[i][k] = student_info[j][k];
                        student_info[j][k] = middle;
                    }
                    float middle_average;
                    float middel_total;
                    middle_average = average[i][0];
                    average[i][0] = average[j][0];
                    average[j][0] = middle_average;

                    middel_total = total_with_weighted[i][0];
                    total_with_weighted[i][0] = total_with_weighted[j][0];
                    total_with_weighted[j][0] = middel_total;
                }
            }
        }

        for(int i = 0; i < 5; i++)//output after sort
        {
            for(int j = 0; j < 5; j++)
            {
                System.out.print(student_info[i][j]);
                System.out.print("   ");
            }
            System.out.printf("%.2f", total_with_weighted[i][0]);
            System.out.print("  ");
            System.out.println(average[i][0]);
            System.out.println("");
        }

        float ave[];
        ave = new float[5];

        int max[];
        max = new int[5];

        int min[];
        min = new int[5];

        for(int i = 0; i < 5; i++)//find average for each subject
        {
            for(int j = 1; j < 5; j++)
            {
                ave[j] += student_info[i][j];
            }
        }

        System.out.print("Average:  ");

        for(int i = 1; i < 5; i++)//output average
        {
           System.out.print(ave[i] / 5);
           System.out.print("  "); 
        }
        System.out.println();
        
        System.out.print("Hightest:  ");

        for(int m = 1; m < 5; m++)//find max and min fo each subject
        {
            for(int i = 0; i < 5; i++)
            {   
                min[i] = student_info[i][0];

                for(int j = 0; j < 5; j++)
                {
                    if(max[i] < student_info[j][i])
                    {          
                        max[i] = student_info[j][i];
                    }
                    else if(min[i] > student_info[j][i])
                    {
                        min[i] = student_info[j][i];
                    }
                }
            }

            System.out.print(max[m]+"    ");
        }
        
        System.out.println();
        System.out.print("Lowest:    ");

        for(int i = 1; i < 5; i++)
        {
            System.out.print(min[i]+"    "); 
        }
        System.out.println();

        sc.close();
    }
}
