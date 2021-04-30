package Code;


public class Object_Oriented
{
    private String name;

    public Object_Oriented()
    {
    }

    public Object_Oriented(String name)
    {
        this.name = name;
    }

    public void walk()
    {
        System.out.println("Walk");
    }

    public String getName()
    {
        return name;
    }

    public void setName(String name)
    {
        this.name = name;
    }
}