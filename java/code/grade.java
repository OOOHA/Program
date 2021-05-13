package code;
import java.util.Scanner;


public class grade{
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

        int choice;
        int choice2;

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
                total_without_weighted[i][0] += (student_info[i][j] + student_info[i][j] + student_info[i][j] + student_info[i][j]);
            }
            total_with_weighted[i][0] = total_with_weighted[i][0] / 4;
            total_without_weighted[i][0] = total_without_weighted[i][0] / 4;
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

        System.out.println("Please choose which sorting system you need:");
        System.out.println("1.By student ID.");
        System.out.println("2.By total.");
        System.out.println("3.By average.");

        choice = sc.nextInt();
        
        if (choice == 1)
        {
            System.out.println("which one would you like:");
            System.out.println("1.From small to big:");
            System.out.println("2.From big to small:");
            choice2 = sc.nextInt();

            System.out.println();
            System.out.println("This is after arrangement:");
            System.out.println("Sort by student ID:");
            System.out.println("ID          Pro  net  CS   cal   sum   ave");

            if(choice2 == 1)
            {
                for(int i = 0; i < 5; i++)//sort and exchange
                {
                    for(int j = i; j < 5; j++)
                    {
                        if(student_info[i][0] > student_info[j][0])
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
            }

            if(choice2 == 2)
            {
                for(int i = 0; i < 5; i++)//sort and exchange
                {
                    for(int j = i; j < 5; j++)
                    {
                        if(student_info[i][0] < student_info[j][0])
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
            }

        }
        if(choice == 2)
        {
            System.out.println("which one would you like:");
            System.out.println("1.From small to big:");
            System.out.println("2.From big to small:");
            choice2 = sc.nextInt();

            System.out.println();
            System.out.println("This is after arrangement:");
            System.out.println("Sort by total:");
            System.out.println("ID          Pro  net  CS   cal   sum   ave");

            if(choice2 == 1)
            {
                for(int i = 0; i < 5; i++)//sort and exchange
                {
                    for(int j = i; j < 5; j++)
                    {
                        if(total_with_weighted[i][0] > total_with_weighted[j][0])
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
            }

            if(choice2 == 2)
            {
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
            }
        }

        if(choice == 3)
        {
            System.out.println("which one would you like:");
            System.out.println("1.From small to big:");
            System.out.println("2.From big to small:");
            choice2 = sc.nextInt();

            System.out.println();
            System.out.println("This is after arrangement:");

            System.out.println("Sort by average:");
            System.out.println("ID          Pro  net  CS   cal   sum   ave");

            if(choice2 == 1)
            {
                for(int i = 0; i < 5; i++)//sort and exchange
                {
                    for(int j = i; j < 5; j++)
                    {
                        if(average[i][0] > average[j][0])
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
            }
            if(choice2 == 2)
            {
                for(int i = 0; i < 5; i++)//sort and exchange
                {
                    for(int j = i; j < 5; j++)
                    {
                        if(average[i][0] < average[j][0])
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
            }
        }
        sc.close();
    }
}